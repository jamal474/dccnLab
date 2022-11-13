#include<bits/stdc++.h>
using namespace std;

void xor_op(string &c_rem,string d)
{
	string temp = c_rem;
	for(int i = 1;i<c_rem.length();i++)
	{
		if(c_rem[i] == d[i])
		{
			temp[i-1] = '0';
		}
		else
		{
			temp[i-1] = '1';
		}
	}
	c_rem = temp;
}

int main()
{
	string data;
	cout<<"Enter Received Data block : ";
	cin>>data;

	string divisor;
	cout<<"Enter divisor : ";
	cin>>divisor;

	int dn = divisor.length();

	string d1 = divisor;
	string d2, fin_rem = ""; 
	d2.append(dn,'0');
	string c_rem = data.substr(0,dn);
	
	for(int i = 0;i<data.length() - dn;i++)
	{	
		if(c_rem[i] == '1')
		{
			xor_op(c_rem,d1);
			if(i + dn <= data.length() -1)
			{
				c_rem[dn-1] = data[i+dn];
				//cout<<c_rem<<endl;
			}
		}
		else
		{
			xor_op(c_rem,d2);
			if(i + dn <= data.length() -1)
			{
				c_rem[dn-1] = data[i+dn];
				//cout<<c_rem<<endl;
			}

		}
	}
	c_rem.pop_back();
	cout<<"Remainder : "<<c_rem<<endl;
	if(c_rem == fin_rem.append(dn-1,'0'))
	{
		cout<<"Correct Data"<<endl;
	}
	else
	{
		cout<<"Incorrect/Errored Data"<<endl;
	}

	return 0;
}
