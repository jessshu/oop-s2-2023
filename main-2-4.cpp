# include <iostream>
extern int sum_min_max(int integers[], int length);

int main() {
    int len = 5;
    int nums[5] = {1,2,3,4,5};

    std::cout << sum_min_max(nums, len) << std::endl;

    return 0;
}