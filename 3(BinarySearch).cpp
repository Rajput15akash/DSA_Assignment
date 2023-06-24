#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
  int start = 0;
  int end = nums.size() - 1;
        
  while(start <= end){
    int mid = start + (end - start)/2;
    
    if (nums[mid] == target)
      return mid;
    else if (nums[mid] < target)
      start = mid + 1;
    else
      end = mid - 1;
  }
  
  return start;
}

int main() {
  vector<int> vec = {1,3,5,6};
  int target = 5;

  int index = searchInsert(vec, target);
  cout << "Index: " << index;
  return 0;
}
