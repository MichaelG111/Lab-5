#ifndef CHECK_H
#define CHECK_H

#include <string>

class Check {
 public:
  Check(double amount, const std::string &payee);
  double GetAmount() const;
  const std::string &GetPayee() const;

 private:
  double amount_;
  std::string payee_;
};

#endif  // CHECK_H
