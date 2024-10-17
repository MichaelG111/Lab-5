#include "check.h"

Check::Check(double amount, const std::string &payee)
    : amount_(amount), payee_(payee) {}

double Check::GetAmount() const { return amount_; }

const std::string &Check::GetPayee() const { return payee_; }