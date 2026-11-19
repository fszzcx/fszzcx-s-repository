//#include <iostream>
//using namespace std;
//
//class Box
//{
//private:
//    int length;
//    int width;
//    int height;
//
//public:
//    Box()
//    {
//        length = 1;
//        width = 1;
//        height = 1;
//    }
//
//    Box(int l, int w, int h)
//    {
//        length = l;
//        width = w;
//        height = h;
//    }
//
//    Box(int l)
//    {
//        length = l;
//        width = l;
//        height = l;
//    }
//
//    void show()
//    {
//        cout << "长 " << length << " 宽 " << width << " 高 " << height << endl;
//    }
//};
//
//int main()
//{
//    Box b1(5);
//    b1.show();
//
//    Box b2;
//    b2.show();
//
//    Box b3(2, 3, 4);
//    b3.show();
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student
//{
//private:
//    const long long studentID;
//    string name;
//
//public:
//    Student(long long id, string n) : studentID(id), name(n)
//    {
//    }
//
//    void show() const
//    {
//        cout << "学号 " << studentID << "  姓名 " << name << endl;
//    }
//};
//
//int main()
//{
//    Student s1(32606500072LL, "伍定锐");
//    s1.show();
//
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class String
//{
//private:
//    char* str;
//
//public:
//    String(const char* s)
//    {
//        str = new char[strlen(s) + 1];
//        strcpy(str, s);
//    }
//
//    String(const String& other)
//    {
//        str = new char[strlen(other.str) + 1];
//        strcpy(str, other.str);
//    }
//
//    ~String()
//    {
//        delete[] str;
//    }
//
//    void show()
//    {
//        cout << str << endl;
//    }
//};
//
//int main()
//{
//    String s1("Hello");
//    String s2 = s1;
//
//    s1.show();
//    s2.show();
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//    int x;
//    int y;
//
//public:
//    Point(int a = 0, int b = 0)
//    {
//        x = a;
//        y = b;
//    }
//
//    void print() const
//    {
//        cout << "(" << x << ", " << y << ")" << endl;
//    }
//
//    void move(int dx, int dy)
//    {
//        x += dx;
//        y += dy;
//    }
//};
//
//int main()
//{
//    const Point p1(3, 4);
//    p1.print();
//
//    Point p2(3, 4);
//    p2.move(1, 2);
//    p2.print();
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class BankAccount
//{
//private:
//    double balance;
//    static double totalAssets;
//
//public:
//    BankAccount(double b = 0)
//    {
//        balance = b;
//        totalAssets += b;
//    }
//
//    void deposit(double amount)
//    {
//        balance += amount;
//        totalAssets += amount;
//    }
//
//    void show() const
//    {
//        cout << "余额 " << balance << endl;
//    }
//
//    static void printTotal()
//    {
//        cout << "总资产 " << totalAssets << endl;
//    }
//};
//
//double BankAccount::totalAssets = 0;
//
//int main()
//{
//    BankAccount a(1000);
//    BankAccount b(2000);
//
//    a.deposit(500);
//
//    a.show();
//    b.show();
//    BankAccount::printTotal();
//
//    return 0;
//}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Employee
//{
//private:
//    int id;
//    string name;
//
//public:
//    Employee(int i, string n)
//    {
//        id = i;
//        name = n;
//    }
//
//    Employee()
//    {
//        id = 0;
//        name = "未命名";
//    }
//
//    void show() const
//    {
//        cout << id << "  " << name << endl;
//    }
//};
//
//int main()
//{
//    Employee* empArray = new Employee[5];
//
//    for (int i = 0; i < 5; i++)
//        empArray[i].show();
//
//    delete[] empArray;
//    empArray = nullptr;
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//    int x;
//    int y;
//
//public:
//    Point(int a, int b)
//    {
//        x = a;
//        y = b;
//        cout << "Point 构造 (" << x << "," << y << ")" << endl;
//    }
//
//    ~Point()
//    {
//        cout << "Point 析构 (" << x << "," << y << ")" << endl;
//    }
//};
//
//class Line
//{
//private:
//    Point p1;
//    Point p2;
//
//public:
//    Line(int x1, int y1, int x2, int y2) : p1(x1, y1), p2(x2, y2)
//    {
//        cout << "Line 构造" << endl;
//    }
//
//    ~Line()
//    {
//        cout << "Line 析构" << endl;
//    }
//};
//
//int main()
//{
//    Line l(1, 2, 3, 4);
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Counter
//{
//private:
//    int count;
//
//public:
//    Counter(int count = 0)
//    {
//        this->count = count;
//    }
//
//    void setCount(int count)
//    {
//        this->count = count;
//    }
//
//    Counter& increment()
//    {
//        this->count++;
//        return *this;
//    }
//
//    void show() const
//    {
//        cout << "count = " << count << endl;
//    }
//};
//
//int main()
//{
//    Counter c(0);
//
//    c.increment().increment().increment();
//
//    c.show();
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Television;
//
//class RemoteControl
//{
//public:
//    void setChannel(Television& tv, int ch);
//};
//
//class Television
//{
//private:
//    int volume;
//    int channel;
//
//public:
//    Television(int v = 10, int c = 1)
//    {
//        volume = v;
//        channel = c;
//    }
//
//    void show() const
//    {
//        cout << "音量 " << volume << "  频道 " << channel << endl;
//    }
//
//    friend void RemoteControl::setChannel(Television& tv, int ch);
//};
//
//void RemoteControl::setChannel(Television& tv, int ch)
//{
//    tv.channel = ch;
//    cout << "频道已切换到 " << tv.channel << endl;
//}
//
//int main()
//{
//    Television tv;
//    RemoteControl rc;
//
//    tv.show();
//    rc.setChannel(tv, 8);
//    tv.show();
//
//    return 0;
//}
#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[2][2];

public:
    Matrix()
    {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                a[i][j] = 0;
        cout << "构造函数    地址 " << this << endl;
    }

    Matrix(const Matrix& m)
    {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                a[i][j] = m.a[i][j];
        cout << "复制构造函数 地址 " << this << endl;
    }

    ~Matrix()
    {
        cout << "析构函数    地址 " << this << endl;
    }

    void set(int i, int j, int v)
    {
        a[i][j] = v;
    }

    int get(int i, int j) const
    {
        return a[i][j];
    }

    void show() const
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

Matrix addMatrix(Matrix m1, Matrix m2)
{
    Matrix temp;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            temp.set(i, j, m1.get(i, j) + m2.get(i, j));

    return temp;
}

int main()
{
    Matrix a;
    Matrix b;

    a.set(0, 0, 1);
    a.set(0, 1, 2);
    a.set(1, 0, 3);
    a.set(1, 1, 4);

    b.set(0, 0, 5);
    b.set(0, 1, 6);
    b.set(1, 0, 7);
    b.set(1, 1, 8);

    cout << "--- 进入 addMatrix ---" << endl;
    Matrix res = addMatrix(a, b);
    cout << "--- 回到 main ---" << endl;

    res.show();

    return 0;
}

