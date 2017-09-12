#include <iostream>

using namespace std;

class Base{
	public:
		void disp(){
			cout<<"disp function of Base class"<<endl;
		}
};
class Derived1: public Base{
    public:
		void disp(){
			cout<<"disp function of Derived1 class"<<endl;
		}
};
class Derived2: public Base{
    public:
		void disp(){
			cout<<"disp function of Derived2 class"<<endl;
		}
};
int main(){

	Base *b;
	Derived1 D1;
	Derived2 D2;

	b= &D1;
	b->disp();

	b= &D2;
	b->disp();

	return 0;
}
