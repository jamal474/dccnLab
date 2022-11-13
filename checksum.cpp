#include<bits/stdc++.h>
using namespace std;

string add(string sum , string db)
{
	string ans = sum;
	int n = sum.length();
	int carry= 0;
	for(int i = n -1;i>=0;i--)
	{
		if(carry + (sum[i] - '0') + (db[i] - '0') == 2 )
		{
			ans[i] = '0';
			carry = 1;
		}
		else if (carry + (sum[i] - '0') + (db[i] - '0') == 3 )
		{
			ans[i] = '1';
			carry = 1;
		}
		else
		{
			ans[i] = carry + (sum[i] - '0') + (db[i] - '0') == 1 ? '1' : '0';
			carry = 0;
		}
	}
	if(carry != 0)
	{
		string temp = "";
		ans = add(ans,temp.append(n-1,'0') + to_string(carry));
	}
	return ans;
}

int main()
{
	string data;
	cout<<"Enter Data : ";
	cin>>data;

	int block = 0;
	cout<<"Enter block size : ";
	cin>>block;

	string checksum = data.substr(0,block);
	string original_data  = data.substr(block,data.length() - block);

	string sum = "";
	sum.append(block,'0');
	for(int i = 0;i<original_data.length();)
	{
		sum = add(sum,original_data.substr(i,block));
		i = i + block;	
	}
	sum = add(sum,checksum);
	string t= "";
	if(t.append(block,'1') == sum)
	{
		cout<<"Correct Data";
	}
	else
	{
		cout<<"Error Data";
	}
	return 0;
}
