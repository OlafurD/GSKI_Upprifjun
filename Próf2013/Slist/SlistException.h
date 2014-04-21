#ifndef SLISTEXCEPTION_H
#define SLISTEXCEPTION_H

#include <string>
using namespace std;

class SlistException
{
public:
    SlistException(string str) : message("SlistException: " + str) {};
    string getMessage() const {return message;};
private:
    string message;
};

#endif
