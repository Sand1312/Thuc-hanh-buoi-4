#include <iostream>
#include "iomanip"
using namespace std;
class ptbn{
public:
    float b,c;
    float gpt(){
        return static_cast <float> (-c)/b;
    }
};
class ptbh: public ptbn{
private:
    float a;
public:
    ptbh(){
        a=0;
        b=0;
        c=0;
    }
    ~ptbh(){
    }
    void gpt(){
        cout<<"nhap cac he so a, b, c = ";cin>>a>>b>>c;
        cout<<"Phuong trinh co dang: "<<a<<"*X*X" ;if (b>0)cout<<"+";
        cout<<b<<"*X";if (c>0) cout<<"+"<<c<<"=0\n";
        if (a==0) cout<<"x= "<<fixed<<setprecision(3)<<ptbn::gpt();
        else {
            float delta=b*b-4*a*c;
            if (delta<0) cout<<"Phuong trinh vo nghiem\n";
            else if (delta==0) cout<<"x ="<<fixed<< setprecision(3)<<static_cast <float> (-b/(2*a));
            else cout <<"x1 ="<<fixed<<setprecision(3)<<static_cast<float>((-b+sqrt(delta))/(2*a))<<" "<<"x2 = "<<setprecision(3)<<static_cast<float>((-b-sqrt(delta))/(2*a));
        }
    }
};
signed main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ptbh oj1;
    oj1.gpt();
}
