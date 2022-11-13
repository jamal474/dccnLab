#include<bits/stdc++.h>
using namespace std;

int main()
{
    string code;
    cout<<"Enter Data : ";
    cin>>code;
    int var = 0;
    string encoded = "";
    for(auto c : code)
    {
        if(c == '1')
        {
            if(var == 1)
            {
                var = 0;
            }
            else
            {
                var = 1;
            }
            encoded += to_string(var);
        }
        else
        {
            encoded += to_string(var);
        }
    }
    cout<<"Encoded Value : "<<encoded;
    return 0;
}
