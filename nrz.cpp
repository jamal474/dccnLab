#include<bits/stdc++.h>
using namespace std;

int main()
{
    // V denotes 1 data bit
    // -V denotes 0 data bit
    string code;
    cout<<"Enter Data : ";
    cin>>code;
    string encoded = "";
    for(auto c : code)
    {
        if(c == '1')
        {
            encoded += "V";
        }
        else
        {
            encoded += "-V";
        }
    }
    cout<<"Encoded Value : "<<encoded;
    return 0;
}
