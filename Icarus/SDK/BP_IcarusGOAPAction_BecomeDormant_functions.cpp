#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_BecomeDormant.BP_IcarusGOAPAction_BecomeDormant_C
// (None)

class UClass* UBP_IcarusGOAPAction_BecomeDormant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_BecomeDormant_C");

	return Clss;
}


// BP_IcarusGOAPAction_BecomeDormant_C BP_IcarusGOAPAction_BecomeDormant.Default__BP_IcarusGOAPAction_BecomeDormant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_BecomeDormant_C* UBP_IcarusGOAPAction_BecomeDormant_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_BecomeDormant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_BecomeDormant_C*>(UBP_IcarusGOAPAction_BecomeDormant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_BecomeDormant.BP_IcarusGOAPAction_BecomeDormant_C.ActionReset
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionReset_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusNPCGOAPCharacter*     CallFunc_GetNPCCharacter_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Montage_GetCurrentSection_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateMotivationValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UBP_IcarusGOAPAction_BecomeDormant_C>CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage                       (UObjectWrapper, HasGetValueTypeHash)
// class FName                        CallFunc_GetMontageForAction_MontageSection                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMontageForAction_MontageNotify                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMontageForAction_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_BecomeDormant_C::ActionReset(bool Interrupted, bool CallFunc_ActionReset_ReturnValue, class AIcarusNPCGOAPCharacter* CallFunc_GetNPCCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class FName CallFunc_Montage_GetCurrentSection_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TSoftClassPtr<class UBP_IcarusGOAPAction_BecomeDormant_C> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage, class FName CallFunc_GetMontageForAction_MontageSection, class FName CallFunc_GetMontageForAction_MontageNotify, bool CallFunc_GetMontageForAction_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_BecomeDormant_C", "ActionReset");

	Params::UBP_IcarusGOAPAction_BecomeDormant_C_ActionReset_Params Parms{};

	Parms.Interrupted = Interrupted;
	Parms.CallFunc_ActionReset_ReturnValue = CallFunc_ActionReset_ReturnValue;
	Parms.CallFunc_GetNPCCharacter_ReturnValue = CallFunc_GetNPCCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_GetCurrentSection_ReturnValue = CallFunc_Montage_GetCurrentSection_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_UpdateMotivationValue_ReturnValue = CallFunc_UpdateMotivationValue_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.CallFunc_GetMontageForAction_ActionMontage = CallFunc_GetMontageForAction_ActionMontage;
	Parms.CallFunc_GetMontageForAction_MontageSection = CallFunc_GetMontageForAction_MontageSection;
	Parms.CallFunc_GetMontageForAction_MontageNotify = CallFunc_GetMontageForAction_MontageNotify;
	Parms.CallFunc_GetMontageForAction_ReturnValue = CallFunc_GetMontageForAction_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnim_Montage = K2Node_DynamicCast_AsAnim_Montage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_BecomeDormant.BP_IcarusGOAPAction_BecomeDormant_C.IsInRange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInRange_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_BecomeDormant_C::IsInRange(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_BecomeDormant_C", "IsInRange");

	Params::UBP_IcarusGOAPAction_BecomeDormant_C_IsInRange_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_IsInRange_ReturnValue = CallFunc_IsInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_BecomeDormant.BP_IcarusGOAPAction_BecomeDormant_C.IsLocationValidForBurrow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPAction_BecomeDormant_C::IsLocationValidForBurrow(bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_BecomeDormant_C", "IsLocationValidForBurrow");

	Params::UBP_IcarusGOAPAction_BecomeDormant_C_IsLocationValidForBurrow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function BP_IcarusGOAPAction_BecomeDormant.BP_IcarusGOAPAction_BecomeDormant_C.CheckContextualPreconditions
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocationValidForBurrow_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckContextualPreconditions_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_BecomeDormant_C::CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsLocationValidForBurrow_IsValid, bool CallFunc_CheckContextualPreconditions_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_BecomeDormant_C", "CheckContextualPreconditions");

	Params::UBP_IcarusGOAPAction_BecomeDormant_C_CheckContextualPreconditions_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_IsLocationValidForBurrow_IsValid = CallFunc_IsLocationValidForBurrow_IsValid;
	Parms.CallFunc_CheckContextualPreconditions_ReturnValue = CallFunc_CheckContextualPreconditions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


