#include <iostream>
#include <cmath>

using namespace std;

long long arr[1000001];
long long sum[1000001];

void sumation(){
    for(long long i = 1;i<=1000000;i++){
        if(i==1){
            sum[i] = arr[i];
        }else{
            sum[i] = sum[i-1]+arr[i];
        }
    }
}

void init(){
    for(long long i = 1;i<=1000000;i++){
        for(long long ii = 1;i*ii<=1000000;ii++){
            arr[i*ii]+=i;
        }
    }
}

int main(){
    int T;
    long long N;
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin>>T;

    init();
    sumation();

    for(int i = 0;i<T;i++){
        cin>>N;
        cout<<sum[N]<<"\n";
    }

    return 0;
}