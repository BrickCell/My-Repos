#include <iostream>

using namespace std;

int main(){

    int n,n1,range;

    cout<<"Enter an integer: ";
    cin>>n;
    cout<<"Enter range: ";
    cin>>n1;

    for(range = 0; range <=n1; range++ ){
        cout<<n<<" * "<<range<<" = "<<n*range<<endl;
    }
    cout<<"\n\n"<<endl;
    system("pause");
}
