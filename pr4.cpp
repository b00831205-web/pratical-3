#include<iostream>
using namespace std;
void random_real_vector(double a[], int n, double m, double M){
    int i;
    for(i=0;i<n;i++){
        a[i]=m+((double)rand()/RAND_MAX)*(M-m+1);
    };
}
void print_double_vector(double v[], int n){
    int i;
    cout<<"v={";
    for(i=0;i<n;i++){
        cout<<v[i]<<((i<n-1)? ", ":"");
    };
    cout<<"}";
}
int main(){
    int n, m ,M;
    cout<<"input the length of the array";
    cin>>n;
    double a[n];
    cout<<"input the minimum number: ";
    cin>>m;
    cout<<"input the maximum number: ";
    cin>>M;
    random_real_vector(a, n, m, M);
}