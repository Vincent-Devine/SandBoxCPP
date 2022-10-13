namespace day_02::ex_01
{
    void swap(int& a, int& b)
    {
        int swap = a;
        a = b;
        b = swap;
    }
}