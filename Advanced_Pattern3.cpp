// Name:Devraj                          *
// Date:05/05/2021                      **
// Purpose: Half Pyramid using stars    ***

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;

}