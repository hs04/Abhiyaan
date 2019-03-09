#include <iostream>
#include<string.h>
using namespace std;

struct node
{
    string data;
    node *next;
};	

class list
  {
    private:
    node *head, *tail;
    public:
    list()
    {
      head=NULL;
      tail=NULL;
    }

    void createnode(string value)
    {
      node *temp=new node;
      temp->data=value;
      temp->next=NULL;
      if(head==NULL)
      {
        head=temp;
        tail=temp;
        temp=NULL;
      }
      else
      {	
        tail->next=temp;
        tail=temp;
      }
    }  
    
    int check()
    {
    	return (head==tail);
	}
    
    void delete_last()
  {
    node *current=new node;
    node *previous=new node;
    current=head;
    while(current->next!=NULL)
    {
      previous=current;
      current=current->next;	
    }
    tail=previous;
    previous->next=NULL;
    delete current;
  }
  void displaytail()
  {
    cout<<"Welcome to "<<tail->data;
  }
  }; 


int main()
{
	int choice = 100;
	string msg = "Welcome to ";
	cout<<"Welcome to Stupid Browser :D\n";
	cout<<"Enter choice=1 if you want to goto new website.\n";
	cout<<"Enter choice=2 if you want to goto previous website.\n";
	cout<<"Enter choice=0 if you wanna exit()\n";
	
	list arr;
	int a=0;int b=0;
	
	while(choice!=0)
	{
		cout<<"\nEnter choice : ";
		cin>>choice;
		if(choice==1)
		{
			string url;
			cout<<"New website url:";
			cin>>url;
			arr.createnode(url);
			cout<<"\n"<<msg<<url;
			
		}
		else if(choice==2)
		{
			if(!arr.check()){
			arr.delete_last();
			arr.displaytail();
			
		}
		else
		{
			cout<<"\nYou can't go back hooman!! First enter some new website!!";
		}
		}
		else if(choice==0)
		{
			cout<<"\nThanks for using this browser!Hope you get a life and install chrome :P";
			break;
		}
		else
		{
			cout<<"\nEnter a valid choice hooman!!!!!";
		}
	}
	
	return 0;	
	
}
