// W7 assignment 
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    //Series task :
    float a=2,b=4,c=6,sum=0;
    int range;
    do
    {
    cout<<"\nrange must b greater then 3\n";
    cin>>range;
    }
    while(range<=3);
    cout<<a<<","<<b<<","<<c<<",";
    for(int i=4;i<=range;i++)
    {
        sum=(a+b+c)/3;
        cout<<sum<<",";
        a=b;
        b=c;
        c=sum;
    }


//     task 8


//     string line = "my first opp lab";
//     int len=line.length();
//     for(int i=0;i<=len;i++)
//     {
//        line[i]= tolower(line[i]);
//     }
//     cout<<"Lower case = "<<line;

// bool isPrime(int n)
// {
//     if(n==1 || n==0)
//     {
//         return false;
//     }

//     for(int i=2; i<n; i++)
//     {
//         if(n%i==0)
//         {
//             return false;
//         }
//     }

//     return true;
// }
// int main()
// {
//     //task 1 
//      int n;
//     cout<<"Enter the nth value\n";
//     cin>>n;
//     if(n<3)
//     {
//         cout<<"Invalid input\n";
//     }
//     else
//     {
//         if(n>3)
//         {
//             for(int i=2; i<=n; i++)
//             {
//                 if(isPrime(i))
//                 {
//                     cout << i << " ";
//                 }
//             }
//         }
//     }
   


// task 2


// cout<<"     *\n";
// int s=4,y=1,m=2,f=4; 
// for(int i=1;i<=5;i++)
// {
    
//     for(int j=1;j<=s;j++) // spaces 
//     {
//         cout<<" ";
//     }
//     for(int j=1;j<=1;j++)// stars
//     {
//         cout<<"*";
//     }
//     s--;

//     for(int i=1;i<=m;i++)
//     {
//         cout<<" ";
//     }
//     for(int j=1;j<=5;j++)
//     {
//         if(i==j)
//         {
//             cout<<"*";
//         }
//     }
//     cout<<endl;
//     m=m+2;
// }




// task 3




// {
//     int n,rem,res=0,org;
//     cout<<"Enter your number \n";
//     cin>>n;
//     org=n;
//     while(n!=0)
//     {
//         rem=n%10;
//         n=n/10;
//         res=res+(rem*rem*rem);
//     }
//     if(res==org)
//     cout<<"Amstrong";
//     else
//     cout<<"Not";
// }


//  task 4
// cout<<"Your string before conversion\n";
// string line = "MY FIRT LAB OF OOP";
// cout<<line<<endl;
// int len=line.length();
// for(int i=0;i<len;i++)
// {
//     if(line[i]>=65 && line[i]<=97)
// {

//     line[i]=line[i]+32;
// }
// }
// cout<<"Your string After conversion\n";
// cout<<line;


// task 5


// string pass;
// bool check=true;
// do
// {
// cout<<"Enter your password\n";
// getline(cin,pass);
// int len=pass.length();
// if(len<8 || len>16)
// {
//     cout<<"Length is incorrect try again from 8 to 16\n";
//     check=false;
// }
// if(pass[0]>=33 && pass[0]<=47 || pass[0]>=58 && pass[0]<=64)
// {
//     cout<<"Password cannot be start from special character try again\n";
//     check=false;
// }
// bool ch=false,sp=false,di=false;
// for(int i=0;i<len;i++)
// {
//     if(pass[i]>=65 && pass[i]<=90)
//     ch=true;
// }
// for(int i=0;i<len;i++)
// {
//     if(pass[i]>=33 && pass[i]<=47 || pass[i]>=58 && pass[i]<=64)
//     sp=true;
// }
// if(ch==false)
// {
//     cout<<"Invalid password.It must contain at least one upercase character\n";
//     check=false;
// }
// if(sp==false)
// {
//     cout<<"Invalid password.It must contain at least one Special character\n";
//     check=false;
// }
// for(int i=0;i<len;i++)
// {
//     if(pass[i]>=48 && pass[i]<=57)
//     di=true;
// }
// if(di==false)
// {
//     cout<<"Invalid password.It must contain at least one Digit\n";
//     check=false;
// }
// }
// while(check!=true);
// if(check==true)
// cout<<"\nvalid password";


// task 6 





// int n;
// cout<<"Enter the size of your array\n";
// cin>>n;
// int a1[n], a2[n];
// int a3[n];
// cout<<"Enter the elements of array 1 \n";
// for(int i=0;i<n;i++)
// {
//     cin>>a1[i];
// }
// cout<<"Enter the elements of array 2 \n";
// for(int i=0;i<n;i++)
// {
//     cin>>a2[i];
// }
// cout<<"Your Array 1 is : ";
// for(int i=0;i<n;i++)
// {
//     cout<<a1[i]<<"  ";
// }
// cout<<"\nYour Array 2 is : ";
// for(int i=0;i<n;i++)
// {
//     cout<<a2[i]<<"  ";
// }
// cout<<"\nMultiplication is : ";
// for(int i=0;i<n;i++)
// {
//    a3[i]=a1[i]*a2[i];
// }
// for(int i=0;i<n;i++)
// {
//     cout<<a3[i]<<"  ";
// }

// int b,e,r;
// cin>>b>>e;
// int res=1;
// for(int i=1;i<=e;i++)
// {
//     res=res*b;
// }
// cout<<"res = "<<res;




// pastern print 

// for(int i=1;i<=5;i++)
// {
//     for(int j=1;j<=5;j++)
//     {
//         if(j==1 || j==5 || i==3 && j==3 || i==4 && j==4 || i==4 && j==2)
//         {
//             cout<<"*";
//         }
//         else
//         cout<<" ";
//     }
//         cout<<endl;
// }
// }
}