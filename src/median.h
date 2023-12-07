#ifndef MEDIAN_H
#define MEDIAN_H
#include <vector>
#include <queue>

class Median {
    private:
    std::priority_queue<int> maxHeap;
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    public:
    void InsertNumber(int num);
    int getMedian();
};

#endif