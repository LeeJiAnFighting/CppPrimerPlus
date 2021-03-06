/* ex.04.03.cpp 
Write a program that asks the user to enter his or her first name 
and then last name, and that then constructs, stores, and displays 
a third string, consisting of the user’s last name followed by 
a comma, a space, and first name. Use char arrays and functions 
from the cstring header file.A sample run could look like this:
Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip
 */

#include <iostream>
#include <cstring>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "Enter your first name: ";
    char first_name[20];
    cin >> first_name;

    cout << "Enter your last name: ";
    char last_name[20];
    cin >> last_name;

    char whole_name[40];
    strcpy(whole_name, last_name);
    strcat(whole_name, ", ");
    strcat(whole_name, first_name);

    cout << "Here's the information in a single string: " << whole_name << endl;

    return 0; 
}
