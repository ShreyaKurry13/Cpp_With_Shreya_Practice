#include <iostream>

using namespace std;

int main(){
    //FACTORIAL
/*  int i,n;
    cout<<"Enter a number: ";
    cin>>n;
    int pro = 1;
    for ( i = 1; i <= n; i++)
    {
       pro= pro*i;
    }
    cout<<"Factorial is: "<<pro;
    */

    
    //2 LOOPS

 /*   int i,j;
    cout<<"Enter a number: ";
    cin>>n;

    for (i = 1,j=9; i < 10,j>0; i++,j--)
    {
        cout<<i<<"+"<<j<<"="<<(i+j)<<"\n";
    }
   */

    //o/p
    // 1+9=10
    // 2+8=10
    // 3+7=10
    // 4+6=10
    // 5+5=10
    // 6+4=10
    // 7+3=10
    // 8+2=10
    // 9+1=10

    // tables ka code
 /*   int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result;

    for(int i=1;i<=10;i++){
        result = n*i;
        cout<<n<<" * "<<i<<" = "<<result<<"\n";
    }
   */
  
   
   //two for loops
   int i,j;

   for(i=1;i<=3;i++){
    for ( j = 1; j<=3; j++)
    {
        cout<<"\n i = "<<i<<" j = "<<j;
    }
   }

    return 0;
}