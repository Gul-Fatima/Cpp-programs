// Task: Implement a system where different algorithms or behaviors
// can be selected at runtime.
// o Example Scenario: A payment system where different payment
// methods (credit card, PayPal, bank transfer) are selected dynamically
// based on user preference.

#include <iostream>
#include <string>
#include <memory>

// Payment Strategy Interface
class IPaymentStrategy {
public:
    virtual void Pay(double amount) = 0;
    virtual ~IPaymentStrategy() {}
};

// Concrete Strategy: Credit Card Payment
class CreditCardPayment : public IPaymentStrategy {
public:
    void Pay(double amount) override {
        std::cout << "Paid " << amount << " using Credit Card.\n";
    }
};

// Concrete Strategy: PayPal Payment
class PayPalPayment : public IPaymentStrategy {
public:
    void Pay(double amount) override {
        std::cout << "Paid " << amount << " using PayPal.\n";
    }
};

// Concrete Strategy: Bank Transfer Payment
class BankTransferPayment : public IPaymentStrategy {
public:
    void Pay(double amount) override {
        std::cout << "Paid " << amount << " using Bank Transfer.\n";
    }
};

// Context Class
class PaymentContext {
    IPaymentStrategy* paymentStrategy = nullptr;
public:
    void SetPaymentMethod(IPaymentStrategy* strategy) {
        paymentStrategy = strategy;
    }

    void Pay(double amount) {
        if (paymentStrategy) {
            paymentStrategy->Pay(amount);
        } else {
            std::cout << "Payment method not selected.\n";
        }
    }
};

int main() {
    PaymentContext paymentContext;
    std::string method;

    std::cout << "Select payment method (CreditCard, PayPal, BankTransfer): ";
    std::getline(std::cin, method);

    // Convert to lowercase for case-insensitive comparison
    for (auto& c : method) c = tolower(c);

    // Create payment strategy based on input
    CreditCardPayment cc;
    PayPalPayment pp;
    BankTransferPayment bt;

    if (method == "creditcard") {
        paymentContext.SetPaymentMethod(&cc);
    } else if (method == "paypal") {
        paymentContext.SetPaymentMethod(&pp);
    } else if (method == "banktransfer") {
        paymentContext.SetPaymentMethod(&bt);
    } else {
        std::cout << "Invalid payment method.\n";
        return 1;
    }

    paymentContext.Pay(100.0);

    return 0;
}
