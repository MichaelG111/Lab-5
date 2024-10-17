#ifndef CASH_H
#define CASH_H

class Cash {
 public:
  Cash(double amount_);
  double GetAmount() const;

 private:
  double amount_;
};

#endif  // CASH_H
