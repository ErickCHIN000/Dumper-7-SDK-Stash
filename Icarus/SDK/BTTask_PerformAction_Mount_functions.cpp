#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_PerformAction_Mount.BTTask_PerformAction_Mount_C
// (None)

class UClass* UBTTask_PerformAction_Mount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_PerformAction_Mount_C");

	return Clss;
}


// BTTask_PerformAction_Mount_C BTTask_PerformAction_Mount.Default__BTTask_PerformAction_Mount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_PerformAction_Mount_C* UBTTask_PerformAction_Mount_C::GetDefaultObj()
{
	static class UBTTask_PerformAction_Mount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_PerformAction_Mount_C*>(UBTTask_PerformAction_Mount_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_PerformAction_Mount.BTTask_PerformAction_Mount_C.GetMontage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPCharacter*     K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusMountCharacter*       K2Node_DynamicCast_AsIcarus_Mount_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage                       (UObjectWrapper, HasGetValueTypeHash)
// class FName                        CallFunc_GetMontageForAction_MontageSection                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMontageForAction_MontageNotify                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMontageForAction_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_GetMontageForGameplayTag_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_PerformAction_Mount_C::GetMontage(class UAnimMontage** Montage, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage, class FName CallFunc_GetMontageForAction_MontageSection, class FName CallFunc_GetMontageForAction_MontageNotify, bool CallFunc_GetMontageForAction_ReturnValue, class UAnimMontage* CallFunc_GetMontageForGameplayTag_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PerformAction_Mount_C", "GetMontage");

	Params::UBTTask_PerformAction_Mount_C_GetMontage_Params Parms{};

	Parms.K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter = K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIcarus_Mount_Character = K2Node_DynamicCast_AsIcarus_Mount_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetMontageForAction_ActionMontage = CallFunc_GetMontageForAction_ActionMontage;
	Parms.CallFunc_GetMontageForAction_MontageSection = CallFunc_GetMontageForAction_MontageSection;
	Parms.CallFunc_GetMontageForAction_MontageNotify = CallFunc_GetMontageForAction_MontageNotify;
	Parms.CallFunc_GetMontageForAction_ReturnValue = CallFunc_GetMontageForAction_ReturnValue;
	Parms.CallFunc_GetMontageForGameplayTag_ReturnValue = CallFunc_GetMontageForGameplayTag_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnim_Montage = K2Node_DynamicCast_AsAnim_Montage;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}

}


