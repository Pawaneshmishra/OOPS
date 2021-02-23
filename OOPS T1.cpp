#include<iostream>
using namespace std;

int arr[100][100];

int read_matrix(int m,int n){
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){

        cin>>arr[i][j];
    }
  }
}

int write_matrix(int m,int n){
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}


int main()
{
int m,n;

cout<<"Enter the number of rows and columns:"<<endl;
cin>>m>>n;

cout<<"Enter the elements of the matrix"<<endl;
read_matrix(m,n);

cout<<"The matrix is:"<<endl;
write_matrix(m,n);


return 0;
}
