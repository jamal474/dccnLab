#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    cout<<"1. Even Parity."<<endl;
    cout<<"2. Odd Parity."<<endl;
    string s;
    int option = 0;
    cout<<"Enter Parity Type : ";
    cin>>option;
    cout<<"Enter Data : ";
    cin>>s;
 
    int one_cnt = 0;
    for(char i : s)
    {
        if(i == '1')
        {
            one_cnt++;
        }
    }
    switch(option)
    {
        case 1:
        {
            if(one_cnt%2 == 0)
            {
                cout<<"Correct Data";
            }
            else
            {
                cout<<"Error Data";
            }
            break;
        }
        case 2:
        {
            if(one_cnt%2 != 0)
            {
                cout<<"Correct Data";
            }
            else
            {
                cout<<"Error Data";
            }
            break;
        }
    }
    	return 0;
}
