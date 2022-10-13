#pragma once
#include "sloth.h"

namespace day_02::ex_06
{
    class cat
    {
        private:
            std::string name;
        public:
            cat(std::string name);
            cat(const cat& catPrev);
            cat(sloth& aSlot);
            ~cat();
            cat& operator=(cat& other);
            cat& operator=(sloth& other);
            std::string get_name() const;
            friend std::ostream& operator<<(std::ostream& os, const cat& aCat);
    };
    std::ostream& operator<<(std::ostream& os, const cat& aCat);
}