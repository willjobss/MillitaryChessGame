//����//
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
    cout<<"        "<<"��1��"<<'\t'<<"��2��"<<'\t'<<"��3��"<<'\t'<<"��4��"
<<'\t'<<"��5��"<<'\t'<<"��6��"<<'\t'<<endl;
     for(int i=0;i<num;i++){
             cout<<"��"<<i+1<<"�У�"<<'\t';
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
  if(game_a[a-1][b-1].flag==false) cout<<"���Ѿ��������ˣ������·�һ���ƻ��������Ʒ���һ�ι���"<<endl;
  else{
      cout<<"        "<<"��1��"<<'\t'<<"��2��"<<'\t'<<"��3��"<<'\t'<<"��4��"
<<'\t'<<"��5��"<<'\t'<<"��6��"<<'\t'<<endl;
    for(int i=0;i<num;i++){
        cout<<"��"<<i+1<<"�У�"<<'\t';
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
    cout<<"�����1�����뷭���ľ��������"<<endl;
    else
    cout<<"�����2�����뷭���ľ��������"<<endl;
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

