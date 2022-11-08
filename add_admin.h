void Add_Admin()
{
    read();
    getchar();
    string nid, npass;
    while (1)
    {
        system("CLS");
        cout << "\n\nADDING NEW ADMIN DETAILS\n";
        cout << "------------------------\n";
        cout << "**ID & PASS require minimum 6 characters**\n\n";
        cout << "ID   : ";
        int f = 0;
        getline(cin, nid);
        for (int i = 0; i < n; i++)
        {
            if (nid == admin[i].id)
                f = 1;
        }
        if (sz(nid) < 6)
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
        cout << "\n\nADDING NEW ADMIN DETAILS\n";
        cout << "------------------------\n";
        cout << "**ID & PASS require minimum 6 characters**\n\n";
        cout << "ID   : " << nid << endl;
        cout << "PASS : ";
        getline(cin, npass);
        if (sz(npass) < 6)
        {
            cout << "PASS have to be more than 5 characters. Press ENTER to try again!";
            getchar();
        }

        else
        {
            cout << endl
                 << "New Admin added!" << endl;
            cout << "Press ENTER";
            getchar();
            system("CLS");
            break;
        }
    }
    admin[n].id = nid;
    admin[n].set_pass(npass);
    n++;
    write();
}