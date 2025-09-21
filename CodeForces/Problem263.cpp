#include <iostream>
using namespace std;
int main()
{
    int io,jo;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            int a;
            cin>>a;
            if (a==1){
                io=i;
                jo=j;
            }   
        }
    }
    cout<<(abs(2-io)+abs(2-jo));

    return 0;
}