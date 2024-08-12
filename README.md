# Experiment 7 
## Aim -
To study and implement c++ arrays and strings

## Apparatus -
Vs code

## Theory -

## Comparison Table between arrays and strings 

| Feature           | Array                                           | String                                       |
|-------------------|-------------------------------------------------|----------------------------------------------|
| *Definition*    | A collection of elements of the same type stored in contiguous memory locations. | Sequences of characters used to represent text. Designed for textual data. |
| *Size*          |Size can be fixed or dynamic based on the language (e.g., static in C, dynamic in Python).         | Size is dynamic and adjusts with the length of the text. |
| *Mutability*    | Usually mutable; elements can be changed after the array is created.| Generally immutable; modifying a string creates a new one rather than altering the original. |
| *Access*        | Accessed via indices.                          | Characters accessed via indices; includes built-in methods for manipulation. |
| *Operations*    | Support various operations like sorting, searching, and element manipulation.  |Support operations like concatenation, substring extraction, and text formatting.|
| *Memory Allocation* |Typically allocated with a fixed size and contiguous memory.|Memory allocation can be variable and managed dynamically based on string length and encoding. |
| *Indexing* | Elements are accessed via numerical indices (e.g., arr[0]). | Characters are accessed via numerical indices (e.g., str[0]). |
| *Data Type* | Can hold multiple data types depending on the language (e.g., integers, floats, objects). |Specifically hold text data (characters).|
| *Use Cases* | Used for storing and processing collections of related data (e.g., lists of numbers, objects). |used for handling and manipulating textual data(e.g., user imput, file content|

## *Array* :
An array is a sequential collection of elements of the same type, with a fixed size, stored in adjacent memory locations. The first element is located at the lowest memory address, and the last element at the highest address. Array indices begin at 0.
## Declaring an Array:

Specifies the type of the elements and the number of elements.To declare an array, specify the type of elements and the number of elements required. array_size must be an integer constant greater than zero. Accesses the 10th element of the array. type can be any valid C++ data type.
  
      type arrayName[array_size];
- Type is the data type of the elements (e.g., int, float, double, char).
- arrayName is the name you want to give to the array.
- arraySize is the number of elements in the array.

*key point about declaring an array* :
- The size of the array (array_size) must be an integer constant greater than zero.
- Once the size of the array is defined, it cannot be changed
  
## Initializing an Array:
Arrays can be initialized element by element or using a single statement. Provides initial values to the elements of the array. The number of values in {} should not exceed array_size.

      int arr[5] = {1000, 2, 3, 17, 50};
- The number of values between braces { } cannot be larger than the number of elements that we declare for the array between square brackets [ ]. 

*key point about initializating an array* :
- The number of elements in the initializer list cannot exceed the size of the array.
- If you initialize an array without specifying the size, C++ will automatically determine the size based on the number of elements in the initializer list

## *Key Points about arrays* :

- *Definition* : An array is a variable that can store multiple values of the same type.

- *Use of Arrays* : Regular variables (e.g., v1, v2, v3) are manageable for a few objects, but arrays are needed for a larger number of instances.

- *Indexing* : Array indexes start at 0, with the first item at index x[0].

- *Sequential Addresses* : Array elements have sequential memory addresses. For example, if x[0] is at address 2120, then x[1] is at 2124, x[2] at 2128, etc.

- *Element Size* : Each element's address increases based on its size; if an int is 4 bytes, addresses increment by 4 for each element

## Strings :
A string is a sequence of characters used as an object of the class. The string class stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte 
character. A string is different from an array of characters.

## Printing strings :
prnting a string involves simply presenting its content to the user. This operation is fundamental in programming and serves various purposes such as debugging, user feedback, and output generation. When you show a string, you typically output its content to the console or a user interface

*key points about printing a strings* :
- *String Formatting* : Use proper formatting to display text correctly, including handling dynamic content and alignment.

- *Escape Characters* : Properly manage special characters like newline (\n) and tab (\t) to ensure they appear as intended.

- *Encoding* : Ensure the correct character encoding (e.g., UTF-8) is used to handle special characters.

## Concatenating of strings :
String concatenation is a fundamental operation in programming, where two or more strings are joined together to form a single, continuous string. This operation is commonly used in various programming languages to combine text, build dynamic messages, or format output.String concatenation is not just limited to joining literal strings; it can also involve concatenating variables, user inputs, or results from other operations.

*key points about concatenation of strings* :
- *Joins Strings*: Combines multiple strings into one.

- *Immutability & Performance*: Can impact performance due to string immutability; consider efficient alternatives.

- *String Interpolation*: Offers a more readable and convenient way to concatenate.

- *Type Conversion*: Ensure proper conversion when concatenating different types.

## Reversing of strings :
When reversing strings, we're dealing with individual sequences of characters. Each word in a paragraph is a sequence of characters separated by spaces and punctuation marks. The goal is to reverse these sequences without altering the overall structure of the paragraph. This task involves a series of steps, each of which addresses a different aspect of text processing.

*key points about reversing of strings* :
- *Split the Paragraph:* Separate the text into words and punctuation marks.

- *Reverse Each Word:* Flip the characters in each word while keeping punctuation and spaces unchanged.

- *Reconstruct the Paragraph:* Reassemble the text with reversed words and original punctuation and spacing.

## Palindrome checking in strings :
A palindrome is a string that reads the same forward and backward, ignoring spaces, punctuation, and capitalization.To check if a string is a palindrome, you need to determine whether it reads the same backward as forward. This involves several key steps, starting with normalizing the string to ensure consistency. Normalization typically includes converting all characters to lowercase and removing any spaces or punctuation. Once the string is normalized, you reverse it to create a backward version. This reversed string is then compared to the original normalized string. If both strings are identical, it confirms that the original string is a palindrome.

*key points about palindrome checking of strings* :
- *Normalize the String* : Convert the string to lowercase and remove non-alphanumeric characters (spaces, punctuation) to ensure uniformity.

- *Reverse the String* : Create a reversed version of the normalized string.

- *Compare* : Check if the original normalized string matches the reversed string.

- If they are the same, the string is a palindrome.

## Code
### Arrays
```
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
```

### Strings 
```
#include <iostream>
using namespace std;

int main(){
    //printing string output
    cout<<endl;
    string S;
    cout<<"Enter a word : ";
    cin>>S;
    cout<<"The entered string is "<<S<<endl;
    cout<<endl;
    cout<<endl;

    // concatenation of strings
    string a, b;
    cout<<"Enter string 1 : ";
    cin>>a;
    cout<<"Enter string 2 : ";
    cin>>b;
    cout<<"CONCATENATED STRINGS : "<<a+b;
    cout<<endl;
    cout<<endl;


    // printing string in reverse 
    string c;
    cout<<"Enter a string: ";
    cin>>c;
    int i=0;
    cout<<"Reversed string: ";
    for(i=c.length()-1;i>=0;i--) {
        cout<<c[i];
    }
    cout<<endl;
    cout<<endl;

    // checking of pallindrome 
    string D;
    cout<<"Enter a string: ";
    cin>>D;
    int n=D.length(),j, flag=0;
    for(j=0;j<D.length();j++){
        if(D[j]==D[n-1]){
            flag=1;
        }
    n--;
    }
    if(flag==1){
        cout<<D<<" is palindrome";
    }
    else{
    cout<<D<<" is not palindrome";
    }
    
}
```
## Output - 
