#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass I_AbilityComponent.I_AbilityComponent_C
class II_AbilityComponent_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class II_AbilityComponent_C* GetDefaultObj();

	void GetCastingSpeed(float* Value);
	void GetMagicDamage(float* Value);
	void CanCastAbility(bool* Result);
};

}


