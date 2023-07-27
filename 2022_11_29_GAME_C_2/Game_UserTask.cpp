//冲冲冲//
#include"Game_UserTask.h"
#include"Game_Produce.h"
#include<iostream>
int k=0;
using namespace std;
extern const int num;
extern broad game_a[num][num];
void Broad_Update1(){
    cout<<endl;
    cout<<endl;
    cout<<"        "<<"第1列"<<'\t'<<"第2列"<<'\t'<<"第3列"<<'\t'<<"第4列"
<<'\t'<<"第5列"<<'\t'<<"第6列"<<'\t'<<endl;
     for(int i=0;i<num;i++){
             cout<<"第"<<i+1<<"行："<<'\t';
        for(int j=0;j<num;j++){
            if(game_a[i][j].a==0){
                cout<<" ";
                cout<<'\t';
            }


            else if(game_a[i][j].flag==false){
                if(game_a[i][j].team==true) cout<<'A';
                else cout<<'B';
                cout<<game_a[i][j].a;
                cout<<'\t';
            }
            else {
                cout<<"#";
                cout<<'\t';
            }
        }
        cout<<endl;
        cout<<"--------------------------------------------------";
        cout<<endl;
    }
}
void Broad_Update(int a,int b){
  cout<<endl;
  cout<<endl;
  if(game_a[a-1][b-1].flag==false) cout<<"牌已经被翻过了，请重新翻一张牌或用这张牌发动一次攻击"<<endl;
  else{
      cout<<"        "<<"第1列"<<'\t'<<"第2列"<<'\t'<<"第3列"<<'\t'<<"第4列"
<<'\t'<<"第5列"<<'\t'<<"第6列"<<'\t'<<endl;
    for(int i=0;i<num;i++){
        cout<<"第"<<i+1<<"行："<<'\t';
        for(int j=0;j<num;j++){
            if(game_a[i][j].a==0){
                cout<<" ";
                cout<<'\t';
            }
            else if (i+1==a&&j+1==b){
                if(game_a[i][j].team==true) cout<<'A';
                else cout<<'B';
                cout<<game_a[i][j].a;
                cout<<'\t';
                game_a[i][j].flag=false;
            }
            else if(game_a[i][j].flag==false){
                if(game_a[i][j].team==true) cout<<'A';
                else cout<<'B';
                cout<<game_a[i][j].a;
                cout<<'\t';
            }
            else {
                cout<<"#";
                cout<<'\t';
            }
        }
        cout<<endl;
        cout<<"--------------------------------------------------";
        cout<<endl;
    }
  }

}
int x;
int y;
bool Game_Info(){
    k++;
    if(k%2==1)
    cout<<"请玩家1输入想翻动的军棋的坐标"<<endl;
    else
    cout<<"请玩家2输入想翻动的军棋的坐标"<<endl;
    char tmp=0;
    cin>>tmp;
    while(tmp>'9'||tmp<'0'){
        if(tmp!='\n'&&tmp!='\r'&&tmp!='\t'&&tmp!=' ')return false;
        cin>>tmp;
    }
    x=tmp-'0';
    cin>>tmp;
    while(tmp>'9'||tmp<'0'){
        if(tmp!='\n'&&tmp!='\r'&&tmp!='\t'&&tmp!=' ')return false;
        cin>>tmp;
    }
    y=tmp-'0';
    return true;
}

