#pragma once
class claim {
private:
	char Claim_ID[10];
	char Type[3];
	char MID[6];
	char AID[6];

public:
	void claims(const char claimid[], const char type[], const char mid[], const char aid[]);
	void Review();
	void Approval();
	void DisplayClaimDetails();
};