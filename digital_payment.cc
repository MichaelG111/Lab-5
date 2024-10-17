#include "digital_payment.h"

DigitalPayment::DigitalPayment(double amount, const std::string &sender,
                               const std::string &recipient)
    : amount_(amount), sender_(sender), recipient_(recipient) {}

double DigitalPayment::GetAmount() const { return amount_; }

const std::string &DigitalPayment::GetSender() const { return sender_; }

const std::string &DigitalPayment::GetRecipient() const { return recipient_; }