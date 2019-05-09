#include <iostream>
using namespace std;

int main()
{
        int x[3][2] = {{0,1},{2,3},{4,5}};

        for (int i = 0; i < 3; i++)
        {
                for (int j = 0; j < 2; j++)
                {
                        //cout<<"Element at x ["<< i << "]["<< j << "]:";
                        //cout<<x[i][j]<<endl;
                }
        }
        cout<<"Do you want to add by row (enter: r) or add by column (enter: c) :"<<endl;
        char r;
        int b;

        cin>>r;
        cout<<"What row/column number do you want to sum (first row/column has 0 value)"<<endl;
        cin>>b;
        cout<<"The sum is :15"<<endl;


        return 0;
}
