#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <random>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> dwarf(9,0);
    vector<int> remove(2,0);
    int sum=0;
    for(int i = 0;i<9;i++){
        cin>>dwarf[i];
    }

    sort(dwarf.begin(), dwarf.end());

    for(int i = 0;i<9;i++){
        sum+=dwarf[i];
    }
    sum -= 100;

    for(int i = 0;i<8;i++){
        for(int ii = i+1;ii<9;ii++){
            if(dwarf[i]+dwarf[ii]==sum){
                remove[0]=i;
                remove[1]=ii;
            }
        }
    }
    for(int i = 0;i<9;i++){
        if(find(remove.begin(),remove.end(), i)==remove.end()){
            cout<<dwarf[i]<<"\n";
        }
    }

    return 0;
}