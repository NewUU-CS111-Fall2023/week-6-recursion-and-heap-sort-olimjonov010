#include <iostream>
#include <vector>

class Heap {
private:
    std::vector<int> array;

    void maxHeapify(int i, int heapSize) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int largest = i;

        if (left < heapSize && array[left] > array[largest]) {
            largest = left;
        }

        if (right < heapSize && array[right] > array[largest]) {
            largest = right;
        }

        if (largest != i) {
            std::swap(array[i], array[largest]);
            maxHeapify(largest, heapSize);
        }
    }

public:
    Heap(const std::vector<int>& inputArray) : array(inputArray) {}

    void buildMaxHeap() {
        int heapSize = array.size();

        for (int i = heapSize / 2 - 1; i >= 0; --i) {
            maxHeapify(i, heapSize);
        }
    }

    void heapsort() {
        buildMaxHeap();
        int heapSize = array.size();

        for (int i = heapSize - 1; i > 0; --i) {
            std::swap(array[0], array[i]);
            maxHeapify(0, i);
        }
    }

    void printHeap() const {
        for (int num : array) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    // Example usage
    std::vector<int> input1 = {4, 10, 3, 5, 1};
    Heap heap1(input1);
    heap1.heapsort();
    heap1.printHeap();

    std::vector<int> input2 = {25, 17, 36, 2, 8, 19, 1};
    Heap heap2(input2);
    heap2.heapsort();
    heap2.printHeap();

    std::vector<int> input3 = {1, 2, 3, 4, 5};
    Heap heap3(input3);
    heap3.heapsort();
    heap3.printHeap();

    return 0;
}
