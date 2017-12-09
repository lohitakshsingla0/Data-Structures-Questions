#include<iostream>
using namespace std;
class stackk{
char a[20];
int top;
public:
    stackk()
    {
        top=-1;
    }
    void push(int num)
    {
        a[++top]=num;
    }
    char pop()
    {
        return a[top--];
    }
    int priority(char p)
    {
        if(p=='(')
            return 0;
        else if(p=='+'||p=='-')
            return 1;
        else if(p=='*'||p=='/')
            return 2;
        else if(p=='^')
            return 3;
        else return -1;
    }
    void post_convert(char exp[20])
    {
        char *e=exp;
        char x;
        while(*e!='\0')
        {
             if(isalnum(*e))
                cout<<*e;
            else if(*e=='(')
                        push(*e);
            else if(*e==')')
            {
                while((x=pop())!='(')
                        cout<<x;
            }
            else{
                while(priority(a[top])>=priority(*e))
                    cout<<pop();
                push(*e);
            }
            e++;
        } //while loop closed
        while(top!=-1)
            cout<<pop();
    }
};
int main()
{
    char exp[20];
    char *e,x;
    cout<<"enter the expression";
    cin>>exp;
    stackk obj;
    obj.post_convert(exp);
    return 0;
}
