#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x54 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_PoisionCloudOnEmpoweredRiposte.ShellUpgrade_PoisionCloudOnEmpoweredRiposte_C
class UShellUpgrade_PoisionCloudOnEmpoweredRiposte_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Percent;                                           // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShellUpgrade_PoisionCloudOnEmpoweredRiposte_C* GetDefaultObj();

	void OnAbilityGained();
	void OnAbilityLost();
	void OnRip(bool bEmpowered, class ABaseCharacter_C* ParriedChar);
	void ExecuteUbergraph_ShellUpgrade_PoisionCloudOnEmpoweredRiposte(int32 EntryPoint, bool K2Node_CustomEvent_bEmpowered, class ABaseCharacter_C* K2Node_CustomEvent_ParriedChar, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_RandomFloat_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class ABPPoisonCloud_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


