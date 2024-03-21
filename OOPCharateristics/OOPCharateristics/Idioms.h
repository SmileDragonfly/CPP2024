#pragma once
// If a class defines any one of the following, it should define all three:
// 1. Copy constructor
// 2. Copy assignment operator
// 3. Destructor
class CRuleOfThree {
public:
	CRuleOfThree() = default;
	CRuleOfThree(const CRuleOfThree& other) = default;
	CRuleOfThree& operator=(const CRuleOfThree& other) = default;
	~CRuleOfThree() = default;
};