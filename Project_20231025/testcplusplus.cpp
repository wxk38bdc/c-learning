#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//int main() {
//	struct  students
//	{
//		int xuehao;
//		string name;
//		double yuwen;
//		double shuxue;
//		double yingyu;
//
//	};
//	int n;
//	cin >> n;
//	vector<students>x(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x[i].xuehao >> x[i].name >> x[i].yuwen >> x[i].shuxue >> x[i].yingyu;
//	}
//	int m;
//	cin >> m;
//	switch (m)
//	{
//	case 1:
//		for (int i = 0; i < n - 1; i++)
//		{
//			for (int j = 0; j < n - 1 - i; j++)
//			{
//				if (x[j].yuwen < x[j + 1].yuwen)
//				{
//					swap(x[j], x[j + 1]);
//				}
//				if (x[j].yuwen == x[j + 1].yuwen)
//				{
//					if (x[j].xuehao > x[j + 1].xuehao)
//					{
//						swap(x[j], x[j + 1]);
//					}
//				}
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cout << x[i].xuehao << " " << x[i].name << endl;
//		}
//		break;
//	case 2:
//		for (int i = 0; i < n - 1; i++)
//		{
//			for (int j = 0; j < n - 1 - i; j++)
//			{
//				if (x[j].shuxue < x[j + 1].shuxue)
//				{
//					swap(x[j], x[j + 1]);
//				}
//				if (x[j].shuxue == x[j + 1].shuxue)
//				{
//					if (x[j].xuehao > x[j + 1].xuehao)
//					{
//						swap(x[j], x[j + 1]);
//					}
//				}
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cout << x[i].xuehao << " " << x[i].name << endl;
//		}
//		break;
//	case 3:
//		for (int i = 0; i < n - 1; i++)
//		{
//			for (int j = 0; j < n - 1 - i; j++)
//			{
//				if (x[j].yingyu < x[j + 1].yingyu)
//				{
//					swap(x[j], x[j + 1]);
//				}
//				if (x[j].yingyu == x[j + 1].yingyu)
//				{
//					if (x[j].xuehao > x[j + 1].xuehao)
//					{
//						swap(x[j], x[j + 1]);
//					}
//				}
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cout << x[i].xuehao << " " << x[i].name << endl;
//		}
//		break;
//	default:
//		cout << "ERROR" << endl;
//		break;
//	}
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//
//int main() 
//{
//    struct Student 
//    {
//        int id;
//        string name;
//        double Chinese;
//        double math;
//        double english;
//    };
//
//    int n;
//    cin >> n;
//    vector<Student> students(n);
//
//    for (int i = 0; i < n; i++) 
//    {
//        cin >> students[i].id >> students[i].name >> students[i].Chinese >> students[i].math >> students[i].english;
//    }
//
//    int m;
//    cin >> m;
//    switch (m) //√∞≈›≈≈–ÚÀºœÎ
//    {
//    case 1:
//        for (int i = 0; i < n - 1; i++) 
//        {
//            for (int j = 0; j < n - 1 - i; j++) 
//            {
//                if (students[j].Chinese < students[j + 1].Chinese)
//                {
//                    swap(students[j], students[j + 1]);
//                }
//                if (students[j].Chinese == students[j + 1].Chinese) 
//                {
//                    if (students[j].id > students[j + 1].id)
//                    {
//                        swap(students[j], students[j + 1]);
//                    }
//                }
//            }
//        }
//        for (int i = 0; i < n; i++) {
//            cout << students[i].id << " " << students[i].name << endl;
//        }
//        break;
//    case 2:
//        for (int i = 0; i < n - 1; i++) {
//            for (int j = 0; j < n - 1 - i; j++) {
//                if (students[j].math < students[j + 1].math) {
//                    swap(students[j], students[j + 1]);
//                }
//                if (students[j].math == students[j + 1].math) {
//                    if (students[j].id > students[j + 1].id) {
//                        swap(students[j], students[j + 1]);
//                    }
//                }
//            }
//        }
//        for (int i = 0; i < n; i++) {
//            cout << students[i].id << " " << students[i].name << endl;
//        }
//        break;
//    case 3:
//        for (int i = 0; i < n - 1; i++) {
//            for (int j = 0; j < n - 1 - i; j++) {
//                if (students[j].english < students[j + 1].english) {
//                    swap(students[j], students[j + 1]);
//                }
//                if (students[j].english == students[j + 1].english) {
//                    if (students[j].id > students[j + 1].id) {
//                        swap(students[j], students[j + 1]);
//                    }
//                }
//            }
//        }
//        for (int i = 0; i < n; i++) {
//            cout << students[i].id << " " << students[i].name << endl;
//        }
//        break;
//    default:
//        cout << "ERROR" << endl;
//        break;
//    }
//
//    return 0;
//}
