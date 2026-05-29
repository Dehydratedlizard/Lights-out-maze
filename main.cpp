#include<iostream>
using namespace std;
char t[50][70];
int main()
{

    for(int i=0;i<50;i++)
    {
        for(int j=0;j<70;j++)
        {
            if(i==0 ||i==49||j==0 || j==69)
            {
                t[i][j]='#';
            }
            else
            t[i][j]=' ';
        }
    }
        for(int i=0;i<50;i++)
    {
        for(int j=0;j<70;j++)
        {
            cout<<t[i][j];
        }
        cout<<endl;
    }


}