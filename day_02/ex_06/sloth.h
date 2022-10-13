#pragma once

namespace day_02::ex_06
{
    class sloth
    {
        private:
            std::string name;
        public:
            sloth(std::string name);
            ~sloth();
            sloth& operator=(sloth& other);
            std::string get_name() const;
            friend std::ostream& operator<<(std::ostream& os, const sloth& aSloth);
    };
    std::ostream& operator<<(std::ostream& os, const sloth& aSloth);
}