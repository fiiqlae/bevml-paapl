#include "./perscription_drug.cpp"
#include "./NegativePriceException.cpp"
#include <iostream>

int main() 
{
  int selection = 0;
  PerscriptionDrug r;
  try
  {
    while(1)
    {
      std::cin >> r;
      if(r.get_price() < 0) throw NegativePriceException("told you so");
    }
  }
  catch(std::exception& e)
  {
    std::cout << e.what();
  }
  return 0;    
}

