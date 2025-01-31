﻿#include <iostream>

#define SIZE 6
#define INF 10000000
using namespace std;

class Graph
{
private:
    int weight[SIZE][SIZE] =
    {
        {0, 2, 5, 3, INF, INF},
        {2, 0, 7, INF, INF, 9},
        {5, 7, 0, 1, 2, 5},
        {3, INF, 1, 0, 7, INF},
        {INF, INF, 2, 7, 0, 2},
        {INF, 9, 5, INF, 2, 0}
    }; // 인접행렬
    bool visited[SIZE]; // 방문배열

    int distance[SIZE];

public:
    Graph()
    {
        for (int i = 0; i < SIZE; i++)
        {
            visited[i] = 0;
        }
    }
    int Find()
    {   // 최소값찾기
        int min = INF;
        int position = 0;
        for (int i = 0; i < SIZE; i++)
        {
            // min보다 작고 방문하지 않았다면
            if (distance[i] < min && visited[i] == false)
            {
                min = distance[i];
                position = i; // 최소값의 인덱스 반환
            }
        }
        return position;
    }

    void Dijkstra(int start)
    {
        for (int i = 0; i < SIZE; i++)
        {
            // 거리 계산
            distance[i] = weight[start][i];
        }
        //distance[start] = 0;
        visited[start] = true;

        for (int i = 0; i < SIZE - 1; i++)
        {
            // 최소값의 인덱스값
            int minnode = Find();

            // 방문배열에 최소값의 인덱스값 넣기 (방문체크)
            visited[minnode] = true;

            for (int j = 0; j < SIZE; j++)
            {
                // 방문했을때 값이 있다면
                if (visited[j] == false)
                {
                    if (distance[minnode] + weight[minnode][j] < distance[j])
                    {
                        distance[j] = distance[minnode] + weight[minnode][j];
                    }
                }
            }
        }
        for (int i = 0; i < SIZE; i++)
        {
            cout << distance[i] << " ";
        }
    }
};


int main()
{
#pragma region 다익스트라 알고리즘
    // 시작점으로부터 모든 노드까지의 최소 거리를 구해주는
    // 알고리즘입니다.

    // 1. distance 배열의 weight[시작점 노드]의 값들로
    //    초기화 합니다.

    // 2. 시작점을 방문 처리합니다.

    // 3. distance 배열에서 최소 비용 노드를 찾고 방문 처리합니다.
    //    단, 이미 방문한 노드는 제외합니다.

    // 4. 최소 비용 노드를 거쳐갈 지 고민해서 distance 배열을 갱신합니다.
    //    단, 이미 방문한 노드는 제외합니다.

    // 5. 모든 노드를 방문할 때까지 3번 ~ 4번을 반복합니다.

    // 방문하지 않은 노드 중에서 가장 작은 distance를 가진 노드를
    // 방문하고, 그 노드와 연결된 다른 노드까지의 거리를 계산합니다.

    Graph graph;

    graph.Dijkstra(0);

#pragma endregion




    return 0;
}