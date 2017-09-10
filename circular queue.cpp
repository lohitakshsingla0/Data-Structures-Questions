#include<iostream>
using namespace std;
int a[3],f=-1,r=-1,m=3;
void insert()
{
    int v;
	cout<<" insert ";
	cin>>v;
	if((f==0 && r==m-1)||(f==r+1))
	{
	    cout<<"overflow";
	}
	else if(f==-1 && r==-1)
	{
	    f=r=0;
	    a[r]=v;
	}
	else if(r==m-1)
	{
		r=0;
		a[r]=v;
	}
	else
	{
	    r=r+1;
	    a[r]=v;
	}
}

void insertfront()
{i
    int v;
	cout<<" insert ";
	cin>>v;
	if((f==0 && r==m-1)||(r==f-1))
	{
	    cout<<"overflow";
	}
	else if(f==-1 && r==-1)
	{
	    f=r=0;
	    a[f]=v;
	}
	else if(f==0)
	{
		f=m-1;
		a[f]=v;
	}
	else
	{
	    f=f-1;
	    a[f]=v;
	}
}

void delet()
{
	cout<<" delet ";
	if(f==-1 && r==-1)
	{
	    cout<<" empty ";
	}
	else if(f==r)
	{
	    f=-1;
	    r=-1;
	}
	else if(f==m-1)
	{
		f=0;
	}
	else
	{
	    f=f+1;
	}
}

void deletrear()
{
	cout<<" delet ";
	if(f==-1 && r==-1)
	{
	    cout<<" empty ";
	}
	else if(f==r)
	{
	    f=-1;
	    r=-1;
	}
	else if(r==0)
	{
		r=m-1;
	}
	else
	{
	    r=r-1;
	}
}


void display()
{
	//cout<<"display";
	if(f==-1 && r==-1){cout<<"empty";}
	else{
	for(int i=f;i<=r;i++)
	{
		cout<<a[i]<<"\n";
		if((i==m-1)&&(r!=m-1))
		{
			i=-1;
		}
	}
	}
}
int main()
{
	int s;
	while(1)
	{
	cout<<endl<<"1->insert\n2->delete\n3->display\n4->insertfront\n5->deleterear";
	cin>>s;
		switch(s)
		{
			case 1:
				insert();
				break;
			case 2:
				delet();
				break;
			case 3:
				display();
				break;
			case 4:
				insertfront();
				break;
			case 5:
				deletrear();
				break;
		}
	}
}
