#include <iostream>
using namespace std;

int main() {
    int n, i, j = 0, k, l, temp;

    cout << "Enter the size of the array: ";
    cin >> n;
    
    int A1[n], A2[n];

    for(i = 0; i < n; i++) {
        cout << "Enter the element-" << i + 1 << ": ";
        cin >> A1[i];
    }
    cout << endl;

    cout << "Array given by user: " << endl;
    for(l = 0; l < n; l++) {
        cout << A1[l] << endl;
    }
    cout << endl;

    // Reversing the Array
    for(k = n - 1; k >= 0; k--) {
        temp = A1[k];
        A2[j] = temp;
        j++;
    }
    
    cout << "Reversed array: " << endl;
    for(l = 0; l < n; l++) {
        cout << A2[l] << endl;
    }
    cout << endl;

    // Search element in the array
    int marks[5], num, flag = 0, count = 0;
    for(i = 0; i < 5; i++) {
        cout << "Enter element-" << i + 1 << ": ";
        cin >> marks[i];
    }
    cout << "Enter element to be searched: ";
    cin >> num;

    for(j = 0; j < 5; j++) {
        if(marks[j] == num) {
            cout << "Position of " << num << ": " << j + 1 << endl;
            count++;
            flag = 1;
        }
    }

    if(flag == 0) {
        cout << "Element not present" << endl;
    } else {
        cout << "Element is present: " << count << " times" << endl;
    }
    cout << endl;

    // Sum and Average of array
    int array1[5],v;
    float sum = 0, avg;

    for(i = 0; i < 5; i++) {
        cout << "Enter the element-" << i + 1 << ": ";
        cin >> array1[i];
    }

    for (j = 0; j < 5; j++) {
        sum += array1[j];
    }

    cout << "Sum of the elements = " << sum << endl;
    avg = sum / 5;
    cout << "Average of the array = " << avg << endl;
    cout << endl;

    // Finding max and min element in the array
    int max=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;
    cout<<endl;
    return 0;
}
