#include<iostream>
using namespace std;
void read_int_vector (int a[], int n){
    int i;
    for(i=0;i<n;i++){
        cout<<"the"<<i+1<<"number: ";
        cin>>a[i];
    };
}

void print_int_vector(int a[],int n){
    int i;
    cout<<"a={";
    for(i=0;i<n;i++){
        if(i<n-1){
            cout<<a[i]<<",";
        }
        else{
            cout<<a[i];
        };
    };
    cout<<"}";
}

int main(){
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    int a[n];
    read_int_vector(a, n);
    print_int_vector(a, n);
    return 0;
}



