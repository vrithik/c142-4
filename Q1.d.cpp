// Queue implementation using arrays
#include <iostream>
using namespace std;
#define MAX_SIZE 101 

class Queue
{
private:
  int A[MAX_SIZE];  // array to store the Queue
	int front,rear;   // variable to mark the front and rear of Queue 
public:
	// constructor
    Queue()
	{   front=0;
		rear= -1; // for empty array
	}

	// Operation to insert an element at rear of queue. 
	void Insert(int x) 
	{
	  if(rear== MAX_SIZE -1) 
	  { // overflow case. 
			cout<<"Error: Queue is full\n";
			return;
		}
		A[++rear] = x;
	}
 
	// Operation to remove an element from front of queue.
	void Delete() 
	{
		if(rear<front) 
		{ // If queue is empty, deletion should throw error. 
			cout<<"Error: No element to delete\n";
			return;
		}
		front++;
	}
 
	
 
	
	
	// This will print all the elements in the queue at any stage. 
	void Print() {
		int i;
		cout<<"Queue: ";
		for(i = front;i<=rear;i++)
			cout<<A[i]<<"->";
	cout<<"NULL\n";
	}
};

int main()
{
    // Code to test the implementation. 
    
	Queue s;
	int choice,num;
 while(1)
        {
      cout<<"------------------------------------\n";
      cout<<"\n\t\t MENU\n\n";
      cout<<"1:ADD, 2:REMOVE, 3:SHOW, 4:EXIT";
      cout<<"\nChoose the menu: ";
      cin>>choice;
      cout<<choice<<endl;

          switch(choice)
          {
               case 1: cout <<"Enter the element: ";
  		 cin >> num;
  		 cout<<num<<endl;
  	             s.Insert(num);
   	             break;
               case 2: 
               {
               	s.Delete(); 
               	cout<<"The element at front of queue is deleted.\n";
                        break;
               }
               case 3: 
               {
               	s.Print(); break;
               }
               case 4:
               {
               
               cout<<"EXIT";
               exit(0);
                break;
               }

            default:
               {
                cout<<"\nInvalid Input. Try again! \n";
                break;
               	
               }
        }
    }
    return 0;
}
