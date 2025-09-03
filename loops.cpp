//LOOPS
//For loop

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Hello world"<<endl;
    }
}

//print 1 to 100 numbers
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        cout<<i<<endl;
    }
}

//print all even numbers from 1 to 100
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }


}

#include <iostream>
using namespace std;
int main(){
    for(int i=2;i<=100;i=i+2){
        cout<<i<<endl;
    }
}

//print table of a number n
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number: ";
    cin>>n;
    for( int i=n;i<=(n*10);i=i+n){
        cout<<i<<endl;
    }
}


//Display this AP-1,3,5,7,9...n terms

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i=i+=2){
        cout<<i<<endl;
    }
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+3;
    }
}


// Display this GP-1,2,4,8,16..n terms
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    for (int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a*2;
    }
}

//Break statement
//wap to find the highest factor of a number 'n' other than n itself

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f=1;
    for(int i=1;i<n;i++){
        if(n%i==0) f=1;
    }
    cout<<f;
}

//wap tp check if a number is composite or not

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"composite number";
            break;
        }
    }
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    bool flag = true; // true means prime

    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = false; // false means composite
            break;        // exit loop
        }
    }
    if(n==1)
        cout<<"Neither prime nor composite";
    else if(flag==true)
        cout << "Prime";
    else
        cout << "Composite";

    return 0;
}

//Continue statement

#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=20;i++){
        if(i==13) continue;
        cout<<i<<endl;
    }

}

//While loop---an alternate to for loop
//when we dont know the number of iterations
//multiple conditions

#include <iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }
}

//Do while loop
//exectutes at least once

#include <iostream>
using namespace std;
int main(){
    int i=11;
    do{
        cout<<i<<endl;
        i++;
    } while(i<=10);
}

//Q

#include <iostream> //infinite loop
using namespace std;
int main(){
    int i;
    while(i=10){ //assign
        cout<<i<<endl;
        i++;
    }
}

#include <iostream>
using namespace std;
int main(){
    int i=10;
    while(i==10){
        cout<<"computer buff"<<endl;
        i++;
    }
     

}


#include <iostream>
using namespace std;
int main(){
    int x=4,y=0;
    while(x>=0){
        x--;
        y++;
        if(x==y)
        continue;
        else
        cout<<x<<" "<<y<<endl;

    }
}

//Questions using operators

//wap to count digits of a given number 
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    } 
    cout<<count;
} 