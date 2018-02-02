#include <iostream>
using namespace std;

//CREATING A NODE STRUCTURE
struct node
{
int data;
node *next;
};

//CREATING A CLass STACKLL
class stackLL{
	node *top;
	public:
	stackLL()
	{
		top=NULL;
	}
	
	//A FUCTION TO INSERT AN ELEMENT
	void push()
	{
	int value;
	node *ptr=new node;
	cout<<"\nPUSH Operation\n";
	cout<<"Enter a number to insert: ";
            cin>>value;
	ptr->data=value;
	ptr->next=NULL;
	if(top!=NULL)
        ptr->next=top;
    top=ptr;
    cout<<"\nNew item is inserted to the stack";
	
	}
	// A FUNCTION TO DELETE THE TOPMOST ELEMENT
void pop()
{
     node *temp=new node;
    if(top==NULL)
    {
        cout<<"\nThe stack is empty!!!";
    }
    temp=top;
    top=top->next;
    cout<<"\nPOP Operation........\nPoped value is "<<temp->data;
    delete temp;
}
// A FUNTION TO DISPLAY THE ELEMENTS OF STACK
void show()
{
    node *temp=new node;
    temp=top;
    cout<<"\nThe stack is\n";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
};

// Main function
int main()
{
    stackLL s;
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
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.show();
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
