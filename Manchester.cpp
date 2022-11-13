#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*   --
         |     -> this is represnted by 01
       --
       --
         |     -> this is represented by 10
	 --
     
    */
    string code;
    cout<<"Enter Data : ";
    cin>>code;
    string encoded = "";
    for(auto c : code)
    {
        if(c == '1')
        {
            encoded += "01";
        }
        else
        {
            encoded += "10";
        }
    }
    cout<<"Encoded Value : "<<encoded;
    return 0;
}
