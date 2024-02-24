#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x520 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_Evade.GA_CreatureAbility_Evade_C
class UGA_CreatureAbility_Evade_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       RollDistance;                                      // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Evade_C* GetDefaultObj();

	void FireEQS(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetNamedParam_Value_ImplicitCast, float CallFunc_SetNamedParam_Value_ImplicitCast_1);
	void ExecuteUbergraph_GA_CreatureAbility_Evade(int32 EntryPoint);
};

}


