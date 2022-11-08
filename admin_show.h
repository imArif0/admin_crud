void Show()
{
    read();
    for (int i = 0; i < n; i++)
        cout << i + 1 << ".  " << admin[i].id << endl;
    cout << "Press ENTER to go back to main manu!"; // problem
    getchar();
    getchar();
}