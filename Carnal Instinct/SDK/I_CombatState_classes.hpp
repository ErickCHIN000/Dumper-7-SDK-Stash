#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass I_CombatState.I_CombatState_C
class II_CombatState_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class II_CombatState_C* GetDefaultObj();

	void ToggleIsInCombat(bool* Dummy);
	void SetIsInCombat(bool Value, bool* Dummy);
	void GetCombatType(enum class E_CombatType* Type);
	void GetIsInCombat(bool* Value);
};

}


