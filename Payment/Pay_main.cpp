#include <iostream>
#include<cstring>
#include "Payment.h"

using namespace std;
int main();
{
    
    Payment *Payment1 = new Payment;
    Payment1->Payment("PM456" , "Cash" , 15000);
    Payment1 ->displayPayment();
    return 0;
}