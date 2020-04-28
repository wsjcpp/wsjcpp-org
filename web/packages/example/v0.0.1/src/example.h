#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <string>

class Example {
    public:
        Example();
        void setValue(const std::string &sValue);
        std::string getValue();
    private:
        std::string m_sValue;
};


#endif // EXAMPLE_H
