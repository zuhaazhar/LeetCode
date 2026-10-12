#include <cstring>

class MedianFinder {
    int arr[50001];
    int nums = 0;

public:
    MedianFinder() {}

    void addNum(int num) {
        int lo = 0, hi = nums;
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if (arr[mid] <= num) lo = mid + 1;
            else hi = mid;
        }

        memmove(&arr[lo + 1], &arr[lo], (nums - lo) * sizeof(int));
        arr[lo] = num;
        nums++;
    }

    double findMedian() {
        if (nums % 2 != 0) return arr[nums / 2];
        return (arr[nums / 2 - 1] + arr[nums / 2]) / 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */