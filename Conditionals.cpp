//if-else

//Take a positive integer input from the user and check if it is even or odd.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n%2==0) cout<<"even number";
    if(n%2!=0) cout<<"odd number";
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n%2==0) 
        cout<<"even number";
    else 
        cout<<"odd number";
}

// Absolute value
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0) cout<<-n;
    else cout<<n;
}

// Ternary operator
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // condition ? if true : if false
    (n%2==0) ? cout<<"even number" : cout<<"odd number";
}

// Switch statement
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
}