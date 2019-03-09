#include<iostream>
#include<ctime>
using namespace std;

//prd = interval
time_t prd=5;


int main()
{
	time_t ct,ctt,telap,tot,rot;
	ct = time(NULL);
	ctt = time(NULL);
	rot = ct;
	tot = 0;
	telap = ctt-ct;
	int choice=100,curcap=0,q=0;
	
	while(choice!=0)
	{
		cout<<"Currently "<<curcap<<" people are inside the dJtube.\nThere are "<<q<<" people in queue.";
		cout<<"Time elapsed : "<<tot<<"\n";
		
		cout<<"\nWELCOME .... PRESS (1) TO ENTER THE TUBE.... PRESS (0) TO EXIT....\n";
		cin>>choice;
		ct = time(NULL);
		telap = ct-ctt;
		if(choice)
		{
		if(curcap<4)
		{
			curcap = curcap+1;
			cout<<"ENJOY!!!! :D\n";
		}
		else 
		{
			cout<<"Wait!The tube's FULL!!\n";
			if(telap<prd)
			{
				q = q+1;
			}
			else
			{
				curcap = curcap-(telap/prd);
				if(q>0)
				q = q-1;
			}
		}
		}
		ctt = time(NULL);	
		tot = ctt-rot;	
	}

	return 0;
	
}
