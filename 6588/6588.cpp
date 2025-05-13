#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void eratos(vector<bool>& isPrime){
    isPrime[0]=isPrime[1]=false;
    for(long long i = 2;i<=1000000;i++){
        if(isPrime[i]){
            for(long long ii = i*i;ii<=1000000;ii+=i){
                isPrime[ii]=false;
            }
        }
    }
}

int this_returns_prime(vector<bool>& isPrime, long long input){
    int tmp, tmp1;
    for(int i = 3;i<=1000000-3;i+=2){
        if(isPrime[i]){
            if(isPrime[input-i]){
                return i;
            }
        }
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long input;
    long long output;
    vector<bool> isPrime(1000001,true);
    eratos(isPrime);
    while(true){
        cin>>input;
        if(input==0) break;
        output = this_returns_prime(isPrime, input);
        cout<<input<<" = "<<output<<" + "<<input-output<<"\n";
    }


    return 0;
}