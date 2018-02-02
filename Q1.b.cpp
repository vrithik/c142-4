// Implementing queue using linkedlist
#include <iostream>
using namespace std;

//CREATING A NODE STRUCTURE
struct node
{
int data;
node *next;
};

//CREATING A CLass queueLL
class queueLL{
	node *rear,*front;
	public:
	queueLL()
	{
		rear=front=NULL;
	}
	
	//A FUCTION TO INSERT AN ELEMENT
	void push()
	{
	int value;
	node *temp=new node;
	cout<<"\nPUSH Operationn\n";
	cout<<"Enter a number to insert: ";
            cin>>value;
	temp->data=value;
	temp->next=NULL:
	  //for first node
    if(front==NULL){
        front=temp;
    }
    else
        rear->next=temp;
        rear=temp;
    
    cout<<"\nNew item is inserted to the stack";
	
	}
// A FUNCTION TO DELETE THE FIRST ELEMENT
void pop()
{
   if(front==NULL)
   {
      cout<<"\nQueue is empty!!";
      return;
   }
   node *temp=new node;
   temp=front;
   front=front->next;
   cout<<"\nDeletion Operation........\nDeleted value is "<<temp->data;
   delete temp;
   
}
// A FUNTION TO DISPLAY THE ELEMENTS OF QUEUE
void show()
{
   node *temp=new node;
   temp=front;
   if(front==NULL)
   {
      cout<<"The Queue is empty!!";
      return;
   }
   cout<<"\nThe Queue is\n";
   while(temp!=NULL)
   {
      cout<<temp->data<<" ->";
      temp=temp->next;
   }
   cout<<"NULL";
}
 
};

// Main function
int main()
{
    queueLL q;
    int choice;
    while(1)
    {
        cout<<"\n-----------------------------------------------------------";
        cout<<"\n\t\tSTACK USING LINKED LIST\n\n";
        cout<<"1:PUSH\n2:POP\n3:DISPLAY STACK\n4:EXIT";
        cout<<"\nEnter your choice(1-4): ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                q.push();
                break;
            case 2:
                q.pop();
                break;
            case 3:
                q.show();
                break;
            case 4:
                return 0;
                break;
            default:
                cout<<"\nPlease enter correct choice(1-4)!!";
                break;
        }
    }
    return 0;
}
