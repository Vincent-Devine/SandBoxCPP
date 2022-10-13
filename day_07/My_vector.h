#pragma once

#include <iostream>

template <typename T>
class My_vector
{
    private:
        int capacity = 1;
        int size = 0;

        T* vector;

    public:
        ~My_vector()
        {
            for(int i = 0; i < size; i++)
            {
                vector[i].~T();
            }
        }

        void push_back(const T& newT)
        {
            if(size != capacity)
            {
                if(size == 0)
                    vector = new T[capacity]{newT};
                else
                    vector[size] = newT;
                size++;
            }
            else
            { 
                capacity = capacity + 2 - (capacity % 2);

                T* oldVector = vector;
                vector = (T*)malloc(sizeof(T) * capacity);

                for(int i = 0; i < size; i++)
                {
                    new (&vector[i])T(oldVector[i]);
                }

                vector[size] = newT;
                size++;
            }
        }
};