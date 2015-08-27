void f(int b)
{
    int *ptr = (int *) 42;

    *ptr = 42;
}

void g(int a)
{
    f(a+10);
}

int
main()
{
    g(42);
}
