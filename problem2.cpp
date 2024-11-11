#include <iostream>
using namespace std;

int main()
{
    int m,n,sum;
    float avrg_column,avrg_row;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        if(avrg_column!=0 && avrg_column!=sum/n){
            cout<<"No";
            return 0;
        }
        avrg_column = sum/n ;
        cout<<avrg_column<<" avrg_column";
        sum=0;
        
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
        if(avrg_row!=0 && avrg_row!=sum/m){
            cout<<"No";
            return 0;
        }
        avrg_row = sum/m ;
        cout<<avrg_row<<" avrg_row";
        sum=0;
        
    }
    if(avrg_row==avrg_column){
        cout<<"Yes";
        return 0;
    }
    cout<<"No";
    
    
    return 0;
}
