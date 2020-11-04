#include<iostream>

using namespace std;

int add(int n1,int n2){
    int sum;
    sum=n1+n2;
    return sum;
}

int sub(int n1,int n2)
 {
    int sub;
    sub=n1-n2;
    return sub;
}

int multi(int n1,int n2)
{
    int multi;
    multi=no1*no2;
    return multi;
}

 double divide(double n1,double n2)
{
    double div;
    div=n1/n2;
    return div;
}

int main()
{
    int num1,num2;
    char Operator;

    do
    {
    system("cls");
    cout<<"Enter First number: ";
    cin>>num1;
    cout<<"Enter Second number: ";
    cin>>num2;

    cout<<"\n[+]Addition \n";
    cout<<"[-]Subtraction\n";
    cout<<"[*]Multiplication\n";
    cout<<"[/]Division\nChoose an Operator: ";

    cout<<" ";
    cin>>Op;

    if(Op=='+')
    {
        int sum=add(num1,num2);
        cout<<num1<<" + "<<num2<<" = "<<sum;
     }
    else if(Op=='-')
    {
        int subtract=sub(num1,num2);
        cout<<num1<<" - "<<num2<<" = "<<subtract;
    }
    else if(Op=='*')
    {
        int multiply=multi(num1,num2);
         cout<<num1<<" * "<<num2<<" = "<<multiply;
    }
    else if(Op=='/')
    {
        double div=divide(num1,num2);
        cout<<num1<<" / "<<num2<<" = "<<div;
    }
    else{
        cout<<"Invalid Operand";
    }
    cout<<"\n";
    system("pause");
    system("cls");
    cout<<"\nDo you want to try Again?\n[y]-Yes\n[n]-No\n";
    cin>>Op;

     }while(Op=='y');
}

