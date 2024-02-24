#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x5F8 - 0x5F0)
// BlueprintGeneratedClass GA_CreatureAbility_Melee_SunGiant.GA_CreatureAbility_Melee_SunGiant_C
class UGA_CreatureAbility_Melee_SunGiant_C : public UGA_CreatureAbility_Melee_Ishmael_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Melee_SunGiant_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_Melee_SunGiant(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, bool K2Node_Event_bWasCancelled);
};

}


