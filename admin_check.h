int check() // to check if there any existing admin or not
{
    read();
    if (n == 0)
    {
        cout << "\n\nNO existing Admin. Press ENTER key to become an Admin!";
        Add_Admin();
    }
}
