#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int factors_count;//factors_count<=50
    int n;
    vector<int> arr;
    cin>>factors_count;
    for(int i = 0;i<factors_count;i++){
        cin>>n;
        arr.push_back(n);
    }
    sort(arr.begin(), arr.end());
    cout<<arr[0]*arr.back();
    return 0;
}