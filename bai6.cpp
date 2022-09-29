#include "iostream"
#include "sstream"
#include "string"
using namespace std;
class Thisinh{
private:
    string mssv,hoten;
    float toan,ly,hoa,trungbinh;
public:
    Thisinh(){
        mssv="N/A"; hoten="N/A";
        toan=ly=hoa=trungbinh=-1;
    }
    ~Thisinh(){
    }
    void getInfo(){
        string s; getline(cin, s);
        string  c;
        int in;
        for (int i = 0; i < s.size(); i++)
        {
            if ((int)s[i] == 32) {
                in = i;
                break;
            }
        }
        if (s.length()>10) mssv = s.substr(0,in);
        int ind = in;
        for (int i = ind; i < s.size(); i++)
        {
            if ((int)s[i]<58 && (int)s[i] > 46) {
                in = i;
                break;
            }
        }
        if (s.length()>25) hoten = s.substr(ind, in -ind);
        for (int i = in; i < s.size(); i++) {
            c += s[i];
        }
        stringstream ss(c);
        string word;
        (ss>>word); toan=::atof(word.c_str());
        (ss>>word); ly=::atof(word.c_str());
        (ss>>word); hoa=::atof(word.c_str());
        this->trungbinh = static_cast<float>(toan*3+ly*2+hoa)/6;
    }
    void show(){
        cout<<mssv<<" "<<hoten<<" "<<toan<<" "<<ly<<" "<<hoa<<"\n";
    }
    bool check(){
        return (toan>0&&ly>0&&hoa>0&&trungbinh>=5) ? 1:0;
    }
};
signed main (){
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    Thisinh oj1;
    oj1.getInfo();
    while (cin){
        if (oj1.check()) oj1.show();
        oj1.getInfo();
    }
}
