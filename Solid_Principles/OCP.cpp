//w/o 
#include <iostream>
using namespace std;

enum class CustomerType {
    Regular,
    Premium,
    Newbie
};

class DiscountCalculator {
public:
    double CalculateDiscount(double price, CustomerType type) {
        switch (type) {
            case CustomerType::Regular:
                return price * 0.1;  // 10% discount
            case CustomerType::Premium:
                return price * 0.3;  // 30% discount
            case CustomerType::Newbie:
                return price * 0.05; // 5% discount
            default:
                throw invalid_argument("Unknown customer type");
        }
    }
};

int main() {
    DiscountCalculator calc;
    cout << "Discount: " << calc.CalculateDiscount(1000, CustomerType::Premium) << endl;
    return 0;
}


// with
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

// Abstract base class
class DiscountStrategy {
public:
    virtual double Calculate(double price) = 0;
    virtual ~DiscountStrategy() {}
};

// Concrete strategy: Regular
class RegularDiscount : public DiscountStrategy {
public:
    double Calculate(double price) override {
        return price * 0.1;
    }
};

// Concrete strategy: Premium
class PremiumDiscount : public DiscountStrategy {
public:
    double Calculate(double price) override {
        return price * 0.3;
    }
};

// Concrete strategy: Newbie
class NewbieDiscount : public DiscountStrategy {
public:
    double Calculate(double price) override {
        return price * 0.05;
    }
};

// Discount Calculator class
class DiscountCalculator {
private:
    unique_ptr<DiscountStrategy> strategy;
public:
    DiscountCalculator(unique_ptr<DiscountStrategy> s) : strategy(move(s)) {}

    double CalculateDiscount(double price) {
        return strategy->Calculate(price);
    }
};

int main() {
    DiscountCalculator calc1(make_unique<RegularDiscount>());
    cout << "Regular Discount: " << calc1.CalculateDiscount(1000) << endl;

    DiscountCalculator calc2(make_unique<PremiumDiscount>());
    cout << "Premium Discount: " << calc2.CalculateDiscount(1000) << endl;

    DiscountCalculator calc3(make_unique<NewbieDiscount>());
    cout << "Newbie Discount: " << calc3.CalculateDiscount(1000) << endl;

    return 0;
}


















//////////////////////////////
#include <iostream>
using namespace std;

// Abstract base class
class DiscountStrategy {
public:
    virtual double Calculate(double price) = 0;
    virtual ~DiscountStrategy() {}
};

// Concrete strategy: Regular
class RegularDiscount : public DiscountStrategy {
public:
    double Calculate(double price) override {
        return price * 0.1;  // 10% discount
    }
};

// Concrete strategy: Premium
class PremiumDiscount : public DiscountStrategy {
public:
    double Calculate(double price) override {
        return price * 0.3;  // 30% discount
    }
};

// Concrete strategy: Newbie
class NewbieDiscount : public DiscountStrategy {
public:
    double Calculate(double price) override {
        return price * 0.05;  // 5% discount
    }
};

// Discount Calculator
class DiscountCalculator {
private:
    DiscountStrategy* strategy;  // pointer to any discount strategy

public:
    DiscountCalculator(DiscountStrategy* s) {
        strategy = s;
    }

    double CalculateDiscount(double price) {
        return strategy->Calculate(price);
    }
};

int main() {
    RegularDiscount regular;
    PremiumDiscount premium;
    NewbieDiscount newbie;

    DiscountCalculator calc1(&regular);
    cout << "Regular Discount: " << calc1.CalculateDiscount(1000) << endl;

    DiscountCalculator calc2(&premium);
    cout << "Premium Discount: " << calc2.CalculateDiscount(1000) << endl;

    DiscountCalculator calc3(&newbie);
    cout << "Newbie Discount: " << calc3.CalculateDiscount(1000) << endl;

    return 0;
}
