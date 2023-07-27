//冲冲冲//
#include"Desk_Clear.h"
#include<iostream>
#include"Game_Produce.h"
using namespace std;
void Clear(){

cout<<"…………………………模拟翻军旗游戏…………………………"<<endl;
cout<<endl;
cout<<endl;
cout<<"************由上海交通大学2022届 章树逸制作************"<<endl;
cout<<endl;
cout<<endl;
cout<<"…………………………发布时间：2022-12-1……………………"<<endl;
cout<<endl;
cout<<endl;

cout<<"%%%%%%%%%%%%%%%%%%%%    游戏说明     %%%%%%%%%%%%%%%%%"<<endl;
cout<<endl;
cout<<"牌堆中共有36 张牌，A、B阵营分别有18张其中数字1、2、3、4"<<endl;
cout<<"、5、6代表牌的大小。大牌可以吃小牌，但1可以吃6，，若牌的大小相同则两牌同时阵亡。在所有牌中"<<endl;
cout<<"1有8张，2有4张，3有3张，4、5、6各一张。每张牌只能攻击周围的牌"<<endl;
cout<<"但如果其攻击范围内的牌已经被吃掉，则被吃掉的牌的攻击范围将纳入到"<<endl;
cout<<"其攻击范围之中。玩家1、2轮流翻牌（输入想翻的牌的坐标 如输入 1 2即翻"<<endl;
cout<<"出一张第1行第2列的牌），翻出一张牌时它会自动攻击自己攻击范围内以翻出"<<endl;
cout<<"的敌方的牌(攻击范围是其上下左右位置的牌)，但若存在多个攻击目标时"<<endl;
cout<<"将由它的阵营对应玩家选择攻击的对象或被攻击的对象（输入坐标）；若"<<endl;
cout<<"翻出的牌的周围还存在可攻击的牌，玩家可输入这张牌的坐标再次发动攻击"<<endl;
cout<<"最后棋盘上将只剩一个玩家的牌，这个玩家将获胜！";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"…………………………模拟翻军旗游戏…………………………"<<endl;
cout<<endl;
cout<<endl;
cout<<"************由上海交通大学2022届 章树逸制作************"<<endl;
cout<<endl;
cout<<endl;
cout<<"…………………………发布时间：2022-12-1……………………"<<endl;
cout<<endl;
cout<<endl;
cout<<"开始游戏！"<<endl;
cout<<"        "<<"第1列"<<'\t'<<"第2列"<<'\t'<<"第3列"<<'\t'<<"第4列"
<<'\t'<<"第5列"<<'\t'<<"第6列"<<'\t'<<endl;
for(int i=0;i<num;i++){
        cout<<"第"<<i+1<<"行："<<'\t';
        for(int j=0;j<num;j++){
            cout<<"#";
            cout<<'\t';
        }
        cout<<endl;
        cout<<"--------------------------------------------------";
        cout<<endl;

    }
}

