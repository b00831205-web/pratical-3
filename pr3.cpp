#include<iostream>
using namespace std;
void print_double_vector(double v[], int n){
    int i;
    cout<<"v={";
    for(i=0;i<n;i++){
        cout<<v[i]<<((i<n-1)? ", ":"");
    };
    cout<<"}";
}
int main(){
    int n, j;
    cout<<"print the length of the vector: ";
    cin>>n;
    double a[n];
    for(j=0;j<n;j++){
        cout<<"input the "<<j+1<<" number: ";
        cin>>a[j];
    };
    print_double_vector(a, n);
}