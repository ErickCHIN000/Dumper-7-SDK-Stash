#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x520 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_Exit.GA_CreatureAbility_Exit_C
class UGA_CreatureAbility_Exit_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       LifespanPadding;                                   // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Exit_C* GetDefaultObj();

	void CreatureAbilityMontageStart(TArray<struct FGameplayTag>& K2Node_MakeArray_Array);
	void CreatureAbilityEnd();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_Exit(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool K2Node_Event_bWasCancelled, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


