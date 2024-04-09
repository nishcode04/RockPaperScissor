#include <bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    int player;
    int computer;

cout<<"Let's Play ROCK,PAPER,SCISSORS!"<<endl;
cout<<"Pick something:"<<endl<<"1)ROCK"<<endl<<"2)PAPER"<<endl<<"3)SCISSORS"<<endl;
cin>>player;
if(player==1){cout<<"You choose ROCK"<<endl;}
if(player==2){cout<<"You choose PAPER"<<endl;}
if(player==3){cout<<"You choose SCISSORS"<<endl;}

//COMPUTER
computer= rand()%3+1; //either 1 or 2 or 3

if(computer==1){cout<<"Computer chooses ROCK"<<endl;}
if(computer==2){cout<<"Computer chooses PAPER"<<endl;}
if(computer==3){cout<<"Computer chooses SCISSORS"<<endl;}

//RULES
if(player==computer){cout<<"It's a TIE!";}
if(player==1){
    if(computer==2){cout<<"You LOSE";}
    if(computer==3){cout<<"You WIN!";}
}
if(player==2){
    if(computer==1){cout<<"You WIN!";}
    if(computer==3){cout<<"You LOSE";}
}

return 0;
}
