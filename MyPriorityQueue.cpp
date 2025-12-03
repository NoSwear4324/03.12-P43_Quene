#include "MyPriorityQueue.h"

int main() {

    myQueue::PriorityQueue<int> nums;
    nums.show();
	cout << "-----------------------------\n";

    nums.push_back(12);
    nums.push_back(18);
    nums.push_back(1);
    nums.push_back(6);
    nums.push_back(34);
	
    nums.show();
	cout << "-----------------------------\n";
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