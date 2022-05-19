#include <cstring>
#include<iostream>
#include"claim.h"

using namespace std;

claim::claim() {

}
 claim::claim(const char claimid[],int type) {
	strcpy_s(Claim_ID, claimid);
	Type = type;
}
 void claim::setClaim(const char claimid[], int type, const char mid[], const char aid[]) {
	 strcpy_s(Claim_ID, claimid);
	 Type = type;
	 strcpy_s(MID, mid);
	 strcpy_s(AID, aid);
 }
void claim::Review() {

}
void claim::Approval() {

}

void claim::DisplayClaimDetails() {
	cout << "Claim ID : " << Claim_ID << endl;
	cout << "Type : " << Type << endl;
	cout << "Manager ID : " << MID << endl;
	cout << "AID  : " << AID << endl;
}
claim::~claim() {
	cout << "Claim deleted." << endl;
}

