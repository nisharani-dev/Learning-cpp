//Pattern priniting

//Star Rectangle
#include <iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    for(int i = 1; i <= m; i++){
        cout << "****" << endl;
    }

}


#include <iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    int n;
    cin >>n;
    for (int i=1;i<=m;i++){
        for(int i=1;i<=n;i++)
        cout<<"*";
        }
        cout<<endl;
}

//square pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        cout<<"*";
     }
    cout<<endl;
}
}

//number ssquare
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        cout<<j;
     }
    cout<<endl;
}
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        cout<<i;
     }
    cout<<endl;
}
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        cout<<"ABCD"<<endl;
    }
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        cout<<(char)(j+64)<<" ";
     }
    cout<<endl;
}
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        cout<<(char)(i+64)<<"";
     }
    cout<<endl;
}
}

//right angle triangle
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
    }
}


#include <iostream>
using namespace std;

int main() {
    int n = 5;  // You can change n for larger patterns
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {  
            // Odd rows → Numbers
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
        } else {
            // Even rows → Alphabets
            for (int j = 0; j < i; j++) {
                cout << char('A' + j);
            }
        }
        cout << endl;
    }

    return 0;
}


//star traingle horizontal flip

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-1+i;j++){
            cout<<"*";
        }
    }
}


//floyd triangle

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}

//zero one triangle

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
    }

}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int mid= n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=1;j++){
            if(i==mid || j==mid){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            }        }
    }

//star triangle reverse
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}