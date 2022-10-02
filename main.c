1. Write a C++ program to print Hello MySirG on the screen.
#include<iostream>
using namespace std;
int main()
{
   cout<<"Hello MySirg";

   return 0;

}
2. Write a C++ program to print Hello on the first line and MySirG on the second line
using endl.

#include<iostream>
using namespace std;
int main()
{
   cout<<"Hello" <<endl<<"MySirg";
   return 0;

}
3. Write a C++ program to calculate the sum of two numbers.

#include<iostream>
using namespace std;
int main()
{
   int x,y;
   cout<<"Enter two numbers: ";
   cin>>x>>y;
   cout<<"addition of "<<x<<" "<<y<<" is "<<x+y;
   return 0;

}

4. Write a C++ program to calculate the area of a circle

#include<iostream>
using namespace std;
int main()
{
   int r;
   cout<<"Enter radius: ";
   cin>>r;
   cout<<"Area of circle with radius "<<r<<" is "<<3.14*r*r;
   return 0;

}

5. Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
using namespace std;
int main()
{
   int l,b,h;
   cout<<"Enter length ,breadth and height: ";
   cin>>l>>b>>h;
   cout<<"volume of cuboid is "<<l*b*h;
   return 0;

}

6. Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
   int l,b,h;
   cout<<"Enter three numbers: ";
   cin>>l>>b>>h;
   cout<<"volume of cuboid is "<<(l+b+h)/3;
   return 0;

}

7. Write a C++ program to calculate the square of a number
#include<iostream>
using namespace std;
int main()
{
   int l;
   cout<<"Enter a numbers: ";
   cin>>l;
   cout<<"sqaure of "<<l<<" is "<<l*l;
   return 0;

}

8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
   int l,h;
   cout<<"Enter two numbers: "<<endl;
   cin>>l>>h;
   cout<<"Before swapping: "<<endl;
   cout<<l<<" "<<h<<endl;
   l=l+h;
   h=l-h;
   l=l-h;
   cout<<"After swapping"<<endl;
   cout<<l<<" "<<h;
   return 0;

}

9. Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
   int l,h;
   cout<<"Enter two numbers: "<<endl;
   cin>>l>>h;
   if(l>h) cout<<l<<endl;
   else cout<<h<<endl;
   return 0;

}

10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter a number: "<<endl;
   cin>>n;
   int arr[n];
   cout<<"Enter "<<n<<" values: "<<endl;
   for (int i = 0; i < n; ++i) {
       cin>>arr[i];
   }
   int sum=0;
   for (int i = 0; i < n; ++i) {
       sum+=arr[i];
   }
   cout<<"Average of "<<n<<" numbers is "<<sum/n;
   return 0;

}

#include<iostream>
#include<string>
int *number()
{
    int a=9;
    return &a;
}

int main()
{
    int *ptr;
    ptr = number();
    std::string name="nitin";
    std::string othername=name.copy()

    
    return 0;
}
