//����//
#include"Game_Produce.h"
#include<iostream>
using namespace std;
extern int x;
extern int y;

extern const int num;
extern broad game_a[num][num];
int cur=0;
int pos[20][2];
int pos1[20][2];
int curr=0;
int Dfs1(int a,int b,int n){
static const int dlt[4][2]={{0,-1},{0,1},{1,0},{-1,0}};
    int x1,y1;
    for(int i=0;i<4;i++){
       x1=a+dlt[i][0];y1=b+dlt[i][1];//�������ҽ���Ѱ��
       if(0<=x1&&x1<n&&0<=y1&&y1<n){
            if(game_a[x1][y1].a==0&&game_a[x1][y1].dfs){ //Ԫ��Ϊ0����û������
                game_a[x1][y1].dfs=false;
                Dfs1(x1,y1,n);
            }
            else if(game_a[x1][y1].dfs&&!game_a[x1][y1].flag&&!(x1==x-1&&y1==y-1)
                    &&(game_a[x-1][y-1].team!=game_a[x1][y1].team)){ //�����䱾��,����ͬһ��
                pos1[curr][0]=x1+1;//ת��Ϊʵ�ʵ�����
                pos1[curr][1]=y1+1;
                curr++;

            }
       }
    }
    return curr;


}
int Dfs(int a,int b,int n){
    static const int dlt[4][2]={{0,-1},{0,1},{1,0},{-1,0}};
    int x1,y1;
    for(int i=0;i<4;i++){
       x1=a+dlt[i][0];y1=b+dlt[i][1];//�������ҽ���Ѱ��
       if(0<=x1&&x1<n&&0<=y1&&y1<n){
            if(game_a[x1][y1].a==0&&game_a[x1][y1].dfs){ //Ԫ��Ϊ0����û������
                game_a[x1][y1].dfs=false;
                Dfs(x1,y1,n);
            }
            else if(game_a[x1][y1].dfs&&!game_a[x1][y1].flag&&!(x1==x-1&&y1==y-1)
                    &&(game_a[x-1][y-1].team!=game_a[x1][y1].team)){ //�����䱾��,����ͬһ��
                pos[cur][0]=x1+1;//ת��Ϊʵ�ʵ�����
                pos[cur][1]=y1+1;
                cur++;

            }
       }
    }
    return cur;
}


void Search(){
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
           game_a[i][j].dfs=true;// a ��dfsû�б�����
        }
    }
    cur=0;
    curr=0;
    Dfs(x-1,y-1,num);//Dfs(��Ӧ����Ԫ�ص�x,y,�����С)
}
