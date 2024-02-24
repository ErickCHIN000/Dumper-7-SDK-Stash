#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Int_PassiveSkills.Int_PassiveSkills_C
class IInt_PassiveSkills_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInt_PassiveSkills_C* GetDefaultObj();

	void XPMultiplier_Scavenging(bool* Used_);
	void AddXP_Scavenging(double Float);
	void XPMultiplier_Fishing(bool* Used_);
	void XPMultiplier_Thief(bool* Used_);
	void XPMultiplier_Reloading(bool* Used_);
	void XPMultiplier_Marksmanship(bool* Used_);
	void XPMultiplier_FirstAid(bool* Used_);
	void XPMultiplier_Sneaking(bool* Used_);
	void XPMultiplier_Toughness(bool* Used_);
	void XPMultiplier_Strength(bool* Used_);
	void XPMultiplier_Fitness(bool* Used_);
	void AddXP_Fishing(double Float);
	void AddXP_Thief(double Float);
	void AddXP_Reloading(double Float);
	void AddXP_Marksmanship(double Float);
	void AddXP_FirstAid(double Float);
	void AddXP_Sneaking(double Float);
	void AddXP_Toughness(double Float);
	void AddXP_Strength(double Float);
	void AddXP_Fitness(double Float);
};

}


