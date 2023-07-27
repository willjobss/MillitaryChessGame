//³å³å³å//
#include"Random_Init.h"
#include<cstdlib>
#include<ctime>
void random(){
    srand(time(NULL));
}
int Init(int a_min,int a_max){
    double a=rand()/(RAND_MAX+1.);
    return (a_min+(a_max-a_min+1)*a);
}
