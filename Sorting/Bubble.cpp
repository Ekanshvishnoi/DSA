
#include<iostream> 
#include <vector>
using namespace std ; 

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
    
        int n =arr.size() ;
        for ( int i=n-1 ; i >= 0 ; i-- ){
            for( int j = 0 ; j <= i - 1 ; j ++){
                if(arr[j] > arr[j+1])
                    swap(arr[j], arr[j+1]) ;
            }
        }
    
    }
};

int main (){
  
    int n ; 
    cout << "Enter the no. of Elements of the array " << endl ;
    cin >> n;
    vector <int> nums ;
    int num ;
    cout << "Enter the Elements of the array " ;

    for (int i = 0 ; i < n ; i ++ ){
        cin >> num ;
        nums.push_back(num) ;
    }
    Solution sol ;
    sol.bubbleSort(nums) ;
    for ( auto& it : nums){
      cout << it  << " " ;
    }

  return 0 ;
}
