
void Login()
{
    read();
    string id, pass;
    int f = 1;
    getchar();
    while (1)
    {
        system("CLS");
        cout << "ENTER ID: ";
        getline(cin, id);
        for (int i = 0; i < n; i++)
        {
            if (id == admin[i].id)
            {
                f = 0;
                m = i; // position of id
                break;
            }
        }
        if (f)
        {
            cout << "Invalid ID. Press ENTER to try again!";
            getchar();
        }
        else
            break;
    }
    while (1)
    {
        system("CLS");
        cout << "ID: " << admin[m].id << endl;
        cout << "ENTER PASS: ";
        getline(cin, pass);
        cout << "\n*****CHECKING PASSWORD*****\n";
        sleep(3);
        if (pass == admin[m].get_pass())
        {
            system("CLS");
            break;
        }
        else
        {
            cout << "Wrong PASSWORD. Press ENTER to try again!";
            getchar();
        }
    }
}