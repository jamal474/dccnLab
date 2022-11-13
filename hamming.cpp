#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,temp = 1;
	cout<<"Enter total data bits : ";
	cin>>n;
	vector<char> data(n+1);
	int nd,np;
	np = ceil(log2(n));
	nd = n - np;

	cout<<"Enter "<<nd<<" bits of data : ";
	string data_bits;
	int dptr = 0;
	cin>>data_bits;

	cout<<"Enter "<<np<<" parity bits : ";
	string parity_bits;
	int pptr = 0;
	cin>>parity_bits;

	for(int i = 1;i<=n;i++)
	{
		if(ceil(log2(i)) == floor(log2(i)) || (i) == 1)
		{
			data[i] = parity_bits[pptr];
			pptr++;
		}
		else
		{
			data[i] = data_bits[dptr];
			dptr++;
		}	
	}

	int t = 0;
	for(int i = pow(2,t); i<=n;i = pow(2,t))
	{
		t++;
		int p_xor = 0;
		int cnt = 0;
		//cout<<"i : "<<i<<" ";
		for(int j = i;j<=n;j++)
		{
			cnt++;
			//cout<<", j  : "<<j;

			p_xor = p_xor ^ (data[j] - '0');
			if(cnt == i)
			{	
				cnt = 0;
				j = j + i;
			}

		}
		//cout<<i<<" "<< p_xor<<endl;
		if(p_xor == 1)
		{
			temp =  0;
			cout<<"Parity error in : P"<<i<<" group"<<endl;
		}
		else
		{
			cout<<"No error in P"<<i<<" parity group"<<endl;
		}
	}

	reverse(data.begin(),data.end());
	cout<<endl;
	cout<<"Data : "; for(auto c : data){cout<<c;}
	cout<<endl;

	if(temp == 1)
	{
		cout<<endl<<"\tNo Error Detected"<<endl;
	}
	else
	{
		cout<<endl<<"\tError Detected"<<endl;
	}
	return 0;
}
