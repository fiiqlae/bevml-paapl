#include "./BaseException.cpp"

class NegativePriceException: public BaseException
{
public:
  NegativePriceException(const char* x) : BaseException(x)
  {
    std::cout << "EXPECTED A POSITIVE INTEGER FOR FIELD ``PRICE``\n";
  }
};
