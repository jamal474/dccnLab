#include<bits/stdc++.h>
using namespace std;

void check_list(vector<int> &check, string password)
{
    //index 0 for small case alphabet
    //index 1 for caps alphabet
    //index 2 for numeral
    //index 3 for special character
    //index 4 for length of atleast 8 character

    for(auto c : password)
    {
        if(!isupper(c) && isalpha(c))
        {
            check[0] = 1;
        }
        else if(isupper(c) && isalpha(c))
        {
            check[1] = 1;
        }
        else if(isdigit(c))
        {
            check[2] = 1;
        }
        else
        {
            check[3] = 1;
        }
    }
    check[4] = password.length() >=8 ? 1: 0;
}

int main()
{
    string password;
    vector<int> check(5,0);
    cout<<"Enter Password : ";
    cin>>password;
    check_list(check,password);
    if(accumulate(check.begin(),check.end(),0) == 5)
    {
        cout<<"Strength : Strong";
    }
    else if(accumulate(check.begin(),check.end(),0) >= 3 && password.length() >= 6)
    {
        cout<<"Strength : Medium";
    }
    else
    {
        cout<<"Strength : Weak";
    }


    return 0;
}
