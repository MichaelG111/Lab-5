#include <iostream>

#include "cash.h"
#include "check.h"
#include "digital_payment.h"
#include "donation_tracker.h"

int main() {
  // TODO(me): Create donation tracker objects for each donation type (cash, check,
  // digital_payment)

  // TODO(me): Create Cash donation objects withh $100.00 and $50.00 values.

  // TODO(me): Create Check donation objects with $250.00 and $150.00 both for
  // Tuffy Pantry

  // TODO(me): Create DigitalPayment donation objects with the following
  // information: $300.00 from Roy Clay to Tuffy Pantry $250.00 from Grace
  // Hopper to Tuffy Pantry

  // TODO(me): Add each of the donations to their respective trackers

  std::cout << "Total cash donations: $";
  // TODO(me): Display total donations for the Cash donation tracker

  std::cout << "Total check donations: $";
  // TODO(me): Display total donations for the Check donation tracker

  std::cout << "Total digital payment donations: $";
  // TODO(me): Display total donations for the Digital Payment donation tracker

  return 0;
}
