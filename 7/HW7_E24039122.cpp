#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;


int m=0;
int n=0;
int a[100][100]={0};
int b=0;
int maximum=0;
int frame_row, frame_col;
int out_row, out_col;
int ii,jj;
int i_x, j_y;
int main()
{

    cout<<"Enter your row:";
    cin>>m;
    cout<<"Enter your column:";
    cin>>n;
    //int run=m*n;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            a[i][j]=rand()%(50)-25;
    cout<<"    ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<setw(6);
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

    for(int pos_row=1;pos_row<=m;pos_row++)
        for(int pos_col=1;pos_col<=n;pos_col++)

            for(int x=0;x<m-pos_row+1;x++)
                for(int y=0;y<n-pos_col+1;y++){
                    b=0;
                    for(int i=0;i<pos_row;i++){
                        for(int j=0;j<pos_col;j++){
                            //cout<<a[i+x][j+y]<<setw(6);
                            b+=a[i+x][j+y];
                            ii=i+x;
                            jj=j+y;
                        }
                        /*
                        cout<<endl;
                        cout<<"b: "<<b<<endl;
                        */
                        //cout<<endl;

                }
                if(b>maximum){
                    maximum=b;
                    frame_row=pos_row;
                    frame_col=pos_col;
                    /*error*/out_row=ii;
                    /*error*/out_col=jj;
                }
            //cout<<endl;
        }




        cout<<"Max: "<<maximum<<endl;
        cout<<endl;

        cout<<"Sub-matrix Maximum: "<<endl;
        if(frame_row-out_row-1>=0)
            for(int i=frame_row-out_row-1;i<frame_row;i++){
                for(int j=frame_col-out_col-1;j<frame_col;j++)
                    cout<<a[i][j]<<setw(5);
                cout<<endl;
            }
        if(out_row-frame_row+1>=0)
            for(int i=out_row-frame_row+1;i<=out_row;i++){
                for(int j=out_col-frame_col+1;j<=out_col;j++)
                    cout<<a[i][j]<<setw(5);
                cout<<endl;
            }


    return 0;
}
