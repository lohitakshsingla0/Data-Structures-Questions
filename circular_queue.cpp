#include<iostream>
using namespace std;
struct queue{
	int *a;
	struct node{
		int data;
		node *next;
	};
	node *start;
	int max_size;
	int count;
	public:
		queue(int n){
			max_size=n;
			start=NULL;
			count=0;
		}
		void enqueue(){
			if(count==max_size){
				cout<<"overflow"<<endl;
			}
			else{
				node *first,*ptr;
				first=new node();
				int n;
				cout<<"enter no to b inserted"<<endl;
				cin>>n;
				count++;
				first->data=n;
				first->next=NULL;
				if(start==NULL){
					start=first;
				}
				else
				{
						ptr=start;
					while(ptr->next!=NULL){
					ptr=ptr->next;	
					}	
				ptr->next=first;
				}
				
			}
		}
			void dequeue(){
			if(count==0){
				cout<<"underflow"<<endl;
			}
			else{
			start=start->next;
			count--;
		}
	}
		void print(){
				if(count==0)
				cout<<"queue empty"<<endl;
		else cout<<"element on front is "<<start->data<<endl;
		}
};
int main(){
	int n,a,c;
	cout<<"enter max size"<<endl;
	cin>>n;
	queue q(n);
	cout<<"enter 1 to insert in queue"<<endl<<"enter 2 to delete from queue"<<endl<<"enter 3 to print from queue"<<endl;
	cin>>a;
	while(a!=-1){
		switch (a)
			{
				case 1:
					q.enqueue();
					break;
				case 2:
					q.dequeue();
					break;
				case 3:
					q.print();
					break;
			}
			cout<<"enter 1 to insert in queue"<<endl<<"enter 2 to delete from queue"<<endl<<"enter 3 to print from queue"<<endl;
	
cin>>a;
	}
	return 0;
}

