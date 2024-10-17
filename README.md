# Donation Tracker
Create a generic template class, `DonationTracker`, that can track donations of various types. The `DonationTracker` class should be able to accept donations using a `Cash` class, `Check` class, or `DigitalPayment` class. **Store the donations in a `std::vector` to allow for dynamic resizing and efficient storage.**

The `Cash` class should represent cash donations. It should have a member variable, `amount_`, to store the value of the cash, and an accessor function, `GetAmount()`, to retrieve the value. It should also have a constructor that takes the initial amount as a parameter.

The `Check` class should represent check donations. It should have member variables, `amount_` and `payee_`, to store the value of the check and the payee information, respectively. It should also provide accessor functions, `GetAmount()` and `GetPayee()`, to retrieve these values. Its constructor should take the initial amount and payee information as parameters.

The `DigitalPayment` class should represent digital payments. It should have member variables, `amount_`, `sender_`, and `recipient_`, to store the value of the payment, the sender's information, and the recipient's information, respectively. It should also provide accessor functions, `GetAmount()`, `GetSender()`, and `GetRecipient()`, to retrieve these values. Its constructor should take the initial amount, sender, and recipient information as parameters.

The `Cash`, `Check`, and `DigitalPayment` classes have already been written for you. Please read through the code so you know how to use them.

You need to implement the `DonationTracker` class. It should have a template parameter, `T`, to represent the type of donation. It should provide an `AddDonation(const T& donation)` function to add a donation to the tracker and a `GetTotalDonations()` function to return the total value of all donations.

**Perform the following steps in the `main` function:**

1. **Create instances** of `DonationTracker` for each type of donation you want to track. For example, create a `DonationTracker<Cash>` to track cash donations, a `DonationTracker<Check>` to track check donations, and a `DonationTracker<DigitalPayment>` to track digital payment donations.
2. **Create instances** of `Cash`, `Check`, and `DigitalPayment` objects with the following values:

   * **Cash:** Create two `Cash` objects: one with an initial value of $100.00 and another with an initial value of $50.00.
   * **Check:** Create two `Check` objects: one with an initial value of $250.00 and the payee "John Doe", and another with an initial value of $150.00 and the payee "Jane Smith".
   * **DigitalPayment:** Create two `DigitalPayment` objects: one with an initial value of $300.00, the sender "Alice", and the recipient "Bob", and another with an initial value of $250.00, the sender "Charlie", and the recipient "David".

3. **Add** the created donation objects to their corresponding `DonationTracker` objects using the `AddDonation` function.
4. **Display** the total donations for each `DonationTracker` object using the `GetTotalDonations` function.

**Sample output**
```
Total cash donations: $150
Total check donations: $400
Total digital payment donations: $550
```

## Compiling and running the program

To manually test your code you can compile and run this program with:

```
clang++ main.cc cash.cc check.cc digital_payment.cc -o main
./main
```

However, that's a lot to type, so we've included a shortcut to compile and create ``main``:

```
make build
./main
```

## Run the unit tests

We've provided unit tests, which you can try with ``make test``. Use the output to help you debug any issues in your program.

# Submission checklist
1. Compiled and ran the driver (`main`).
1. Manually checked for compilation and logical errors.
1. Ensured no errors on the unit test (`make test`).
1. Followed advice from the stylechecker (`make stylecheck`).
1. Followed advice from the formatchecker to improve code readability (`make formatcheck`).

# Code evaluation
Open the terminal and navigate to the folder that contains this exercise. Assuming you have pulled the code inside of `/home/student/labex02-tuffy` and you are currently in `/home/student` you can issue the following commands

```
cd labex02-tuffy
```

You also need to navigate into the problem you want to answer. To access the files needed to answer problem 1, for example, you need to issue the following command.

```
cd prob01
```

When you want to answer another problem, you need to go back up to the parent folder and navigate into the next problem. Assuming you are currently in `prob01`, you can issue the following commands to go to the parent folder then go into another problem you want to answer; `prob02` for example.

```
cd ..
cd prob02
```

Use the `clang++` command (or ``make build``) to compile your code and the `./` command to run it. The sample code below shows how you would compile code save in `main.cc` and into the executable file `main`. Make sure you use the correct filenames required in this problem.  Take note that if you make any changes to your code, you will need to compile it first before you see changes when running it.

```
clang++ main.cc cash.cc check.cc digital_payment.cc -o main
./main
```

You can run one, two, or all the commands below to `test` your code, `stylecheck` your code's design, or `formatcheck` your work. Kindly make sure that you have compiled and executed your code before issuing any of the commands below to avoid errors.

```
make test
make stylecheck
make formatcheck
```

A faster way of running all these tests uses the `all` parameter.

```
make all
```

# Submission

We recommend pushing to Github frequently to back up your work.
