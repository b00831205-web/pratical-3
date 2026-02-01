#include<iostream>
using namespace std;

int ncalls{0};

void random_real_vector(double a[], int n, double m, double M){
    int i;
    ncalls++;
    cout<<"the "<<ncalls<<" vector r={";
    for(i=0;i<n;i++){
        a[i]=m+((double)rand()/RAND_MAX)*(M-m+1);
        cout<<a[i]<<((i<n-1)? ",":"");
    };
    cout<<"}"<<endl;
}

void sum_of_two_vector(const double a1[], const double a2[], double r[], int n){
    int i;
    cout<<"the sum of the two vector r={";
    for(i=0;i<n;i++){
        r[i]=a1[i]+a2[i];
        cout<<r[i]<<((i<n-1)? ",":"");
    };
    cout<<"}"<<endl;
}

void difference_of_two_vector(const double a1[], const double a2[], double r[], int n){
    int j;
    cout<<"the difference of the two vector r={";
    for(j=0;j<n;j++){
        r[j]=a1[j]-a2[j];
        cout<<r[j]<<((j<n-1)? ",":"");
    };
    cout<<"}"<<endl;
}

void producer_of_two_vector(const double a1[], const double a2[], double r[], int n){
    int a;
    cout<<"the product of the two vector r={";
    for(a=0;a<n;a++){
        r[a]=a1[a]*a2[a];
        cout<<r[a]<<((a<n-1)? ",":"");
    };
    cout<<"}"<<endl;
}

void scalar_product(const double a[], double r[], int n, int num){
    int i;
    cout<<"the scalar product of "<< num<< " r={";    
    for(i=0;i<n;i++){
        r[i]=a[i]*num;
        cout<<r[i]<<((i<n-1)? ",":"");
    };
    cout<<"}"<<endl;
}

int main(){
    int n, m, M, num;
    cout<<"input the length of the array: ";
    cin>>n;
    double a1[n], a2[n];
    cout<<"input the minimum number: ";
    cin>>m;
    cout<<"input the maximum number: ";
    cin>>M;
    random_real_vector(a1,n,m,M);
    random_real_vector(a2,n,m,M);
    double r[n]={0};
    sum_of_two_vector(a1,a2,r,n);
    difference_of_two_vector(a1,a2,r,n);
    producer_of_two_vector(a1,a2,r,n);
    cout<<"input the scalar number: ";
    cin>>num; 
    scalar_product(a1,r,n,num);
}