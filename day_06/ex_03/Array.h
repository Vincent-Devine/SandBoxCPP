#pragma once

template <typename T, int count>
class Array
{
    private :
        T* array;

    public :
        Array()
        {
            array = new T[count];
        }

        Array(const Array<T, count>& copy)
        {
            array = new T[count];
            *this = copy;
        }

        ~Array()
        {
            delete[] array;
        }

        Array<T, count>& operator=(const Array<T, count>& other)
        {
            for(int i = 0; i < count; i++)
            {
                this->array[i] = other.array[i];
            }
            return *this;
        } 

        T& operator[](int i)
        {
            return this->array[i];
        }

        int size()
        {
            return count;
        }
};