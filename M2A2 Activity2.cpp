#include <iostream>

using namespace std;

int main()
{
    int num,i;
    float number[20], sum = 0.0;

    do{
    cout<<"Enter the numbers of data: ";
    cin>>num;
    if(num <= 0 || num > 20)
        cout<<"Error! number should in range of (1 to 20)."<<endl;
    }while(num <= 0 || num > 20);

    for(i = 0; i < num; i++)
    {
        cout<< i + 1 <<". Enter number: ";
        cin>>number[i];
        sum += number[i];
    }
    cout<<"Average: "<< sum/num<<endl;
    cout<<"\n\n"<<endl;
    system("pause");
}
