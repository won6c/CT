#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){

    long long start, end;
    cin>>start>>end;

    vector<bool> isPrime(end+1, true);
    isPrime[0]=isPrime[1]=false;

    for(long long i = 2;i*i<=end;i++){
        if(isPrime[i]){
            for(long long ii = i*i;ii<=end;ii+=i){
                isPrime[ii]=false;
            }
        }
    }

    for(long long i = start;i<isPrime.size();i++){
        if(isPrime[i]){
            cout<<i<<"\n";
        }
    }

    return 0;
}