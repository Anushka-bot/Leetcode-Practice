#include<iostream>

using namespace std;
void reverse(int n)
{
int a = n % 10;
int b = (n % 100)/10;
int c = n / 100;
int reverse = a*100 + b*10 + c;
return reverse;
}


int main(){
    int n = 123;
    cout<<n;
    int reverse(int n);
    cout<<"reverse on n is"<reverse;
    return 0;
}