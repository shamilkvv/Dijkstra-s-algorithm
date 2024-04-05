#include <iostream>
#include <vector>

void createAdjacencyMatrix(std::vector<std::vector<int>> &adjacencyMatrix,int N){
    int el;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            std::cin>>el;
            adjacencyMatrix[i][j]=el;
        }
    }
}

void printMatrix(std::vector<std::vector<int>> &arr, int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            std::cout<<arr[i][j]<<"     ";
        }
        std::cout<<"\n";
    }
}

std::vector<int> Dijkstra(std::vector<std::vector<int>> &graph, int a,int N) {
    std::vector<int> distance(N, 10000);
    distance[a] = 0;

    std::vector<bool> visited(N, 0);
    for (int i = 0; i < N; i++) {
        int u = -1;
        for (int j = 0; j < N; j++) {
            if (!visited[j] && (u == -1 || distance[j] < distance[u])) {
                u = j;
            }
        }

        visited[u] = true;
        for (int v = 0; v < N; v++) {
            if (graph[u][v] && distance[u] + graph[u][v] < distance[v]) {
                distance[v] = distance[u] + graph[u][v];
            }
        }
    }
    return distance;
    //for (int i = 0; i < N; i++) {
    //   std::cout << i << "\t\t" << distance[i] << "\n";
    //  }
}

/*int main() {
    int N=4;
    std::vector<std::vector<int>> adjacencyMatrix(N,std::vector<int>(N,1));
    createAdjacencyMatrix(adjacencyMatrix);
    printMatrix(adjacencyMatrix);
    int a=3;
    Dijkstra(adjacencyMatrix,a);

    return 0;
}*/
//
// Created by asus on 05.04.2024.
//
