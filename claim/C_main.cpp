
#include <iostream>
#include<cstring>
#include"claim.h"

using namespace std;

int main() {
	claim *claim1 = new claim();
	claim1->claims("cl001", "3", "M001", "A001");
	claim1->DisplayClaimDetails();
	return 0;
}
