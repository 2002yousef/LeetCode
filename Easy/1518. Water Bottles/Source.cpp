#include <iostream>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total_drinks=numBottles, empty_bottles=numBottles;
        while (empty_bottles >= numExchange)
        {
            int new_bottles = empty_bottles / numExchange;
            total_drinks += new_bottles;
            empty_bottles = empty_bottles % numExchange + new_bottles;

        }
        return total_drinks;
    }
};

int main() {
    Solution test;
    cout << test.numWaterBottles(9, 3);
    return 0;
}