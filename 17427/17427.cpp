#include <iostream>
#include <cmath>

using namespace std;

//int factors_sum(int N){
//    int sum=0;
//    for(int i = 1;i<=sqrt(N);i++){
//        if(N%i==0){
//            //cout<<N<<' '<<i<<' '<<sum<<"\n";
//            sum+=i;
//            if(N/i!=i){
//                sum+=(N/i);
//            }
//        }
//    }
//    return sum;
//}
//
//int main(){
//    long long result=0;
//    int N;
//    cin >>N;
//    for(int i = 1;i<=N;i++){
//        if(i==1){
//            result+=1;
//            //cout<<"result : "<<result<<"\n";
//        }
//        else{
//            result+=factors_sum(i);
//            //cout<<"result : "<<result<<"\n";
//        }
//        
//    }
//
//    cout<<result;
//    return 0;
//}

int main(){

    int N;
    long long int sum=0;
    cin>>N;
    for(int i = 1;i<=N;i++){
        sum+=(N/i)*i;
    }
    cout<<sum;
    return 0;
}