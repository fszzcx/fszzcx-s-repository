//#include <iostream>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//
//	if (n > 0) {
//		cout << "Hello World!" << endl;
//	}
//	else{
//		cout << "Condition was false." << endl;
//	}
//	return 0;
//}
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main() {
//    int a, b;
//    cin >> a >> b;
//    double c = a / b;
//    cout << setprecision(9) << c << endl;
//    return 0;
////}
//#include <iostream>
//using namespace std;
//int main() {
//	double x;
//	cin >> x;
//	if (x >= -5 && x < -1)
//		cout << "A" << endl;
//	else if (x >= -1 && x <= 3)
//		cout << "B" << endl;
//	else if (x > 3 && x < 8)
//		cout << "C" << endl;
//	else if (x >= 8 && x <= 100)
//		cout << "D" << endl;
//	else 
//		cout << "Out of range" << endl;
//	return 0;
//		
//}
//#include <iostream>
//using namespace std;
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << a << " " << b << " " << c << endl;
//	
//	if (a == b && b == c) {
//		cout << "Equal" << endl;
//		return 0;
//	}
//	int t;                                       
//	if (a > b) { t = a; a = b; b = t; }
//	if (a > c) { t = a; a = c; c = t; }
//	if (b > c) { t = b; b = c; c = t; }
//
//	cout << a << " " << b << " " << c << endl;
//
//	return 0;
//
//}
//#include <iostream>
//using namespace std;
//int main() {
//	int choice;
//	double x, y;
//	while (true) {
//		cout << "1. + 2. - 3. * 4. / 5.退出" << endl;
//		if (choice == 5) break;
//		switch (choice) {
//		case 1: cin >> x >> y; cout << x + y << endl;break;
//		case 2: cin >> x >> y; cout << x - y << endl;break;
//		case 3: cin >> x >> y; cout << x * y << endl;break;
//		case 4: cin >> x >> y;
//			if (y == 0) {
//				cout << "Divided by zero";
//			}
//			else {
//				cout << x / y << endl;break;
//			}
//
//		default:
//			cout << "Invalid choice" << endl;
//			break;
//
//			
//		}
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//    int choice;
//    double x, y;
//    while (true) {                       
//        cout << "1.+ 2.- 3.* 4./ 5.退出" << endl;
//        cin >> choice;
//        if (choice == 5) break;          
//        switch (choice) {                
//        case 1:  cin >> x >> y;  cout << x + y << endl;  break;
//        case 2:  cin >> x >> y;  cout << x - y << endl;  break;
//        case 3:  cin >> x >> y;  cout << x * y << endl;  break;
//        case 4:
//            cin >> x >> y;
//            if (y == 0) cout << "Divided by zero" << endl;
//            else        cout << x / y << endl;
//            break;
//        default:
//            cout << "Invalid choice" << endl;
//        }
//    }
//    
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	int mm, dd, yyyy;
//	cin >> mm >> dd >> yyyy;
//	if (mm < 1 || mm > 12) {
//		cout << "Invalid date" << endl;
//	}
//	else {
//		int maxDay = 0;
//		if (mm == 2) {
//			if ((yyyy % 4 == 0 && yyyy % 100 != 0) || (yyyy % 400 == 0))
//				maxDay = 29;
//			else
//				maxDay = 28;
//		}
//		else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
//			maxDay = 30;
//		}
//		else {
//			maxDay == 31;
//		}
//		if (dd >= 1 && dd <= maxDay)
//			cout << "Valid date" << endl;
//		else
//			cout << "Invalid date" << endl;
//
//	}
//	return 0;
//}
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//    double a, b, c;
//    cin >> a >> b >> c;
//    if (fabs(a) <= 1e-8) {
//        cout << "Not quadratic" << endl;
//        return 0;
//    }
//    double delta = b * b - 4 * a * c;
//    if (delta > 1e-8) {
//        cout << "x1=" << (-b + sqrt(delta)) / (2 * a)
//            << " x2=" << (-b - sqrt(delta)) / (2 * a) << endl;
//    }
//    else if (fabs(delta) <= 1e-8) {
//        cout << "x1=x2=" << -b / (2 * a) << endl;
//    }
//    else {
//        double re = -b / (2 * a);
//        double im = sqrt(-delta) / (2 * fabs(a));
//        cout << "x1=" << re << "+" << im << "i" << endl;
//        cout << "x2=" << re << "-" << im << "i" << endl;
//    }
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    do {
//        cin >> n;
//        if (n < 10 || n > 99)
//            cout << "Retry:" << endl;
//    } while (n < 10 || n > 99);
//    cout << "Accept n=" << n << endl;
//    return 0;
////}
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    double sum = 0;
//    int sign = 1;
//    for (int k = 1; k <= n; k++) {
//        sum += sign * (2.0 * k - 1) / (2 * k + 1);
//        sign = -sign;
//    }
//    cout << sum << endl;
//    return 0;
//}
//#include <cstdio>
//using namespace std;
//int main() {
//    int letter = 0, digit = 0, space = 0, other = 0;
//    char ch;
//    while ((ch = getchar()) != '\n' && ch != EOF) {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//            letter++;
//        else if (ch >= '0' && ch <= '9')
//            digit++;
//        else if (ch == ' ')
//            space++;
//        else
//            other++;
//    }
//    printf("letter=%d digit=%d space=%d other=%d\n", letter, digit, space, other);
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//    int m;
//    cin >> m;
//    bool firstNum = true;
//    for (int num = 2; num <= m; num++) {
//        int sum = 0;
//        for (int i = 1; i <= num / 2; i++)
//            if (num % i == 0)
//                sum += i;
//        if (sum == num) {
//            if (!firstNum)
//                cout << " ";
//            cout << num << " its factors: ";
//            bool first = true;
//            for (int i = 1; i <= num / 2; i++) {
//                if (num % i == 0) {
//                    if (!first)
//                        cout << ",";
//                    cout << i;
//                    first = false;
//                }
//            }
//            firstNum = false;
//        }
//    }
//    cout << endl;
//    return 0;
//}
#include <iostream>
int main() {
	int&& a = 10;
	a = 20;
	std::cout << a << std::endl;
	return 0;

}
