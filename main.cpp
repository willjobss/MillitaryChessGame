#ifndef MAIN_CPP_INCLUDED
#define MAIN_CPP_INCLUDED

#include<iostream>
using namespace std;
#include"Game_Produce.h"
#include"Desk_Clear.h"
#include"Game_UserTask.h"
#include"Game_Setup.h"
#include"Game_Search.h"
#include"Game_Recover.h"
extern int x;
extern int y;
extern const int num;
extern broad game_a[num][num];
int main(){

  Setup();
  pro_All(num,num);
  pri_All();
  cout<<endl;


  Clear();
  while(Game_Info()){
  Broad_Update(x,y);
  Search();
  Find();
  }
  return 0;
}



#endif // MAIN_CPP_INCLUDED
