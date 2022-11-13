#include<bits/stdc++.h>
using namespace std;

int main()
{
	string frame;
	int count = 0;

	cout<<"Enter Frame bits : ";
	cin>>frame;
	for(int i = 0;i<frame.length();i++)
	{
		count = count + (frame[i] == '1' ? 1 : -1*count);
		if(count == 5)
		{
			frame = frame.substr(0,i+1) + "0" + frame.substr(i+1,frame.length() - i -1);
			count = 0;
		}
	}
	cout<<"After Bit Stuffing Frame : "<<frame;
	return 0;
}
