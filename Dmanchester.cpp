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
    string var = "01";
    string encoded = "";
    for(auto c : code)
    {
        if(c == '1')
        {
            if(var == "01")
            {
                var = "10";
            }
            else
            {
                var = "01";
            }
            encoded += var;
        }
        else
        {
            encoded += var;
        }
    }
    cout<<"Encoded Value : "<<encoded;
    return 0;
}
