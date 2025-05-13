#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int E, S, M;
    int year=1;
    cin>>E>>S>>M;
    while(true){
        if((year-E) % 15 == 0 && (year-S) % 28 == 0 && (year-M) % 19 == 0){
            break;
        }
        else{
            year+=1;
        }
    }
    
    cout<<year<<"\n";
    return 0;
}