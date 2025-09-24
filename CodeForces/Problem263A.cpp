#include <iostream>
using namespace std;
// void question(int arr[5][5]){
    
// }
int main(){
    int arr[5][5];
    int temp;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>temp;
            arr[i][j]=temp;
            if (temp==1){
                cout<<abs(i-2)+abs(j-2);
            }
        }
    }
    // question(arr);
    return 0;
}
