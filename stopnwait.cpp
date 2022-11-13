#include<bits/stdc++.h>
using namespace std;


class timer {
    private:
     unsigned long begTime;
    public:
     void start() {
      begTime = clock();
     }
  unsigned long elapsedTime() {
      return ((unsigned long) clock() - begTime) / CLOCKS_PER_SEC;
    }
   bool isTimeout(unsigned long seconds) {
      return seconds >= elapsedTime();
     }
};
int main()
{
 int n;
 cout<<"Enter number of Frames : ";
 cin>>n;
 
 vector<int> frames(n);
 cout<<"Enter frame sequence numbers : ";
 for(int i = 0;i<n;i++)
 {
     cin>>frames[i];
 }
 unsigned long seconds = 4;
 timer t;
 cout<<"Sender has to send frames : ";
 for(int i=0;i<n;i++)
 {
	cout<<frames[i]<<" ";

 }
 cout<<endl;
 int count = 0;
 bool delay = false;
 cout<<endl<<"Sender\t\t\t\t\tReceiver"<<endl;
 while(count<n)
 {
     bool timeout = false;
     cout<<"Sending Frame : "<<frames[count]<<"\t";
     t.start();
     this_thread::sleep_for (chrono::seconds(rand()%6)); 

     if(t.elapsedTime() <= seconds)
     {
         cout<<"Received Frame : "<<frames[count]<<" ";
         if(delay)
         {
             cout<<"Duplicate";
         }
	 count++;
         cout<<endl;
     }
     else
     {
         cout<<"---"<<endl;
         cout<<"\t\tTimeout"<<endl;
         timeout = true;
     }
     if(timeout)
     {	
	continue;
     }
     else
     {
	t.start();
	this_thread::sleep_for (chrono::seconds(rand()%6));         
	if(t.elapsedTime() > seconds )
         {
             cout<<"\t\tDelayed Ack"<<endl;
             delay = true;
	     count--;
         }
	else
	{
             cout<<"\t\tAcknowledgement : "<<frames[count-1]<<endl;
	     delay = false;
	}
     }
 }
 return 0;
}
