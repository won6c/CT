#include <iostream>

using namespace std;

int sumation(int n){
    int sum=0;
    for(int i = 1;i<=n;i++){
        sum+=(n/i)*i;
    }
    return sum;
}

int main(){
    int T, N;
    cin>>T;
    for(int i = 0;i<T;i++){
        cin>>N;
        cout<<sumation(N)<<"\n";
    }

    return 0;
}