#include<bits/stdc++.h>
using namespace std;

int main()
{
    //   V denotes positive voltage
    //   -V denotes negative voltage
    //   0 denotes zero voltage
    string code;
    cout<<"Enter Data : ";
    cin>>code;
    int var = -1;
    string encoded = "";
    for(auto c : code)
    {
        if(c == '1')
        {
            if(var == -1)
            {
                var = 1;
            }
            else
            {
                var = -1;
            }
            encoded += var > 0 ? "V" : "-V";
        }
        else
        {
            encoded += "0";
        }
    }
    cout<<"Encoded Value : "<<encoded;
    return 0;
}
