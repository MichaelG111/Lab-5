#ifndef DIGITAL_PAYMENT_H
#define DIGITAL_PAYMENT_H

#include <string>

class DigitalPayment {
 public:
  DigitalPayment(double amount, const std::string &sender,
                          const std::string &recipient);
  double GetAmount() const;
  const std::string &GetSender() const;
  const std::string &GetRecipient() const;

 private:
  double amount_;
  std::string sender_;
  std::string recipient_;
};

#endif  // DIGITAL_PAYMENT_H
