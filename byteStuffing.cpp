#include<bits/stdc++.h>
using namespace std;

int main()
{
	string stuffing, frame;

	cout<<"Enter Frame : ";
	cin>>frame;

	cout<<"Enter ESC (byte to be stuffed ) : ";
	cin>>stuffing;

	for(int i = 0;i<frame.length();i++)
	{
		if(frame.substr(i,8) == "01111110")
		{
			frame.insert(i,stuffing);
			i+=8;
		}
	}
	cout<<"After Byte Stuffing : "<<frame;
	return 0;
}
