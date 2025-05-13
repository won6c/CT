#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int isMax(vector<vector<char>>& candy, int N){
    int maxCount=0;
    for(int i = 0;i<N;i++){
        int count = 1;
        for(int ii = 1;ii<N;ii++){
            if(candy[i][ii]==candy[i][ii-1]){
                count+=1;
                maxCount = max(maxCount, count);
            }
            else{
                count = 1;
            }
        }
    }
    for(int i = 0;i<N;i++){
        int count = 1;
        for(int ii = 1;ii<N;ii++){
            if(candy[ii][i]==candy[ii-1][i]){
                count+=1;
                maxCount = max(maxCount, count);
            }
            else{
                count = 1;
            }
        }
    }
    return maxCount;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, eatable = 0;
    cin>>N;
    vector<vector<char>> candy(N,vector<char>(N,' '));
    for(int i = 0;i<N;i++){
        string tmp;
        cin>>tmp;
        for(int ii = 0;ii<N;ii++){
            candy[i][ii] = tmp[ii];
        }
    }
    for(int i = 0;i<N;i++){
        for(int ii = 1;ii<N;ii++){
            if(candy[i][ii]!=candy[i][ii+1]){
                swap(candy[i][ii-1],candy[i][ii]);
                eatable = max(eatable,isMax(candy, N));
                swap(candy[i][ii-1],candy[i][ii]);
            }
        }
    }
    for(int i = 1;i<N-1;i++){
        for(int ii = 0;ii<N;ii++){
            if(candy[i][ii]!=candy[i+1][ii]){
                swap(candy[i-1][ii],candy[i][ii]);
                eatable = max(eatable,isMax(candy, N));
                swap(candy[i-1][ii],candy[i][ii]);
            }
        }
    }
    cout<<eatable<<"\n";

    return 0;
}