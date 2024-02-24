#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_Mount_PlayMontage.BTT_Mount_PlayMontage_C
// (None)

class UClass* UBTT_Mount_PlayMontage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_Mount_PlayMontage_C");

	return Clss;
}


// BTT_Mount_PlayMontage_C BTT_Mount_PlayMontage.Default__BTT_Mount_PlayMontage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_Mount_PlayMontage_C* UBTT_Mount_PlayMontage_C::GetDefaultObj()
{
	static class UBTT_Mount_PlayMontage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_Mount_PlayMontage_C*>(UBTT_Mount_PlayMontage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_Mount_PlayMontage.BTT_Mount_PlayMontage_C.GetMontage
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

void UBTT_Mount_PlayMontage_C::GetMontage(class UAnimMontage** Montage, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage, class FName CallFunc_GetMontageForAction_MontageSection, class FName CallFunc_GetMontageForAction_MontageNotify, bool CallFunc_GetMontageForAction_ReturnValue, class UAnimMontage* CallFunc_GetMontageForGameplayTag_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_Mount_PlayMontage_C", "GetMontage");

	Params::UBTT_Mount_PlayMontage_C_GetMontage_Params Parms{};

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


