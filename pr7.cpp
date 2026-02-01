#include<iostream>
using namespace std;


double search_min(double v[], int n, int l, int h){
    int min,max{0},i,j{l};
    if(0<=l<=h){
        for(i=l;i<h;i++){
            min=v[l];
            if(v[i]<min){
                min=v[i];
                j++;
            };
        };
    }
    else{
        cout<<"input invalid!";
    };
    return j;
}

void swap_number(double &a, double &b){
    double n;
    n=a;
    a=b;
    b=n;
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
    cout<<"}";
}

void selection_sort(double v[], int n){
    int i{0},j;
    for(i=0;i<n;i++){
        j=search_min(v, n, i, n);
        swap_number(v[i],v[j]);
    };
}

int main(){
    int n;
    cout<<"input the length of the array: ";
    cin>>n;
    double v[n];
    read_double_array(v, n);
    selection_sort(v,n);
    print_double_vector(v,n);
    return 0;
}