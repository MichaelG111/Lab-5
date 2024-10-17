#include "cash.h"

Cash::Cash(double amount_) : amount_(amount_) {}

double Cash::GetAmount() const { return amount_; }
