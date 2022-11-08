void Update()
{
    read();
    string uid, upass, pass;
    char t;
    while (1)
    {
        system("CLS");
        cout << "Press 1 to update your id!\nPress 2 to update your password!\nPress any other key to go to the main menu!\n";
        cin >> t;
        system("CLS");
        getchar();
        if (t == '1')
        {
            while(1)
            {
                int f=0;
                system("CLS");
                cout << "**ID require minimum 6 characters**\n\n";
                cout << "Enter a new id : ";
                getline(cin, uid);
                for (int i = 0; i < n; i++)
                {
                    if (uid == admin[i].id)
                        f = 1;
                }
                if(uid==admin[m].id)
                {
                    cout << "You already have the same id! Press Enter to try again!";
                    getchar();
                }
                else if(sz(uid)<6)
                {
                    cout << "ID have to be more than 5 characters. Press ENTER to try again!";
                    getchar();
                }
                else if (f)
                {
                    cout << "This ID is already taken. Press ENTER to try again!";
                    getchar();
                }
                else
                    break;
            }
            while (1)
            {
                system("CLS");
                cout << "Enter a new id : " << uid << endl << endl;
                cout << "Enter your current Password to confirm: ";
                getline(cin, pass);
                cout << "\n*****CHECKING PASSWORD*****\n";
                sleep(2);
                if (admin[m].get_pass() == pass)
                {
                    admin[m].id = uid;
                    system("CLS");
                    cout << "\nYour id is Updated!\nPress Enter!";
                    getchar();
                    break;
                }
                else
                {
                    system("CLS");
                    cout << "Enter a new id : " << uid << endl << endl;
                    cout << "Enter your current Password to confirm: " << pass << endl << endl;
                    cout << "Wrong Password! Press Enter to try again!";
                    getchar();
                }
            }
        }
        else if(t == '2')
        {
            while(1)
            {
                system("CLS");
                cout << "**PASSWORD require minimum 6 characters**\n\n";
                cout << "Enter a new Password : ";
                getline(cin, upass);
                if(upass==admin[m].get_pass())
                {
                    cout << "You already have the same password! Press Enter to try again!";
                    getchar();
                }
                else if(sz(upass)<6)
                {
                    cout << "ID have to be more than 5 characters. Press ENTER to try again!";
                    getchar();
                }
                else
                    break;
            }
            while (1)
            {
                system("CLS");
                cout << "Enter a new Password : " << upass << endl << endl;
                cout << "Enter your current Password to confirm: ";
                getline(cin, pass);
                cout << "\n*****CHECKING PASSWORD*****\n";
                sleep(2);
                if (admin[m].get_pass() == pass)
                {
                    admin[m].set_pass(upass);
                    system("CLS");
                    cout << "\nYour password is Updated!\nPress Enter!";
                    getchar();
                    break;
                }
                else
                {
                    system("CLS");
                    cout << "Enter a new Password : " << upass << endl << endl;
                    cout << "Enter your current Password to confirm: " << pass << endl << endl;
                    cout << "Wrong Password! Press Enter to try again!";
                    getchar();
                }
            }
        }
        else
        {
            write();
            break;
        }
    }
}