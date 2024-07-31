#include <iostream>
#include <vector>
#include <algorithm>


#define SIZE 8
using namespace std;

class Graph
{
private:

    class Edge
    {
    private:
        int x;
        int y;
        int distance;

    public:
        Edge(int x, int y, int distance)
        {
            this->x = x;
            this->y = y;
            this->distance = distance;
        }

        int& X()
        {
            return x;
        }
        int& Y()
        {
            return y;
        }
        int& Distance()
        {
            return distance;
        }

        bool operator < (const Edge& edge)
        {
            return this->distance < edge.distance;
            // true false 값 반환
        }
    };

    vector <Edge> graph; // Edge를 담을 vector배열

    int parent[SIZE];

    int cost;
public:
    Graph()
    {
        cost = 0;
        for (int i = 1; i < SIZE; i++)
        {
            parent[i] = i;
        }
    }

    void Insert(int x, int y, int distance)
    {
        graph.push_back(Edge(x, y, distance));
    }

    int Find(int x)
    {
        // 부모노드 찾기
        if (parent[x] == x)
        {
            return x;
        }
        else
        {
            parent[x] = Find(parent[x]);
            return parent[x];
        }
    }

    void Union(int x, int y)
    {
        x = Find(x);
        y = Find(y);

        if (x < y)
        {
            parent[y] = x;

        }
        else
        {
            parent[x] = y;
        }
    }

    bool Same(int x, int y)
    {
        return Find(x) == Find(y);
        // 같으면 true 틀리면 false 반환
    }

    void Kruskal()
    {
        sort(graph.begin(), graph.end());

        for (int i = 0; i < graph.size(); i++)
        {
            // 서로 같지 않다면 실행
            if (Same(graph[i].X(), graph[i].Y()) == false)
            {
                cost += graph[i].Distance();

                Union(graph[i].X(), graph[i].Y());
                cout << "Edge: (" << graph[i].X() << ", " << graph[i].Y() << ") - Distance: " << graph[i].Distance() << endl;
            }
        }
        cout << "Graph의 최소 비용: " << cost << endl;

    }



};



int main()
{
#pragma region 신장 트리
    // 그래프의 모든 정점을 포함하면서 사이클이 존재하지 않는
    // 부분 그래프로, 그래프의 모든 정점을 최소 비용으로 연결하는 트리입니다.

    // 그래프의 정점의 수가 n개일 때, 간선의 수는 n-1개입니다.

    // 최소 비용 신장 트리
    // 그래프의 간선들의 가중치 합이 최소인 신장 트리 

    Graph graph;

    graph.Insert(1, 7, 10);
    graph.Insert(1, 4, 28);
    graph.Insert(1, 2, 66);
    graph.Insert(1, 5, 19);

    graph.Insert(2, 4, 25);
    graph.Insert(2, 5, 60);

    graph.Insert(3, 5, 21);
    graph.Insert(3, 6, 35);

    graph.Insert(4, 7, 15);
    graph.Insert(5, 6, 40);

    graph.Kruskal();

#pragma endregion



    return 0;
}