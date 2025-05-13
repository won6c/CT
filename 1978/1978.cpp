#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> arr(N,0);
    
    for(int i = 0;i<N;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
    
    vector<bool> isPrime(N,true);
    if(arr[0]==1){
        isPrime[0]=false;
    }
    for(int i = 0;i<arr.size();i++){
        for(int ii = 2;ii<=sqrt(arr[i]);ii++){
            if(arr[i]%ii==0){
                isPrime[i]=false;
            }
        }
    }

    cout<<count(isPrime.begin(),isPrime.end(),true);

    return 0;
}