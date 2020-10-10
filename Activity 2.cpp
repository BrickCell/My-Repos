#include<iostream>
using namespace std;

int main(){

    int choice1,price1 = 15,qty1,sum = 0,choice2,price2 = 10,total,cash;

    cout<<"\t\tBricks Snack Hauz"<<endl;
    cout<<"FOODS\n\t[1]-Fries   P15\n\t[2]-Siomai  P15\n\nDRINKS\n\t[1]-Coke    P10\n\t[2]-Ice Tea P10\n"<<endl;
    do{
        cout<<"\nEnter Food/s Number:";
        cin>>choice1;
        cout<<"Quantity of Food/s:";
        cin>>qty1;
        if(choice1 < 1 || choice1 > 2)
            cout<<"\n THE CHOSEN FOOD NUMBER IS NOT IN THE LIST!\n"<<endl;
    }while(choice1 < 1 || choice1 > 2);

    do{
        cout<<"\nEnter Drink/s Number: ";
        cin>>choice2;
        cout<<"Quantity of Drink/s: ";
        cin>>qty1;
        if(choice2 < 1 || choice2 > 2)
            cout<<"\n THE CHOSEN DRINK NUMBER IS NOT IN THE LIST!\n"<<endl;
    }while(choice2 < 1 || choice2 > 2);

    cout<<"\t\t\t\tTotal Amount"<<endl;
    switch(choice1){
        case 1:
            cout<<"\nFries\n Price:P"<<price1<<"Qty:"<<qty1<<" \t=\t P"<<price1*qty1<<endl;
            break;
        case 2:
            cout<<"\nSiomai\n Price:P"<<price1<<"Qty:"<<qty1<<" \t=\t P"<<price1*qty1<<endl;
            break;
    }
     switch(choice2){
        case 1:
            cout<<"\nCoke\n Price:P"<<price2<<" Qty:"<<qty1<<" \t=\t P"<<price2*qty1<<endl;
            break;
        case 2:
            cout<<"\nIced Tea\n Price:P"<<price2<<" Qty:"<<qty1<<" \t=\t P"<<price2*qty1<<endl;
            break;

    }
    total=price1*qty1 + (price2*qty1);

    cout<<"\n-------------------------------------"<<endl;
    cout<<"\n\nVAT    \t\t\t=\t P"<<total * 0.20<<endl;
    cout<<"\n\nTotal Amount Due   \t=\t P"<<total + (total * 0.20)<<endl;
    cout<<"\n\nCash \t\t\t=\t P";
    cin>>cash;
    if(cash<total)
        system("cls");
    if(cash>=total){
    cout<<"\n-------------------------------------"<<endl;
    cout<<"\nChange      \t\t=\t P"<<cash - (total + (total * 0.20))<<endl;

    cout<<"\n\nCashier:Brixel Vince Daco"<<endl;
    }
    return 0;
}

