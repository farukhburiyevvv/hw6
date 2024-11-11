#include <iostream>
using namespace std;

int main()
{
    int m,n,t;
    cin>>m>>n;
    int arr[m][n],sol[m][n];
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
            sol[i][j]=arr[i][j];
            
        }
        
    }
    
    cin>>t;
    int arr2[t][3];
    for(int i=1;i<=t;i++){
        for(int j=1;j<=3;j++){
            cin>>arr2[i][j];
        }
    }

    
    for(int a=1;a<=t;a++){
        for(int i=1;i<=1;i++){
            sol[arr2[a][i]][arr2[a][i+1]] = arr2[a][i+2];
            }
    }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
    
   
    return 0;
}
