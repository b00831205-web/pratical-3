#include<iostream>
using namespace std;

double search_min(double v[], int n, int l, int h){
    int min{0},max{0},i,j{l};
    if(0<=l<=h<=n-1){
        for(i=l;i<h;i++){
            if(v[i]<min){
                min=v[i];
                j++;
            };
        };
        cout<<"the minimum element comprised between "<<l<<" and "<<h<<" is "<<"v["<<j<<"]";
    }
    else{
        cout<<"input invalid!";
    };
}

double read_double_array(double v[], int n){
    int i;
    for(i=0;i<n;i++){
        cout<<"input the "<< i+1 <<" integer: ";
        cin>>v[i];
    };
    return 0;
}

void print_double_vector(double v[], int n){
    int i;
    cout<<"v={";
    for(i=0;i<n;i++){
        cout<<v[i]<<((i<n-1)? ", ":"");
    };
    cout<<"}"<<endl;
}

int main(){
    int n,l,h;
    cout<<"input the length of the array: ";
    cin>>n;
    double v[n];
    read_double_array(v,n);
    print_double_vector(v,n);
    cout<<"input the low indices of the array: ";
    cin>>l;
    cout<<"input the high indices of the array: ";
    cin>>h;
    search_min(v,n,l,h);
}