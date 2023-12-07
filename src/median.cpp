#include "median.h"

void Median::InsertNumber(int num) {
    if (maxHeap.empty() || maxHeap.top() > num)
		maxHeap.push(num);
	else
		minHeap.push(num);
    if (maxHeap.size() > minHeap.size() + 1) {
		minHeap.push(maxHeap.top());
		maxHeap.pop();
	} else if (minHeap.size() > maxHeap.size() + 1) {
		maxHeap.push(minHeap.top());
		minHeap.pop();
	}
}

int Median::getMedian() {
	if(maxHeap.empty() && minHeap.empty())
		return 0;
    if (maxHeap.size() == minHeap.size())
		return (maxHeap.top() + minHeap.top())/2;
	else
		return maxHeap.size() > minHeap.size() ? maxHeap.top() : minHeap.top();
}