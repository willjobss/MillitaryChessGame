//³å³å³å//
#include"Game_Setup.h"
#include"Game_Produce.h"
extern const int num;
extern broad game_a[num][num];
void Setup(){
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            game_a[i][j].flag=true;
        }
    }

}
