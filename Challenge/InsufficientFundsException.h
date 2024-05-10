#ifndef _INSUFFICIENT_FUNDS_EXCEPTION_H_
#define _INSUFFICIENT_FUNDS_EXCEPTION_H_

class InsufficientFundsException: public std::exception
{
public:
    InsufficientFundsException() = default;
    ~InsufficientFundsException() = default;
    virtual const char *what() const noexcept override { return "Balance is below withdrawal amount"; }
};

#endif // _INSUFFICIENT_FUNDS_EXCEPTION_H_
