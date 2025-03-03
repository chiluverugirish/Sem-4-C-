#include<iostream>
using namespace std;
int main()
{
    // float r,a;
    // cout <<"enter radius: (for a circle)"<<endl;
    // cin >> r;
    // a=3.145*r*r;
    // cout << a;

    // float n1,n2,n3;
    // cout << "enter triangle sides 3:"<<endl;
    // cin >> n1;
    // cin >>n2;
    // cin >>n3;
    // float p=n1+n2+n3;
    // cout<< p;

    // double c;
    // cout <<"enter celsius:\n";
    // cin >>c;
    // double f= (9/5)*c+32;
    // cout << f;
    

    //ascii value
    // char name='r';
    // // cout << (int)name;
    // cout << int('5');


    int t,d;
    cout<<"Enter time in sec:"<<endl;
    cin>>t;
    cout <<"Enter distance:"<<endl;
    cin>>d;
    int s=d/t;
    cout<<"answer is %d",s;
    double num = 3.14159;
    printf("Double: %lf\n", num); 
    float b=3.141586;
    //cout <<fixed <<setprecision(2)<< 3.141516;


//    std::cout << "Float: " << std::fixed << std::setprecision(2) << b << std::endl;


//BMI
    double h,w,bmi;
    cin>>h;
    cin>>w;
    bmi = w/(h*h);
    cout<<bmi;
    return 0;
}
