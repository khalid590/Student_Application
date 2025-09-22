#include<iostream>

using namespace std;
int main()
{

    int n, sum = 0;
    cout << "Enter number of Students: ";
    cin >> n;

    int student[n];
    for(int i = 0; i < n; i++){
        cout << "Enter Student marks no: " << i + 1 << " = ";

        cin >> student[i];
        sum = sum + student[i];
    }
    float avg = (float) sum / n;
    cout << "Total Sum is:  " << sum << endl;
    cout << "Average is: " << avg << endl;


    int max = student[0];
    int min = student[0];

    for(int i = 1; i < n; i++){

    if(max < student[i]){
        max = student[i];
    }

    if( min > student[i]){
        min = student[i];
    }
    }

    cout << "Maximum mark is: " << max << endl;
    cout << "Minimum mark is: " << min << endl;
}
