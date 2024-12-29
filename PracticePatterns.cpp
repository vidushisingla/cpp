#include <iostream>
#include <vector>
using namespace std;


void pattern1() {
    int n;
    cout << "Enter number:";
    cin>>n;
    for(int i= 0; i< n; i++){
        for(int j=0; j<n ; j++){
            cout<< "*"<<" " ;
        }
        cout<<"\n";
    }
}
 void pattern10() {
    int n;
    cout << "Enter number: ";
    cin>>n;
    int m= n/2 +1;
    for(int i= 0; i< n; i++){
        for(int j= 0; j<=i; j++){
            if ( i<=n/2){
                cout<<"*";
            }
        }
        cout<<"\n";
    }
 }

 void pattern101(int n){
    int k = n/2;
    bool even = (n%2 == 0);
    int count = 1;
    bool forward = true;

    while(count>0){
        for(int i = 0; i<count; i++){
            cout << "*";
        }
        cout << endl;

        if(forward){
             count++;
        }
        else {
            count--;
        }   

        if(count == k+1){
            forward = false;
            if(even){
                count--;
            }
        }
    }

 }

 void pattern11(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if((i+j) % 2==0){
                cout<<"1";
            } else cout<<"0";
            } 
            cout<<"\n";   
        }     
    }
 
void pattern12(int n){
    int m= 2*n;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(j<=i || j>=m-1-i){
                cout<<"*";
            }else cout<<" ";
        }
         cout<<"\n"; 
    }
}

void pattern13(int n){
    int count=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<count;
            count++;
        }
        cout<<"\n";    
    }
}

void pattern14(int n){
    char alpha= 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<alpha<<" ";
            alpha++;
        }
        cout<<"\n";
        alpha= 'A';
    }
}

void pattern15(int n){
    char alpha= 'A';
    for(int i=0; i<n; i++){
        for(int j= 0; j< n-i; j++){
            cout<< alpha<<" ";
            alpha++;
        }
        cout<<"\n";
        alpha= 'A';
    }
}

void pattern16(int n){
    char alpha= 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<alpha<<" ";
        }
        cout<<"\n";
        alpha++;
    }
}

void pattern18(int n){
    char alpha= 'E';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<alpha<<" ";
            alpha++;
        }
        alpha= 'E';
        alpha= alpha-(i+1);
        cout<<"\n";
    }
}
void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if( i%3==0){
                cout<<"*";
            }else if (j==0||j==n-1){ 
                cout<< "*";
            }else{
                cout<< " ";
            }
            }
            cout<<"\n";
        }
    }
void pattern24(int n){
    vector<int> nums;
    for (int s = 0; s<n-1; s++) cout << " ";
    cout << "1\n";
    for(int i = 1; i<n; i++){
        for (int s = 0; s<n-1-i; s++) cout << " ";
        vector<int> newnums;
        newnums.push_back(1);
        for(int j = 1; j<nums.size(); j++){
            newnums.push_back(nums[j] + nums[j-1]);
        }
        newnums.push_back(1);
        nums = newnums;
        for(auto num : nums){
            cout << num << " ";
        }
        cout << endl;
    }
}
void pattern3(int n){
    int count=1;
    for(int i=0;i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<count;
            count++;
        }
        count=1;
        cout<<"\n";
    }
}
void pattern4(int n){
    int count=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i;j++){
            cout<<count;
        }
        count++;
        cout<<"\n";
    }
}
void pattern5(int n){
    for(int i=0; i<n; i++){
        for(int j= n-1; j>=i; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern7(int n){
    int m= 2*n-1;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j <= n-1+i ; j++) {
            if(j < n-1-i) {
                cout<<" ";
            }else {
                if((i+j)%2 == 0) {
                    cout<<" ";
                }else {
                    cout<<"*";
                }
            }
        }
        cout<<"\n";
    }
}



int main(){
    //pattern10();
    pattern7(5);
}
