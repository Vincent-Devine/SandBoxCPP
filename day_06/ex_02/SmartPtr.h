#pragma once

template <typename T>
class SmartPtr
{
    private :
        int* nb_smartPtr;

        T* my_value;

    public :
        SmartPtr(T* my_value = nullptr):my_value(my_value)
        {
            nb_smartPtr = new int(0);
        }

        SmartPtr(const SmartPtr<T>& other):my_value(other.my_value)
        {
            nb_smartPtr = other.nb_smartPtr;
            (*nb_smartPtr)++;
        }

        ~SmartPtr()
        {
            if(*nb_smartPtr == 0)
                delete my_value;
            else
                (*nb_smartPtr)--;
        }

        void reset()
        {
            my_value = nullptr;
            (*nb_smartPtr)--;
        }

        T& operator*()
        {
            return *this->my_value;
        }

        T* operator->()
        {
            return this->my_value;
        }

        SmartPtr<T>& operator=(const SmartPtr<T>& other)
        {
            nb_smartPtr = other.nb_smartPtr;
            (*nb_smartPtr)++;
            my_value = other.my_value;
            return *this;
        } 

        explicit operator bool()
        {
            if(this->my_value != nullptr)
                return true;
            else
                return false;
        }
};