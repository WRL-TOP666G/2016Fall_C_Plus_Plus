#include <iostream>

using namespace std;

int E24039122(const vector < vector<char> > &, char, char);

int E24039122(const vector < vector<char> > &b, char mydisc, char yourdisc) {
	static const char me = mydisc; //Record the disc type main function assigns for this AI. It never changes once assigned
	static const char opponent = yourdisc; //Record the disc type main function assigns for another AI. It never changes once assigned
	int column = -1;
	//Write your AI here//////////////////////////

	//Attack_3
    for(int i=0;i<6;i++)
        for(int j=0;j<7;j++){
                //그퐑L
                if( (-1<i-3) && (-1<j-3) )
                    if( b[i][j]==me && b[i-1][j-1]==me && b[i-2][j-2]==me && b[i-2][j-3]!=0 && b[i-3][j-3]==0){
                        column=j-3;
                        return column;
                    }
                if( (-1<i-3) && (-1<j-3) )
                    if( b[i][j]==me && b[i-1][j-1]==me && b[i-2][j-2]==0 && b[i-1][j-2]!=0 && b[i-3][j-3]==me){
                        column=j-2;
                        return column;
                    }
                if( (-1<i-3) && (-1<j-3) )
                    if( b[i][j]==me && b[i-1][j-1]==0 && b[i][j-1]!=0 && b[i-2][j-2]==me  && b[i-3][j-3]==me){
                        column=j-1;
                        return column;
                    }
                if( (-1<i-3) && (-1<j-3) )
                    if( b[i][j]==0 && b[i-1][j-1]==me && b[i-2][j-2]==me && b[i-3][j-3]==me){
                        column=j;
                        return column;
                    }
                //그퐑R
                if( (-1<i-3) && (j+3<7) )
                    if( b[i][j]==me && b[i-1][j+1]==me && b[i-2][j+2]==me && b[i-2][j+3]!=0 && b[i-3][j+3]==0){
                        column=j+3;
                        return column;
                    }
                if( (-1<i-3) && (j+3<7) )
                    if( b[i][j]==me && b[i-1][j+1]==me && b[i-2][j+2]==0 && b[i-1][j+2]!=0 && b[i-3][j+3]==me){
                        column=j+2;
                        return column;
                    }
                if( (-1<i-3) && (j+3<7) )
                    if( b[i][j]==me && b[i-1][j+1]==0 && b[i-2][j+2]==me && b[i][j+1]!=0 && b[i-3][j+3]==me){
                        column=j+1;
                        return column;
                    }
                if( (-1<i-3) && (j+3<7) )
                    if( b[i][j]==0 && b[i-1][j+1]==me && b[i-2][j+2]==me && b[i-3][j+3]==me){
                        column=j;
                        return column;
                    }

                //そ퐑
                if(-1<i-3)
                    if( b[i][j]==me && b[i-1][j]==me && b[i-2][j]==me && b[i-3][j]==0 ){
                        column=j;
                        return column;
                    }

                //어퐑
                if(j+3<7)
                    if( b[i][j]==me && b[i][j+1]==me && b[i][j+2]==me && b[i][j+3]==0 ){
                        column=j+3;
                        return column;
                    }
                if(-1<j-3)
                    if( b[i][j]==me && b[i][j-1]==me && b[i][j-2]==me && b[i][j-3]==0 ){
                        column=j-3;
                        return column;
                    }
                if(-1<j-3)
                    if( b[i][j]==me && b[i][j-1]==0 && b[i][j-2]==me && b[i][j-3]==me ){
                        column=j-1;
                        return column;
                    }
                if(-1<j-3)
                    if( b[i][j]==me && b[i][j-1]==me && b[i][j-2]==0 && b[i][j-3]==me ){
                        column=j-2;
                        return column;
                    }

        }
    //Defense_3
    for(int i=0;i<6;i++)
        for(int j=0;j<7;j++){
                  //그퐑L
                if( (-1<i-3) && (-1<j-3) )
                    if( b[i][j]==opponent && b[i-1][j-1]==opponent && b[i-2][j-2]==opponent
                       && b[i-2][j-3]!=0 && b[i-3][j-3]==0){
                        column=j-3;
                        return column;
                    }
                if( (-1<i-3) && (-1<j-3) )
                    if( b[i][j]==opponent && b[i-1][j-1]==opponent && b[i-2][j-2]==0
                       && b[i-1][j-2]!=0 && b[i-3][j-3]==opponent){
                        column=j-2;
                        return column;
                    }
                if( (-1<i-3) && (-1<j-3) )
                    if( b[i][j]==opponent && b[i-1][j-1]==0 && b[i][j-1]!=0 && b[i-2][j-2]==opponent
                       && b[i-3][j-3]==opponent){
                        column=j-1;
                        return column;
                    }
                if( (-1<i-3) && (-1<j-3) )
                    if( b[i][j]==0 && b[i-1][j-1]==opponent && b[i-2][j-2]==opponent
                       && b[i-3][j-3]==opponent){
                        column=j;
                        return column;
                    }
                //그퐑R
                if( (-1<i-3) && (j+3<7) )
                    if( b[i][j]==opponent && b[i-1][j+1]==opponent && b[i-2][j+2]==opponent
                       && b[i-2][j+3]!=0 && b[i-3][j+3]==0){
                        column=j+3;
                        return column;
                    }
                if( (-1<i-3) && (j+3<7) )
                    if( b[i][j]==opponent && b[i-1][j+1]==opponent && b[i-2][j+2]==0
                       && b[i-1][j+2]!=0 && b[i-3][j+3]==opponent){
                        column=j+2;
                        return column;
                    }
                if( (-1<i-3) && (j+3<7) )
                    if( b[i][j]==opponent && b[i-1][j+1]==0 && b[i-2][j+2]==opponent
                       && b[i][j+1]!=0 && b[i-3][j+3]==opponent){
                        column=j+1;
                        return column;
                    }
                if( (-1<i-3) && (j+3<7) )
                    if( b[i][j]==0 && b[i-1][j+1]==opponent && b[i-2][j+2]==opponent
                       && b[i-3][j+3]==opponent){
                        column=j;
                        return column;
                    }
                //そ퐑
                if(i+3<6)
                    if( b[i+1][j]==opponent && b[i+2][j]==opponent && b[i+3][j]==opponent
                       && b[i][j]==0 ){
                        column=j;
                        return column;
                       }
                //어퐑
                if(j+3<7)
                    if( b[i][j]==opponent && b[i][j+1]==opponent && b[i][j+2]==opponent
                       && b[i][j+3]==0 ){
                        column=j+3;
                        return column;
                       }
                if(-1<j-3)
                    if( b[i][j]==opponent && b[i][j-1]==opponent && b[i][j-2]==opponent
                       && b[i][j-3]==0 ){
                        column=j-3;
                        return column;
                       }
                if(-1<j-3)
                    if( b[i][j]==opponent && b[i][j-1]==0 && b[i][j-2]==opponent
                       && b[i][j-3]==opponent ){
                        column=j-1;
                        return column;
                    }
                if(-1<j-3)
                    if( b[i][j]==opponent && b[i][j-1]==opponent && b[i][j-2]==0
                       && b[i][j-3]==opponent ){
                        column=j-2;
                        return column;
                    }

        }
    //Defense_2
     for(int i=0;i<6;i++)
        for(int j=0;j<7;j++){
                //어퐑
                if(j+4<7)
                    if( b[i][j]==0 && b[i][j+1]==opponent && b[i][j+2]==0 && b[i][j+3]==opponent
                        && b[i][j+4]==0 ){
                        column=j+2;
                        return column;
                }
                if(j==0)
                    if( b[i][0]==0 && b[i][1]==opponent && b[i][2]==opponent && b[i][3]==0 ){
                        column=3;
                        return column;
                    }
                if(j==6)
                    if( b[i][6]==0 && b[i][5]==opponent && b[i][4]==opponent && b[i][3]==0 ){
                        column=3;
                        return column;
                    }
                if(j+4<7)
                    if( b[i][2]==opponent && b[i][3]==opponent && b[i][1]==0 && b[i][4]==0 ){
                        column=4;
                        return column;
                }
                if(j+4<7)
                    if( b[i][3]==opponent && b[i][4]==opponent && b[i][2]==0 && b[i][5]==0 ){
                        column=2;
                        return column;
                }
        }
 /////////////////////////
    for(int i=0;i<6;i++)
        for(int j=0;j<7;j++){
                  //그퐑L
                if( (-1<i-3) && (-1<j-3) )
                    if( b[i][j]==opponent && b[i-1][j-1]==opponent && b[i-2][j-2]==opponent
                       && b[i-1][j-3]!=0 && b[i-2][j-3]==0 && b[i-3][j-3]==0){
                        ////////////////no j-3
                        column=rand()%7;
                        if(column==0 && column!=j-3){
                            if(b[0][0]==0 && column!=j-3)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                            if(b[0][0]==0 && column!=j-3)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                                }
                        if(column==1 && column!=j-3){
                            if(b[0][1]==0 && column!=j-3)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                            if(b[0][1]==0 && column!=j-3)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                                }
                        if(column==2 && column!=j-3){
                            if(b[0][2]==0 && column!=j-3)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                            if(b[0][2]==0 && column!=j-3)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                                }
                        if(column==3 && column!=j-3){
                            if(b[0][3]==0 && column!=j-3)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                            if(b[0][3]==0 && column!=j-3)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                                }
                        if(column==4 && column!=j-3){
                            if(b[0][4]==0 && column!=j-3)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                            if(b[0][4]==0 && column!=j-3)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                                }
                        if(column==5 && column!=j-3){
                            if(b[0][5]==0 && column!=j-3)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                            if(b[0][5]==0 && column!=j-3)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                                }
                        if(column==6 && column!=j-3){
                            if(b[0][6]==0 && column!=j-3)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][6]==0 && column!=j-3)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                                }

                    }
                if( (-1<i-3) && (-1<j-3) )
                    if( b[i][j]==opponent && b[i-1][j-1]==opponent && b[i-3][j-3]==opponent
                       && b[i][j-2]!=0 && b[i-1][j-2]==0 && b[i-2][j-2]==0){
                        ////////////////no j-2
                        column=rand()%7;
                        if(column==0 && column!=j-2){
                            if(b[0][0]==0 && column!=j-2)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                            if(b[0][0]==0 && column!=j-2)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                                }
                        if(column==1 && column!=j-2){
                            if(b[0][1]==0 && column!=j-2)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                            if(b[0][1]==0 && column!=j-2)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                                }
                        if(column==2 && column!=j-2){
                            if(b[0][2]==0 && column!=j-2)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                            if(b[0][2]==0 && column!=j-2)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                                }
                        if(column==3 && column!=j-2){
                            if(b[0][3]==0 && column!=j-2)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                            if(b[0][3]==0 && column!=j-2)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                                }
                        if(column==4 && column!=j-2){
                            if(b[0][4]==0 && column!=j-2)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                            if(b[0][4]==0 && column!=j-2)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                                }
                        if(column==5 && column!=j-2){
                            if(b[0][5]==0 && column!=j-2)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                            if(b[0][5]==0 && column!=j-2)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                                }
                        if(column==6 && column!=j-2){
                            if(b[0][6]==0 && column!=j-2)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][6]==0 && column!=j-2)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                                }


                    }
                if( (-1<i-3) && (-1<j-3) )
                    if( b[i][j]==opponent && b[i-2][j-2]==opponent && b[i-3][j-3]==opponent
                       && b[i][j-1]==0 && b[i-1][j-1]==0){
                        ////////////////no j-1
                        column=rand()%7;
                        if(column==0 && column!=j-1){
                            if(b[0][0]==0 && column!=j-1)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                 if(b[0][0]==0 && column!=j-1)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                }
                        if(column==1 && column!=j-1){
                            if(b[0][1]==0 && column!=j-1)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                if(b[0][1]==0 && column!=j-1)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                }
                        if(column==2 && column!=j-1){
                            if(b[0][2]==0 && column!=j-1)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                 if(b[0][2]==0 && column!=j-1)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                }
                        if(column==3 && column!=j-1){
                            if(b[0][3]==0 && column!=j-1)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                  if(b[0][3]==0 && column!=j-1)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                }
                        if(column==4 && column!=j-1){
                            if(b[0][4]==0 && column!=j-1)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                if(b[0][4]==0 && column!=j-1)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                }
                        if(column==5 && column!=j-1){
                            if(b[0][5]==0 && column!=j-1)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                      if(b[0][5]==0 && column!=j-1)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                }
                        if(column==6 && column!=j-1){
                            if(b[0][6]==0 && column!=j-1)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                                    if(b[0][6]==0 && column!=j-1)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                                }

                    }
                //그퐑R
                if( (-1<i-3) && (j+3<7) )
                    if( b[i][j]==opponent && b[i-1][j+1]==opponent && b[i-2][j+2]==opponent
                       && b[i-1][j+3]!=0 && b[i-2][j+3]==0 && b[i-3][j+3]==0){
                      ///////no j+3
                        column=rand()%7;
                        if(column==0 && column!=j+3){
                            if(b[0][0]==0 && column!=j+3)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                            if(b[0][0]==0 && column!=j+3)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                                }
                        if(column==1 && column!=j+3){
                            if(b[0][1]==0 && column!=j+3)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                            if(b[0][1]==0 && column!=j+3)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                                }
                        if(column==2 && column!=j+3){
                            if(b[0][2]==0 && column!=j+3)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                            if(b[0][2]==0 && column!=j+3)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                                }
                        if(column==3 && column!=j+3){
                            if(b[0][3]==0 && column!=j+3)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                            if(b[0][3]==0 && column!=j+3)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                                }
                        if(column==4 && column!=j+3){
                            if(b[0][4]==0 && column!=j+3)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                            if(b[0][4]==0 && column!=j+3)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                                }
                        if(column==5 && column!=j+3){
                            if(b[0][5]==0 && column!=j+3)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                            if(b[0][5]==0 && column!=j+3)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                                }
                        if(column==6 && column!=j+3){
                            if(b[0][6]==0 && column!=j+3)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][6]==0 && column!=j+3)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                                }
                    }
                if( (-1<i-3) && (j+3<7) )
                    if( b[i][j]==opponent && b[i-1][j+1]==opponent && b[i-3][j+3]==opponent
                       && b[i][j+2]!=0 && b[i-1][j+2]==0 && b[i-2][j+2]==0){
                        /////////////no j+2
                        column=rand()%7;
                        if(column==0 && column!=j+2){
                            if(b[0][0]==0 && column!=j+2)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j+2)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j+2)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j+2)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j+2)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j+2)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j+2)
                                return column=6;
                            if(b[0][0]==0 && column!=j+2)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j+2)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j+2)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j+2)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j+2)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j+2)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j+2)
                                return column=6;
                                }
                        if(column==1 && column!=j+2){
                            if(b[0][1]==0 && column!=j+2)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j+2)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j+2)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j+2)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j+2)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j+2)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j+2)
                                return column=6;
                            if(b[0][1]==0 && column!=j+2)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j+2)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j+2)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j+2)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j+2)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j+2)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j+2)
                                return column=6;
                                }
                        if(column==2 && column!=j+2){
                            if(b[0][2]==0 && column!=j+2)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j+2)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j+2)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j+2)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j+2)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j+2)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j+2)
                                return column=6;
                            if(b[0][2]==0 && column!=j+2)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j+2)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j+2)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j+2)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j+2)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j+2)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j+2)
                                return column=6;
                                }
                        if(column==3 && column!=j+2){
                            if(b[0][3]==0 && column!=j+2)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j+2)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j+2)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j+2)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j+2)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j+2)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j+2)
                                return column=6;
                                 if(b[0][3]==0 && column!=j+2)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j+2)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j+2)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j+2)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j+2)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j+2)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j+2)
                                return column=6;
                                }
                        if(column==4 && column!=j+2){
                            if(b[0][4]==0 && column!=j+2)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j+2)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j+2)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j+2)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j+2)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j+2)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j+2)
                                return column=6;
                                  if(b[0][4]==0 && column!=j+2)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j+2)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j+2)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j+2)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j+2)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j+2)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j+2)
                                return column=6;
                                }
                        if(column==5 && column!=j+2){
                            if(b[0][5]==0 && column!=j+2)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j+2)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j+2)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j+2)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j+2)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j+2)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j+2)
                                return column=6;
                                 if(b[0][5]==0 && column!=j+2)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j+2)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j+2)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j+2)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j+2)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j+2)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j+2)
                                return column=6;
                                }
                        if(column==6 && column!=j+2){
                            if(b[0][6]==0 && column!=j+2)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j+2)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j+2)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j+2)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j+2)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j+2)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j+2)
                                return column=0;
                                    if(b[0][6]==0 && column!=j+2)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j+2)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j+2)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j+2)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j+2)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j+2)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j+2)
                                return column=0;
                                }
                    }
                if( (-1<i-3) && (j+3<7) )
                    if( b[i][j]==opponent && b[i-2][j+2]==opponent && b[i-3][j+3]==opponent
                        && b[i][j+1]==0 && b[i-1][j+1]==0){
                      ////////////////no j+1
                        column=rand()%7;
                        if(column==0 && column!=j+1){
                            if(b[0][0]==0 && column!=j+1)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j+1)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j+1)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j+1)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j+1)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j+1)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j+1)
                                return column=6;
                                                           if(b[0][0]==0 && column!=j+1)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j+1)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j+1)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j+1)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j+1)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j+1)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j+1)
                                return column=6;
                                }
                        if(column==1 && column!=j+1){
                            if(b[0][1]==0 && column!=j+1)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j+1)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j+1)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j+1)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j+1)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j+1)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j+1)
                                return column=6;
                                           if(b[0][1]==0 && column!=j+1)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j+1)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j+1)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j+1)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j+1)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j+1)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j+1)
                                return column=6;
                                }
                        if(column==2 && column!=j+1){
                            if(b[0][2]==0 && column!=j+1)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j+1)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j+1)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j+1)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j+1)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j+1)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j+1)
                                return column=6;
                                  if(b[0][2]==0 && column!=j+1)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j+1)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j+1)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j+1)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j+1)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j+1)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j+1)
                                return column=6;
                                }
                        if(column==3 && column!=j+1){
                            if(b[0][3]==0 && column!=j+1)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j+1)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j+1)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j+1)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j+1)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j+1)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j+1)
                                return column=6;
                                     if(b[0][3]==0 && column!=j+1)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j+1)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j+1)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j+1)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j+1)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j+1)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j+1)
                                return column=6;
                                }
                        if(column==4 && column!=j+1){
                            if(b[0][4]==0 && column!=j+1)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j+1)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j+1)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j+1)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j+1)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j+1)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j+1)
                                return column=6;
                                       if(b[0][4]==0 && column!=j+1)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j+1)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j+1)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j+1)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j+1)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j+1)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j+1)
                                return column=6;
                                }
                        if(column==5 && column!=j+1){
                            if(b[0][5]==0 && column!=j+1)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j+1)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j+1)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j+1)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j+1)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j+1)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j+1)
                                return column=6;
                                                            if(b[0][5]==0 && column!=j+1)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j+1)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j+1)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j+1)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j+1)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j+1)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j+1)
                                return column=6;
                                }
                        if(column==6 && column!=j+1){
                            if(b[0][6]==0 && column!=j+1)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j+1)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j+1)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j+1)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j+1)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j+1)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j+1)
                                return column=0;
                                                            if(b[0][6]==0 && column!=j+1)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j+1)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j+1)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j+1)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j+1)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j+1)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j+1)
                                return column=0;
                                }
                    }
        }
 ////////////////////////////
 //そ퐑
 for(int i=0;i<6;i++)
        for(int j=0;j<7;j++){
                if(j+3<7 && i+1<6)
                    if( b[i][j]!=0 && b[i][j+1]!=0 && b[i][j+2]!=0
                       && b[i+1][j]==opponent && b[i+1][j+1]==opponent && b[i+1][j+2]==opponent
                       && b[i][j+3]==0 && b[i+1][j+3]==0   ){
                        //no j+3
                          column=rand()%7;
                        if(column==0 && column!=j+3){
                            if(b[0][0]==0 && column!=j+3)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                            if(b[0][0]==0 && column!=j+3)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                                }
                        if(column==1 && column!=j+3){
                            if(b[0][1]==0 && column!=j+3)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                            if(b[0][1]==0 && column!=j+3)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                                }
                        if(column==2 && column!=j+3){
                            if(b[0][2]==0 && column!=j+3)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                            if(b[0][2]==0 && column!=j+3)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                                }
                        if(column==3 && column!=j+3){
                            if(b[0][3]==0 && column!=j+3)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                            if(b[0][3]==0 && column!=j+3)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                                }
                        if(column==4 && column!=j+3){
                            if(b[0][4]==0 && column!=j+3)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                            if(b[0][4]==0 && column!=j+3)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                                }
                        if(column==5 && column!=j+3){
                            if(b[0][5]==0 && column!=j+3)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                            if(b[0][5]==0 && column!=j+3)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j+3)
                                return column=6;
                                }
                        if(column==6 && column!=j+3){
                            if(b[0][6]==0 && column!=j+3)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                            if(b[0][6]==0 && column!=j+3)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j+3)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j+3)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j+3)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j+3)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j+3)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j+3)
                                return column=0;
                                }
                    }
                if(-1<j-3 && i+1<6)
                    if( b[i][j]!=0 && b[i][j-1]!=0 && b[i][j-2]!=0
                       &&  b[i+1][j]==opponent && b[i+1][j-1]==opponent && b[i+1][j-2]==opponent
                       && b[i][j-3]==0 && b[i+1][j-3]==0  ){
                        //no j-3
                         column=rand()%7;
                        if(column==0 && column!=j-3){
                            if(b[0][0]==0 && column!=j-3)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                            if(b[0][0]==0 && column!=j-3)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                                }
                        if(column==1 && column!=j-3){
                            if(b[0][1]==0 && column!=j-3)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                            if(b[0][1]==0 && column!=j-3)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                                }
                        if(column==2 && column!=j-3){
                            if(b[0][2]==0 && column!=j-3)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                            if(b[0][2]==0 && column!=j-3)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                                }
                        if(column==3 && column!=j-3){
                            if(b[0][3]==0 && column!=j-3)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                            if(b[0][3]==0 && column!=j-3)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                                }
                        if(column==4 && column!=j-3){
                            if(b[0][4]==0 && column!=j-3)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                            if(b[0][4]==0 && column!=j-3)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                                }
                        if(column==5 && column!=j-3){
                            if(b[0][5]==0 && column!=j-3)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                            if(b[0][5]==0 && column!=j-3)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j-3)
                                return column=6;
                                }
                        if(column==6 && column!=j-3){
                            if(b[0][6]==0 && column!=j-3)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                            if(b[0][6]==0 && column!=j-3)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j-3)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j-3)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j-3)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j-3)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j-3)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j-3)
                                return column=0;
                                }

                    }
                if(-1<j-3 && i+1<6)
                    if( b[i][j]!=0  && b[i][j-2]!=0 && b[i][j-3]!=0
                       &&  b[i+1][j]==opponent && b[i+1][j-2]==opponent && b[i+1][j-3]==opponent
                       && b[i][j-1]==0 && b[i+1][j-1]==0){
                        //no j-1
                        column=rand()%7;
                        if(column==0 && column!=j-1){
                            if(b[0][0]==0 && column!=j-1)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                            if(b[0][0]==0 && column!=j-1)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                }
                        if(column==1 && column!=j-1){
                            if(b[0][1]==0 && column!=j-1)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                            if(b[0][1]==0 && column!=j-1)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                }
                        if(column==2 && column!=j-1){
                            if(b[0][2]==0 && column!=j-1)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                            if(b[0][2]==0 && column!=j-1)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                }
                        if(column==3 && column!=j-1){
                            if(b[0][3]==0 && column!=j-1)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                            if(b[0][3]==0 && column!=j-1)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                }
                        if(column==4 && column!=j-1){
                            if(b[0][4]==0 && column!=j-1)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                            if(b[0][4]==0 && column!=j-1)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                }
                        if(column==5 && column!=j-1){
                            if(b[0][5]==0 && column!=j-1)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                            if(b[0][5]==0 && column!=j-3)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j-1)
                                return column=6;
                                }
                        if(column==6 && column!=j-1){
                            if(b[0][6]==0 && column!=j-1)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                            if(b[0][6]==0 && column!=j-1)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j-1)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j-1)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j-1)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j-1)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j-1)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j-1)
                                return column=0;
                                }
                    }
                if(-1<j-3 && i+1<6)
                    if( b[i][j]!=0 && b[i][j-1]!=0 && b[i][j-3]!=0
                        &&  b[i+1][j]==opponent && b[i+1][j-1]==opponent && b[i+1][j-3]==opponent
                        && b[i][j-2]==0 && b[i+1][j-2]==0 ){
                        // no j-2
                        column=rand()%7;
                        if(column==0 && column!=j-2){
                            if(b[0][0]==0 && column!=j-2)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                            if(b[0][0]==0 && column!=j-2)
                                return column;
                            if(b[0][0]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][0]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][0]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][0]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][0]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][0]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                                }
                        if(column==1 && column!=j-2){
                            if(b[0][1]==0 && column!=j-2)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                            if(b[0][1]==0 && column!=j-2)
                                return column;
                            if(b[0][1]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][1]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][1]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][1]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][1]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][1]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                                }
                        if(column==2 && column!=j-2){
                            if(b[0][2]==0 && column!=j-2)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                            if(b[0][2]==0 && column!=j-2)
                                return column;
                            if(b[0][2]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][2]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][2]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][2]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][2]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][2]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                                }
                        if(column==3 && column!=j-2){
                            if(b[0][3]==0 && column!=j-2)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                            if(b[0][3]==0 && column!=j-2)
                                return column;
                            if(b[0][3]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][3]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][3]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][3]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][3]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][3]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                                }
                        if(column==4 && column!=j-2){
                            if(b[0][4]==0 && column!=j-2)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                            if(b[0][4]==0 && column!=j-2)
                                return column;
                            if(b[0][4]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][4]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][4]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][4]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][4]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][4]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                                }
                        if(column==5 && column!=j-2){
                            if(b[0][5]==0 && column!=j-2)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                            if(b[0][5]==0 && column!=j-2)
                                return column;
                            if(b[0][5]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][5]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][5]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][5]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][5]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][5]!=0 && b[0][6]==0 && column!=j-2)
                                return column=6;
                                }
                        if(column==6 && column!=j-2){
                            if(b[0][6]==0 && column!=j-2)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                            if(b[0][6]==0 && column!=j-2)
                                return column;
                            if(b[0][6]!=0 && b[0][1]==0 && column!=j-2)
                                return column=1;
                            if(b[0][6]!=0 && b[0][2]==0 && column!=j-2)
                                return column=2;
                            if(b[0][6]!=0 && b[0][3]==0 && column!=j-2)
                                return column=3;
                            if(b[0][6]!=0 && b[0][4]==0 && column!=j-2)
                                return column=4;
                            if(b[0][6]!=0 && b[0][5]==0 && column!=j-2)
                                return column=5;
                            if(b[0][6]!=0 && b[0][0]==0 && column!=j-2)
                                return column=0;
                                }

                    }
        }
 ////////////////////////////
    column=rand()%7;
    if(column==0){
        if(b[0][0]==0)
            return column;
        if(b[0][0]!=0 && b[0][1]==0)
            return column=1;
        if(b[0][0]!=0 && b[0][2]==0)
            return column=2;
        if(b[0][0]!=0 && b[0][3]==0)
            return column=3;
        if(b[0][0]!=0 && b[0][4]==0)
            return column=4;
        if(b[0][0]!=0 && b[0][5]==0)
            return column=5;
        if(b[0][0]!=0 && b[0][6]==0)
            return column=6;
    }
    if(column==1){
        if(b[0][1]==0)
            return column;
        if(b[0][1]!=0 && b[0][0]==0)
            return column=0;
        if(b[0][1]!=0 && b[0][2]==0)
            return column=2;
        if(b[0][1]!=0 && b[0][3]==0)
            return column=3;
        if(b[0][1]!=0 && b[0][4]==0)
            return column=4;
        if(b[0][1]!=0 && b[0][5]==0)
            return column=5;
        if(b[0][1]!=0 && b[0][6]==0)
            return column=6;
    }
    if(column==2){
        if(b[0][2]==0)
            return column;
        if(b[0][2]!=0 && b[0][1]==0)
            return column=1;
        if(b[0][2]!=0 && b[0][0]==0)
            return column=0;
        if(b[0][2]!=0 && b[0][3]==0)
            return column=3;
        if(b[0][2]!=0 && b[0][4]==0)
            return column=4;
        if(b[0][2]!=0 && b[0][5]==0)
            return column=5;
        if(b[0][2]!=0 && b[0][6]==0)
            return column=6;
    }
    if(column==3){
        if(b[0][3]==0)
            return column;
        if(b[0][3]!=0 && b[0][1]==0)
            return column=1;
        if(b[0][3]!=0 && b[0][2]==0)
            return column=2;
        if(b[0][3]!=0 && b[0][0]==0)
            return column=0;
        if(b[0][3]!=0 && b[0][4]==0)
            return column=4;
        if(b[0][3]!=0 && b[0][5]==0)
            return column=5;
        if(b[0][3]!=0 && b[0][6]==0)
            return column=6;
    }
    if(column==4){
        if(b[0][4]==0)
            return column;
        if(b[0][4]!=0 && b[0][1]==0)
            return column=1;
        if(b[0][4]!=0 && b[0][2]==0)
            return column=2;
        if(b[0][4]!=0 && b[0][3]==0)
            return column=3;
        if(b[0][4]!=0 && b[0][0]==0)
            return column=0;
        if(b[0][4]!=0 && b[0][5]==0)
            return column=5;
        if(b[0][4]!=0 && b[0][6]==0)
            return column=6;
    }
    if(column==5){
        if(b[0][5]==0)
            return column;
        if(b[0][5]!=0 && b[0][1]==0)
            return column=1;
        if(b[0][5]!=0 && b[0][2]==0)
            return column=2;
        if(b[0][5]!=0 && b[0][3]==0)
            return column=3;
        if(b[0][5]!=0 && b[0][4]==0)
            return column=4;
        if(b[0][5]!=0 && b[0][0]==0)
            return column=0;
        if(b[0][5]!=0 && b[0][6]==0)
            return column=6;
    }
    if(column==6){
        if(b[0][6]==0)
            return column;
        if(b[0][6]!=0 && b[0][1]==0)
            return column=1;
        if(b[0][6]!=0 && b[0][2]==0)
            return column=2;
        if(b[0][6]!=0 && b[0][3]==0)
            return column=3;
        if(b[0][6]!=0 && b[0][4]==0)
            return column=4;
        if(b[0][6]!=0 && b[0][5]==0)
            return column=5;
        if(b[0][6]!=0 && b[0][0]==0)
            return column=0;
    }


	//Write your AI here

	return column;
}
