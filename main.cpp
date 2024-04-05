#include "dj.cpp"
#include <gtest/gtest.h>

TEST(test,test){
    std::vector<int> exres={0,7,5,12,9};
    std::vector<std::vector<int>> graph = {
            {0,7,5,0,0},
            {7,0,3,5,0},
            {5,3,0,0,4},
            {0,5,0,0,6},
            {0,0,4,6,0}, };
    int N=graph.size();
    int start=0;
    std::vector<int> dj=Dijkstra(graph,start,N);
    ASSERT_EQ(dj,exres);

}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}