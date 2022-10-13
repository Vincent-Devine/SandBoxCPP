#pragma once

template <class T> void swap (T& a, T& b)
{
    T c(a);
    a=b;
    b=c;
}

template <class T> T add (const T a, const T b)
{
    return a + b;
}