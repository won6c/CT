#include <iostream>

using namespace std;

int gcd(int a, int b){
    int tmp = a%b;
    if(tmp==0) return b;
    return gcd(b,tmp);
}

int lcm(int a, int b){
    return a*b/gcd(a,b);
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b)<<"\n"<<lcm(a,b)<<"\n";

    return 0;
}