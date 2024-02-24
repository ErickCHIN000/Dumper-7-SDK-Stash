#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x5F8 - 0x5F0)
// BlueprintGeneratedClass GA_CreatureAbility_Melee_04_Giant_Tree_Club.GA_CreatureAbility_Melee_04_Giant_Tree_Club_C
class UGA_CreatureAbility_Melee_04_Giant_Tree_Club_C : public UGA_CreatureAbility_Melee_Giant_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Melee_04_Giant_Tree_Club_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_Melee_04_Giant_Tree_Club(int32 EntryPoint, int32 Temp_int_Variable, const struct FGameplayTag& Temp_struct_Variable, bool K2Node_Event_bWasCancelled, class ABP_Creature_Wildlife_HillGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


