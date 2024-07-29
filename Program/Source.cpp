#include <iostream>

#define SIZE 7
using namespace std;

class Graph
{
private:
    int parent[SIZE];

public:
    Graph()
    {
        for (int i = 1; i < SIZE; i++)
        {
            parent[i] = i;
        }
    }

    int Find(int x)
    {
        for (int i = 1; i < SIZE; i++)
        {
            if (parent[x] == i)
            {
                return parent[x];
            }
        }
    }

    int Union(int x, int y)
    {
        while (parent[x] != parent[y])
        {
            Find(x);
            Find(y);
            if (parent[x] < parent[y])
            {
                parent[y] = parent[x];
            }
            else
            {
                parent[x] = parent[y];
            }
        }
    }

    bool Same(int x, int y)
    {
        if (Find(x) == Find(y))
        {
            return Find(x);
            return Find(y);
        }
    }
};


int main()
{
#pragma region 유니온 파인드
    // 여러 노드가 존재할 때 어떤 노드가 다른 노드와 연결되어
    // 있는지 확인하는 알고리즘입니다.

    // 유니온 파인드의 시간 복잡도
    // O(MlogN) : M은 연산의 개수, N은 노드의 개수
    // M이 N²에 가까울 때는 O(N²logN)이 됩니다.

    Graph graph;

    graph.Union(1, 2);

    graph.Same(1, 2);

#pragma endregion




    return 0;
}