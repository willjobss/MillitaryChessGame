//冲冲冲//
#include"Game_Recover.h"
#include"Game_Produce.h"
#include"Game_UserTask.h"
#include"Game_Search.h"
#include<iostream>
using namespace std;
extern const int num;
extern int cur;
extern broad game_a[num][num];
extern int pos[20][2];
extern int pos1[20][2];
extern int x;
extern int y;
int cur1=0;
void Change(broad &a,broad &b){
    if(a.team!=b.team){
         a=b;
    b.a=0;
    cout<<endl;
    cout<<"###########    发生了战斗！    ###########";
    cout<<endl;
    cout<<endl;
    cout<<"&&&&&&&&&&&    战斗结果如下    &&&&&&&&&&&";
    cout<<endl;
    cout<<endl;
    Broad_Update1();
    }

}


void Find(){
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
           game_a[i][j].dfs=true;// a 的dfs没有被访问
        }
    }
   int cur1=Dfs1(x-1,y-1,num);
   if(cur1!=0){
        if (cur1>1&&game_a[x-1][y-1].a!=0){
            bool f1=true;
            while(f1){

                cout<<endl;
                cout<<endl;
                cout<<"$$$$$$$$$$   你想干掉那张牌 或 你想被那张牌吃掉？    $$$$$$$$$$$";
                cout<<endl;
                cout<<endl;
                int x2;int y2;
                cin>>x2>>y2;
                bool f=false;
                for(int i=0;i<cur1;i++){
                    int x3=pos1[i][0];//pos 是实际位置
                    int y3=pos1[i][1];
                    if(x2==x3&&y2==y3) f=true;
                }
                ;
                x2--;
                y2--;
                if(game_a[x2][y2].team==game_a[x-1][y-1].team&&game_a[x2][y2].a!=0&&!game_a[x2][y2].flag)
                    cout<<"**********   是友军！    **********";//if(!f) cout <<"**********   这张牌不可被访问！    **********";
                else if(game_a[x2][y2].flag) //没被翻过
                        cout<<"**********   这张牌没有被翻过！    **********";
                else if(game_a[x2][y2].a==0)
                        cout<<"**********   这张牌已经不存在！    **********";
                else if(!f)
                        cout <<"**********   这张牌不可被访问！    **********";//else if(game_a[x2][y2].team==game_a[x-1][y-1].team)

                else if(
                        (game_a[x2][y2].a==1&&game_a[x-1][y-1].a==6)||(game_a[x2][y2].a>game_a[x-1][y-1].a&&!(game_a[x2][y2].a==6&&game_a[x-1][y-1].a==1))){
                            Change(game_a[x-1][y-1],game_a[x2][y2]);
                            f1=false;
                        }
                else if(game_a[x2][y2].a==game_a[x-1][y-1].a){
                    game_a[x-1][y-1].a=0;
                    game_a[x2][y2].a=0;
                    Broad_Update1();
                    f1=false;
                }
                else{
                     Change(game_a[x2][y2],game_a[x-1][y-1]);
                     f1=false;
                }

            }

        }
       else{


       if(game_a[x-1][y-1].a==1){
            for(int i=0;i<cur;i++){//x,y是实际位置
                int x1=pos[i][0]-1;//pos是实际的位置
                int y1=pos[i][1]-1;
                if(game_a[x1][y1].a==6){
                    Change(game_a[x1][y1],game_a[x-1][y-1]);
                    break;
                }
                else if(game_a[x1][y1].a==1){
                    if(game_a[x1][y1].team!=game_a[x-1][y-1].team){
                        game_a[x1][y1].a=0;
                    game_a[x-1][y-1].a=0;

                    cout<<endl;
                    cout<<"###########    发生了战斗！    ###########";
                    cout<<endl;
                    cout<<endl;
                    cout<<"&&&&&&&&&&&    战斗结果如下    &&&&&&&&&&&";
                    cout<<endl;
                    cout<<endl;
                    Broad_Update1();
                    break;
                    }

                }
                else if(game_a[x1][y1].a!=0){
                    Change(game_a[x-1][y-1],game_a[x1][y1]);
                    break;
                }
            }
        }
        if(game_a[x-1][y-1].a==2){
            for(int i=0;i<cur;i++){//x,y是实际位置
                int x1=pos[i][0]-1;//pos是实际的位置
                int y1=pos[i][1]-1;
                if(game_a[x1][y1].a==1){
                    Change(game_a[x1][y1],game_a[x-1][y-1]);
                    break;
                }
                else if(game_a[x1][y1].a==2){
                    if(game_a[x1][y1].team!=game_a[x-1][y-1].team){
                        game_a[x1][y1].a=0;
                        game_a[x-1][y-1].a=0;
                        cout<<endl;
                        cout<<"###########    发生了战斗！    ###########";
                        cout<<endl;
                        cout<<endl;
                        cout<<"&&&&&&&&&&&    战斗结果如下    &&&&&&&&&&&";
                        cout<<endl;
                        cout<<endl;
                        Broad_Update1();
                        break;
                    }

                }
                else if(game_a[x1][y1].a!=0){
                    Change(game_a[x-1][y-1],game_a[x1][y1]);
                    break;
                }
            }
        }
        if(game_a[x-1][y-1].a==3){
            for(int i=0;i<cur;i++){//x,y是实际位置
                int x1=pos[i][0]-1;//pos是实际的位置
                int y1=pos[i][1]-1;
                if(game_a[x1][y1].a<3&&game_a[x1][y1].a!=0){
                    Change(game_a[x1][y1],game_a[x-1][y-1]);
                    break;
                }
                else if(game_a[x1][y1].a==3){
                        if(game_a[x1][y1].team!=game_a[x-1][y-1].team){
                            game_a[x1][y1].a=0;
                            game_a[x-1][y-1].a=0;
                            cout<<endl;
                            cout<<"###########    发生了战斗！    ###########";
                            cout<<endl;
                            cout<<endl;
                            cout<<"&&&&&&&&&&&    战斗结果如下    &&&&&&&&&&&";
                            cout<<endl;
                            cout<<endl;
                            Broad_Update1();
                            break;
                        }

                }
                else if(game_a[x1][y1].a!=0){
                    Change(game_a[x-1][y-1],game_a[x1][y1]);
                    break;
                }
            }
        }
        if(game_a[x-1][y-1].a==4){
            for(int i=0;i<cur;i++){//x,y是实际位置
                int x1=pos[i][0]-1;//pos是实际的位置
                int y1=pos[i][1]-1;
                if(game_a[x1][y1].a<4&&game_a[x1][y1].a!=0){
                    Change(game_a[x1][y1],game_a[x-1][y-1]);
                    break;
                }
                else if(game_a[x1][y1].a==4){
                   if(game_a[x1][y1].team!=game_a[x-1][y-1].team){
                            game_a[x1][y1].a=0;
                            game_a[x-1][y-1].a=0;
                            cout<<endl;
                            cout<<"###########    发生了战斗！    ###########";
                            cout<<endl;
                            cout<<endl;
                            cout<<"&&&&&&&&&&&    战斗结果如下    &&&&&&&&&&&";
                            cout<<endl;
                            cout<<endl;
                            Broad_Update1();
                            break;
                        }
                }
                else if(game_a[x1][y1].a!=0){
                    Change(game_a[x-1][y-1],game_a[x1][y1]);
                    break;
                }
            }
        }
        if(game_a[x-1][y-1].a==5


           ){
            for(int i=0;i<cur;i++){//x,y是实际位置
                int x1=pos[i][0]-1;//pos是实际的位置
                int y1=pos[i][1]-1;
                if(game_a[x1][y1].a<5&&game_a[x1][y1].a!=0){
                    Change(game_a[x1][y1],game_a[x-1][y-1]);
                    break;
                }
                else if(game_a[x1][y1].a==5){
                    if(game_a[x1][y1].team!=game_a[x-1][y-1].team){
                            game_a[x1][y1].a=0;
                            game_a[x-1][y-1].a=0;
                            cout<<endl;
                            cout<<"###########    发生了战斗！    ###########";
                            cout<<endl;
                            cout<<endl;
                            cout<<"&&&&&&&&&&&    战斗结果如下    &&&&&&&&&&&";
                            cout<<endl;
                            cout<<endl;
                            Broad_Update1();
                            break;
                        }
                }
                else if(game_a[x1][y1].a!=0){
                    Change(game_a[x-1][y-1],game_a[x1][y1]);
                    break;
                }
            }
        }
        if(game_a[x-1][y-1].a==6){
            for(int i=0;i<cur;i++){//x,y是实际位置
                int x1=pos[i][0]-1;//pos是实际的位置
                int y1=pos[i][1]-1;
                if(game_a[x1][y1].a<6&&game_a[x1][y1].a>=2){
                    Change(game_a[x1][y1],game_a[x-1][y-1]);
                    break;
                }
                else if(game_a[x1][y1].a==6){
                    if(game_a[x1][y1].team!=game_a[x-1][y-1].team){
                            game_a[x1][y1].a=0;
                            game_a[x-1][y-1].a=0;
                            cout<<endl;
                            cout<<"###########    发生了战斗！    ###########";
                            cout<<endl;
                            cout<<endl;
                            cout<<"&&&&&&&&&&&    战斗结果如下    &&&&&&&&&&&";
                            cout<<endl;
                            cout<<endl;
                            Broad_Update1();
                            break;
                        }
                    Broad_Update1();
                    break;
                }

                else if(game_a[x1][y1].a!=0){
                    Change(game_a[x-1][y-1],game_a[x1][y1]);//error! done?
                    break;
                }
            }

        }
       }
       cur1=0;
   }


}
