#include<iostream>
using namespace std;
void print(int n){
    if(n>=6){
        return;
    }
     cout<<"hello "<<n<<endl;
     print(n+1);

}
int main(){

    int n=1;
    print(n);
    
    return 0;
}