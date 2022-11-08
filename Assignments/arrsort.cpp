// #include <iostream>
// using namespace std;
// class arrsort
// {
//     int n;
//     int *arr;
// public:
//     arrsort();
//     arrsort(int x);
//     void input();
//     void sort();
//     void display();
// };
// arrsort::arrsort(int x)
// {
//     n = x;
//     arr = new int[x];
// }
// arrsort::arrsort()
// {
//     n = 0;
// }
// void arrsort::input()
// {
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
// }
// void arrsort::sort()
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int t = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = t;
//             }
//         }
//     }
// }
// void arrsort::display()
// {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }
// int main()
// {
//     arrsort ob(5);
//     ob.input();
//     ob.sort();
//     ob.display();
//     return 0;
// }