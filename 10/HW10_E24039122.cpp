#include <iostream>
#include <fstream>

using namespace std;

int disc[6][7]={0};
int player1;
int player2;
void playing(int [][7],int,int);
void display(int [][7]);
void WhoWin(int [][7], int &);

int main()
{
    char t[100000];
    fstream in;
    cout<<"Connect Four Rule:"<<endl;
    in.open("README.txt" ,ios::in);
    if( !in ){
        cout<<"File could not be opened"<<endl;
    }
    else{
         in.read(t,sizeof(t));
         cout<<t<<endl;
         in.close();
    }

    int w=0;
    display(disc);
    while(1){

        //1
        cout<<"Player1 turns:";
        cin>>player1;
        player1=player1-1;
        ////////////////////
        while(disc[0][player1]!=0 && disc[1][player1]!=0 && disc[2][player1]!=0
            && disc[3][player1]!=0 && disc[4][player1]!=0 && disc[5][player1]!=0){
            cout<<"Error!!!Please input to other columns:";
            cin>>player1;
            player1=player1-1;
       }
        while(player1>6 || player1<0){
            cout<<"Error!!!Please input again:";
            cin>>player1;
            player1=player1-1;
        }
                while(disc[0][player1]!=0 && disc[1][player1]!=0 && disc[2][player1]!=0
            && disc[3][player1]!=0 && disc[4][player1]!=0 && disc[5][player1]!=0){
            cout<<"Error!!!Please input to other columns:";
            cin>>player1;
            player1=player1-1;
       }
        while(player1>6 || player1<0){
            cout<<"Error!!!Please input again:";
            cin>>player1;
            player1=player1-1;
        }
        ///////////////////////////////
        playing(disc,player1,1);
        display(disc);
        WhoWin(disc,w);
        if(w==1){
            break;
        }
        //2
        cout<<"Player2 turns:";
        cin>>player2;
        player2=player2-1;
        ////////////////////
        while(disc[0][player2]!=0 && disc[1][player2]!=0 && disc[2][player2]!=0
            && disc[3][player2]!=0 && disc[4][player2]!=0 && disc[5][player2]!=0){
            cout<<"Error!!!Please input to other columns:";
            cin>>player2;
            player2=player2-1;
       }
        while(player2>6 || player2<0){
            cout<<"Error!!!Please input again:";
            cin>>player2;
            player2=player2-1;
        }
                while(disc[0][player2]!=0 && disc[1][player2]!=0 && disc[2][player2]!=0
            && disc[3][player2]!=0 && disc[4][player2]!=0 && disc[5][player2]!=0){
            cout<<"Error!!!Please input to other columns:";
            cin>>player2;
            player2=player2-1;
       }
        while(player2>6 || player2<0){
            cout<<"Error!!!Please input again:";
            cin>>player2;
            player2=player2-1;
        }
        //////////////////////
        playing(disc,player2,2);
        display(disc);
        WhoWin(disc,w);
        if(w==1){
            break;
        }

        }
    return 0;
}
void display(int a[][7]){
    cout<<"--1-2-3-4-5-6-7---"<<endl;
    cout<<"-                -"<<endl;
    for(int i=0;i<6;i++){
        cout<<"- ";
        for(int j=0;j<7;j++)
            cout<<a[i][j]<<" ";
        cout<<" -"<<endl;
    }
    cout<<"------------------"<<endl;
}


void playing(int a[][7],int input,int x){
    int d=0;
    //5
    if(a[0][input]==0 && a[1][input]==0 && a[2][input]==0
       && a[3][input]==0 && a[4][input]==0 && a[5][input]==0)
        a[5][input]=x;
    //4
    else if(a[0][input]==0 && a[1][input]==0 && a[2][input]==0
       && a[3][input]==0 && a[4][input]==0 && a[5][input]!=0)
        a[4][input]=x;
    //3
    else if(a[0][input]==0 && a[1][input]==0 && a[2][input]==0
       && a[3][input]==0 && a[4][input]!=0 && a[5][input]!=0)
        a[3][input]=x;
    //2
    else if(a[0][input]==0 && a[1][input]==0 && a[2][input]==0
       && a[3][input]!=0 && a[4][input]!=0 && a[5][input]!=0)
        a[2][input]=x;
    //1
    else if(a[0][input]==0 && a[1][input]==0 && a[2][input]!=0
       && a[3][input]!=0 && a[4][input]!=0 && a[5][input]!=0)
        a[1][input]=x;
    //0
    else if(a[0][input]==0 && a[1][input]!=0 && a[2][input]!=0
       && a[3][input]!=0 && a[4][input]!=0 && a[5][input]!=0)
        a[0][input]=x;
}

void WhoWin(int a[][7], int &w){
    int d;
    for(int i=0;i<6;i++)
        for(int j=0;j<7;j++){

            if(a[i][j]==1 && a[i+1][j]==1
               && a[i+2][j]==1 && a[i+3][j]==1 && i+3<6 ){
                cout<<"Player1 win the game!!"<<endl;
                w=1;
               }

            if(a[i][j]==1 && a[i][j+1]==1
               && a[i][j+2]==1 && a[i][j+3]==1  && j+3<7 ){
                cout<<"Player1 win the game!!"<<endl;
                w=1;
               }

            if(a[i][j]==1 && a[i+1][j+1]==1
               && a[i+2][j+2]==1 && a[i+3][j+3]==1 && i+3<6 && j+3<7 ){
                cout<<"Player1 win the game!!"<<endl;
                w=1;
               }
            if(a[i][j]==1 && a[i+1][j-1]==1
               && a[i+2][j-2]==1 && a[i+3][j-3]==1 && i+3<6 && j-3>-1){
                cout<<"Player1 win the game!!"<<endl;
                w=1;
               }
        }


    for(int i=0;i<6;i++)
        for(int j=0;j<7;j++){

            if(a[i][j]==2 && a[i+1][j]==2
               && a[i+2][j]==2 && a[i+3][j]==2 && i+3<6){
                cout<<"Player2 win the game!!"<<endl;
                w=1;
               }

            if(a[i][j]==2 && a[i][j+1]==2
               && a[i][j+2]==2 && a[i][j+3]==2 && j+3<7){
                cout<<"Player2 win the game!!"<<endl;
                w=1;
               }

            if(a[i][j]==2 && a[i+1][j+1]==2
               && a[i+2][j+2]==2 && a[i+3][j+3]==2 && i+3<6 && j+3<7){
                cout<<"Player2 win the game!!"<<endl;
                w=1;
               }
            if(a[i][j]==2 && a[i+1][j-1]==2
               && a[i+2][j-2]==2 && a[i+3][j-3]==2 && i+3<6 && j-3>-1){
                cout<<"Player2 win the game!!"<<endl;
                w=1;
               }
        }

        for(int i=0;i<6;i++)
            for(int j=0;j<7;j++)
                if(a[i][j]!=0)
                    d++;

        if(d==48){
            cout<<"end in a draw"<<endl;
            w=1;
        }
}

