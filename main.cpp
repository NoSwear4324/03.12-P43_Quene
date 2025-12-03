#include "MyQueue.h"

int main() {

    myQueue::Queue<int> nums;
    nums.show();

    nums.push_back(56);
    nums.push_back(23);
    nums.push_back(-356);
    nums.push_back(9);
    nums.show();

    //обробка черги
    while (!nums.isEmpty()) {
        nums.show();
        cout << "First: " << nums.first() << endl;
        nums.pop_front();
        cout << endl;
    }
    nums.show();
    return 0;
    
}