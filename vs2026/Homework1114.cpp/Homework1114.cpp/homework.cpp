//#include <iostream>
//using namespace std;
//
//void swap_val(int x, int y)
//{
//    int t = x;
//    x = y;
//    y = t;
//}
//
//void swap_ptr(int* x, int* y)
//{
//    int t = *x;
//    *x = *y;
//    *y = t;
//}
//
//void swap_ref(int& x, int& y)
//{
//    int t = x;
//    x = y;
//    y = t;
//}
//
//int main()
//{
//    int a = 10, b = 20;
//    cout << "调用前: a=" << a << " b=" << b << endl;
//    swap_val(a, b);
//    cout << "swap_val 后: a=" << a << " b=" << b << endl;
//
//    a = 10; b = 20;
//    cout << "调用前: a=" << a << " b=" << b << endl;
//    swap_ptr(&a, &b);
//    cout << "swap_ptr 后: a=" << a << " b=" << b << endl;
//
//    a = 10; b = 20;
//    cout << "调用前: a=" << a << " b=" << b << endl;
//    swap_ref(a, b);
//    cout << "swap_ref 后: a=" << a << " b=" << b << endl;
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int* g_count = nullptr;
//
//int fibonacci(int n)
//{
//    static int count = 0;
//    count++;
//    g_count = &count;
//
//    if (n < 1)
//        return 0;
//    if (n == 1 || n == 2)
//        return 1;
//
//    return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main()
//{
//    int n;
//    cout << "请输入 n: ";
//    cin >> n;
//
//    int value = fibonacci(n);
//
//    cout << "斐波那契数列第 " << n << " 项 = " << value << endl;
//    cout << "递归函数总调用次数 = " << *g_count << endl;
//    return 0;
//}
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//const double PI = 3.14159265358979;
//
//double calculateArea(double radius)
//{
//    return PI * radius * radius;
//}
//
//double calculateArea(double width, double height)
//{
//    return width * height;
//}
//
//double calculateArea(double a, double b, double c)
//{
//    double p = (a + b + c) / 2.0;
//    return sqrt(p * (p - a) * (p - b) * (p - c));
//}
//
//int main()
//{
//    int choice;
//    cout << "1. 圆" << endl;
//    cout << "2. 矩形" << endl;
//    cout << "3. 三角形" << endl;
//    cout << "请选择: ";
//    cin >> choice;
//
//    if (choice == 1)
//    {
//        double r;
//        cout << "请输入半径: ";
//        cin >> r;
//        cout << "面积 = " << calculateArea(r) << endl;
//    }
//    else if (choice == 2)
//    {
//        double w, h;
//        cout << "请输入宽和高: ";
//        cin >> w >> h;
//        cout << "面积 = " << calculateArea(w, h) << endl;
//    }
//    else if (choice == 3)
//    {
//        double a, b, c;
//        cout << "请输入三条边长: ";
//        cin >> a >> b >> c;
//        cout << "面积 = " << calculateArea(a, b, c) << endl;
//    }
//    else
//    {
//        cout << "选择无效" << endl;
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//    const int N = 10;
//    int arr[N];
//    int* p = arr;
//
//    srand((unsigned)time(0));
//
//    for (int i = 0; i < N; i++)
//        *(p + i) = rand() % 100;
//
//    cout << "原始数组: ";
//    for (int i = 0; i < N; i++)
//        cout << *(p + i) << " ";
//    cout << endl;
//
//    for (int i = 0; i < N / 2; i++)
//    {
//        int t = *(p + i);
//        *(p + i) = *(p + N - 1 - i);
//        *(p + N - 1 - i) = t;
//    }
//
//    cout << "逆序数组: ";
//    for (int i = 0; i < N; i++)
//        cout << *(p + i) << " ";
//    cout << endl;
//
//    return 0;
//}
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//void transposeMatrix(const int src[][4], int dest[][3], int row, int col)
//{
//    for (int i = 0; i < row; i++)
//        for (int j = 0; j < col; j++)
//            dest[j][i] = src[i][j];
//}
//
//void print34(const int m[][4], int rows)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < 4; j++)
//            cout << setw(4) << m[i][j];
//        cout << endl;
//    }
//}
//
//void print43(const int m[][3], int rows)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < 3; j++)
//            cout << setw(4) << m[i][j];
//        cout << endl;
//    }
//}
//
//int main()
//{
//    int src[3][4] = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 } };
//    int dest[4][3];
//
//    transposeMatrix(src, dest, 3, 4);
//
//    cout << "原矩阵 (3x4):" << endl;
//    print34(src, 3);
//
//    cout << "转置后 (4x3):" << endl;
//    print43(dest, 4);
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n;
//    cout << "请输入班级人数: ";
//    cin >> n;
//
//    double* scores = new double[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << "请输入第 " << i + 1 << " 个学生的成绩: ";
//        cin >> *(scores + i);
//    }
//
//    double sum = 0;
//    double maxScore = *(scores + 0);
//    double minScore = *(scores + 0);
//
//    for (int i = 0; i < n; i++)
//    {
//        sum += *(scores + i);
//        if (*(scores + i) > maxScore)
//            maxScore = *(scores + i);
//        if (*(scores + i) < minScore)
//            minScore = *(scores + i);
//    }
//
//    cout << "平均分: " << sum / n << endl;
//    cout << "最高分: " << maxScore << endl;
//    cout << "最低分: " << minScore << endl;
//
//    // 不释放会造成内存泄漏：这块堆内存的地址丢失后就再也无法回收，
//    // 程序运行期间一直占用内存，若在循环或大程序中反复 new 而不 delete，
//    // 内存会被持续吃掉，最终导致系统内存耗尽、程序崩溃。
//    delete[] scores;
//    scores = nullptr;
//
//    return 0;
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    vector<int> q;
//
//    for (int i = 1; i <= 5; i++)
//        q.push_back(i);
//
//    cout << "初始队列: ";
//    for (size_t i = 0; i < q.size(); i++)
//        cout << q[i] << " ";
//    cout << endl;
//
//    q.insert(q.begin() + 2, 99);
//
//    cout << "插队后: ";
//    for (size_t i = 0; i < q.size(); i++)
//        cout << q[i] << " ";
//    cout << endl;
//
//    q.erase(q.end() - 2);
//
//    cout << "离开后: ";
//    for (size_t i = 0; i < q.size(); i++)
//        cout << q[i] << " ";
//    cout << endl;
//
//    cout << "最终队列长度: " << q.size() << endl;
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string text;
//    cout << "请输入一段英文句子: ";
//    getline(cin, text);
//
//    string from, to;
//    cout << "要替换的单词: ";
//    cin >> from;
//    cout << "替换成: ";
//    cin >> to;
//
//    size_t pos = 0;
//    while ((pos = text.find(from, pos)) != string::npos)
//    {
//        text.replace(pos, from.length(), to);
//        pos += to.length();
//    }
//
//    cout << "替换结果: " << text << endl;
//    cout << "句子长度: " << text.length() << endl;
//
//    return 0;
//}
//
//
//#include <iostream>
//using namespace std;
//
//int* mergeSortedArrays(const int* arr1, int len1, const int* arr2, int len2)
//{
//    int* result = new int[len1 + len2];
//    int i = 0, j = 0, k = 0;
//
//    while (i < len1 && j < len2)
//    {
//        if (*(arr1 + i) <= *(arr2 + j))
//        {
//            *(result + k) = *(arr1 + i);
//            i++;
//        }
//        else
//        {
//            *(result + k) = *(arr2 + j);
//            j++;
//        }
//        k++;
//    }
//
//    while (i < len1)
//    {
//        *(result + k) = *(arr1 + i);
//        i++;
//        k++;
//    }
//
//    while (j < len2)
//    {
//        *(result + k) = *(arr2 + j);
//        j++;
//        k++;
//    }
//
//    return result;
//}
//
//int main()
//{
//    int a[5] = { 1, 3, 5, 7, 9 };
//    int b[4] = { 2, 4, 6, 8 };
//
//    int* merged = mergeSortedArrays(a, 5, b, 4);
//
//    cout << "合并结果: ";
//    for (int i = 0; i < 9; i++)
//        cout << *(merged + i) << " ";
//    cout << endl;
//
//    delete[] merged;
//    merged = nullptr;
//
//    return 0;
//}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void addContact(vector<string>& names, vector<string>& phones, const string& name, const string& phone)
{
    names.push_back(name);
    phones.push_back(phone);
}

void displayAll(const vector<string>& names, const vector<string>& phones)
{
    cout << "通讯录 (" << names.size() << " 条):" << endl;
    for (size_t i = 0; i < names.size(); i++)
        cout << i + 1 << ". " << names[i] << "  " << phones[i] << endl;
}

int main()
{
    vector<string> names;
    vector<string> phones;

    addContact(names, phones, "张三", "13800000001");
    addContact(names, phones, "李四", "13800000002");
    addContact(names, phones, "王五", "13800000003");

    displayAll(names, phones);

    addContact(names, phones, "赵六", "13800000004");

    displayAll(names, phones);

    return 0;
}
