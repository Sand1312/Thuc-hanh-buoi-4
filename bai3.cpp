#include "iostream"
#include "math.h"
using namespace std;
class diem{
public:
    int x,y;
   void set(){
       cin>>x>>y;
    }
    void show(){
       cout<<"("<<x<<","<<y<<")";
   }
};
class doanthang:diem{
private:
    int a,b;
public:
    doanthang(){
        a=b=x=y=0;
    }
    void get(){
        set();
        cin>>a>>b;
    }
    float length(){
        return sqrt(float(a-x)*(a-x)+float(b-y)*(b-y));
    }
    bool check(doanthang d1, doanthang d2){
        return ((d1.a-d1.x)*(d2.b-d2.y)-(d1.b-d1.y)*(d2.a-d2.x)==0) ?1:0;
    }
    void show(){
        diem::show();
        cout <<"("<<a<<","<<b<<")\n";
    }
};

signed main (){
//        freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    doanthang oj1,oj2;
    cout<<"Nhap toa do dt thu 1: ";
    oj1.get();
    cout<<"Nhap toa do dt thu 2: ";
    oj2.get();
    cout<<"toa do duong thang thu 1: ";
    oj1.show();
    cout<<"toa do duong thang thu 2: ";
    oj2.show();
    if (oj1.check(oj1,oj2)) cout <<"Hai duong thang song song hoac trung nhau";
    else cout<<"Hai duong thang cat nhau";
}
