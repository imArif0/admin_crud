#include "admin.h"

int main()
{
    check();
    char c;
    main:
    system("CLS");
    cout << "Choose an Option: \n\n1. Log in\n0. Exit\n";
    cin >> c;
    if (c == '1')
        Login();
    else if(c == '0')
        return 0;
    while (1)
    {
        system("CLS");
        cout << "Welcome! *" << admin[m].id << "*" << endl << endl;
        cout << "Choose an Option: \n1. Add-Admin\n2. Delete-Admin\n3. Show-Admin\n4. Update-info\n5. Log-out\n";
        cin >> c;
        if (c == '1')
        {
            system("CLS");
            Add_Admin();
        }
        if (c == '2')
        {
            system("CLS");
            Delete();
            goto main;
        }
        if (c == '3')
        {
            system("CLS");
            Show();
        }
        if (c == '4')
        {
            system("CLS");
            Update();
        }
        if (c == '5')
        {
            system("CLS");
            goto main;
        }
    }
}
