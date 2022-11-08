void Delete()
{
    read();
    int f=0;
    getchar();
    while (1)
    {
        system("CLS");
        cout << "Enter your Password to confirm Deletation: ";
        string s;

        getline(cin, s);
        cout << "\n*****CHECKING PASSWORD*****\n";
        sleep(2);
        if(s==admin[m].get_pass())
        {
            ofstream no("login.txt");
            for (int i = 0; i < n; i++)
            {
                if(i!=m)
                    no << admin[i].id << endl << admin[i].get_pass() << endl;
            }
            n--;
            system("CLS");
            cout << "ID deleted!\n";
            cout << "Press ENTER to go back to main menu!";
            read();
            getchar();
            break;
        }
        else
        {
            system("CLS");
            cout << "Enter your Password to confirm Deletation: " << s << endl << endl;
            cout << "Wrong Password! Press Enter to try again!";
            getchar();
            continue;
        }
    }
}