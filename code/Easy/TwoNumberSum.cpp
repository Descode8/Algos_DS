#include <vector>
using namespace std;
// Time: O(n^2) Space: O(1)
vector<int> twoNumberSum(vector<int> array, int targetSum) {
  vector<int>targets;
  int sum = 0; 
  for(int i = 0; i < array.size(); ++i){
     for(int j = i + 1; j < array.size(); ++j){
       sum = array[i] + array[j];
       if(sum == targetSum){
         targets.emplace_back(array[i]);
         targets.emplace_back(array[j]);
       }
     }
  }
  return targets;
}
