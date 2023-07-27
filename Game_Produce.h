#ifndef GAME_PRODUCE_H_INCLUDED
#define GAME_PRODUCE_H_INCLUDED
const int num= 6;
extern const int num;
struct broad{
    int a;
    bool flag;
    bool team;
    bool dfs;
    int curr=0;
};

void produce(broad &p,int );
void pro_All(int ,int);
void pri_All();



#endif // GAME_PRODUCE_H_INCLUDED
