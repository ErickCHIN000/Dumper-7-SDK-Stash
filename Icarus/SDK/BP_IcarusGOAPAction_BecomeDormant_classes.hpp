#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x80 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_BecomeDormant.BP_IcarusGOAPAction_BecomeDormant_C
class UBP_IcarusGOAPAction_BecomeDormant_C : public UBP_IcarusGOAPAction_Base_C
{
public:

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_BecomeDormant_C* GetDefaultObj();

	bool ActionReset(bool Interrupted, bool CallFunc_ActionReset_ReturnValue, class AIcarusNPCGOAPCharacter* CallFunc_GetNPCCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class FName CallFunc_Montage_GetCurrentSection_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TSoftClassPtr<class UBP_IcarusGOAPAction_BecomeDormant_C> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage, class FName CallFunc_GetMontageForAction_MontageSection, class FName CallFunc_GetMontageForAction_MontageNotify, bool CallFunc_GetMontageForAction_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess);
	bool IsInRange(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsInRange_ReturnValue);
	void IsLocationValidForBurrow(bool* IsValid);
	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsLocationValidForBurrow_IsValid, bool CallFunc_CheckContextualPreconditions_ReturnValue);
};

}


