#include <iostream>
#include "customer/customer.hpp"
#include "bank/bank.hpp"
using namespace std;

int main() {
	srand(time(0));

	Customer c1{"John"};
	c1.setPin(1234);

	Customer c2{"Karl"};
	Customer c3{"Peter"};
	Customer c4{"Klaus"};

	Bank b{"CPP Bank"};

	b.addCustomer(c1);
	b.addCustomer(c2);
	b.addCustomer(c3);
	b.addCustomer(c4);

	cout << b << endl;

	return 0;
}
