#include<iostream>
using namespace std;
void random_int_vector(int a[], int n, int m, int M){
    int i;
    for(i=0;i<n;i++){
        a[i]=m+rand()%(M-m+1);
    };
}

void print_int_vector(int a[], int n, int m, int M){
    int i;
    cout<<"a={";
    for(i=0;i<n;i++){
        cout<<a[i];
        (i<n-1)? cout<<",":cout<<"";
    };
    cout<<"}";
}

int main(){
    int n, m, M;
    cout<<"input the number of the array's number: ";
    cin>>n;
    int a[n];
    cout<<"input the minimum number of the array: ";
    cin>>m;
    cout<<"input the maximum number of the array: ";
    cin>>M;
    random_int_vector(a,n,m,M);
    print_int_vector(a,n,m,M);
    return 0;
}