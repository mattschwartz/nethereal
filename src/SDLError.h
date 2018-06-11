#ifndef _SDLERROR_H_
#define _SDLERROR_H_

#include <exception>
#include <string>

class SDLError : public std::exception {
private:
    std::string _msg;

public:
    SDLError();
    SDLError(const std::string&);
    virtual ~SDLError() throw();
    virtual const char* what() const throw();
};

#endif // _SDLERROR_H
