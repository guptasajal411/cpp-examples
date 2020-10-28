
void factorial(int num)
{
    int multiplied = 1;
    for (int i = 1; i <= num; i++)
    {
        multiplied = (multiplied * i);
    }
    cout<<multiplied<<endl;
}