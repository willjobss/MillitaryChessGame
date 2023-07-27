//³å³å³å//
#include<iostream>
using namespace std;
#include"Game_Produce.h"
#include"Random_Init.h"
using namespace std;
broad game_a[num][num];
void produce(broad & a,int n,int p){
       a.flag=true;
       a.a=n;
       if(p%2==0) a.team=true;
       else a.team=false;
}
void pro_All(int a,int b){
    random();
    int  number_number[]={8,8,4,4,3,3,1,1,1,1,1,1};
    int n;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
          n=Init(0,2*num-1);
            if(number_number[n]>=1){
                if(n%2==0){
                    produce(game_a[i][j],n/2+1,n);
                    number_number[n]--;
                }
                else{
                    produce(game_a[i][j],(n+1)/2,n);
                    number_number[n]--;
                }

            }
            else j--;
        }
    }
}
void pri_All(){
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(game_a[i][j].team==true) cout<<'A';
            else cout<<'B';
            cout<<game_a[i][j].a;
            cout<<'\t';
        }
        cout<<endl;
        cout<<endl;
    }


}
