#include<iostream>
using namespace std;

void init_code(){
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif 
}

int main(){

   int n;
   cin>>n;

   do{
       cout<<n<<endl;
       cin>>n;
   }
   while(n>0);

return 0;
}
