#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Modifier_TemperatureClear.BP_Modifier_TemperatureClear_C
// (None)

class UClass* UBP_Modifier_TemperatureClear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Modifier_TemperatureClear_C");

	return Clss;
}


// BP_Modifier_TemperatureClear_C BP_Modifier_TemperatureClear.Default__BP_Modifier_TemperatureClear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Modifier_TemperatureClear_C* UBP_Modifier_TemperatureClear_C::GetDefaultObj()
{
	static class UBP_Modifier_TemperatureClear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Modifier_TemperatureClear_C*>(UBP_Modifier_TemperatureClear_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Modifier_TemperatureClear.BP_Modifier_TemperatureClear_C.TemperatureUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewTemperature                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Modifier_TemperatureClear_C::TemperatureUpdated(int32 NewTemperature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_TemperatureClear_C", "TemperatureUpdated");

	Params::UBP_Modifier_TemperatureClear_C_TemperatureUpdated_Params Parms{};

	Parms.NewTemperature = NewTemperature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Modifier_TemperatureClear.BP_Modifier_TemperatureClear_C.TriggerCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CanHeal_CanHeal                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Modifier_TemperatureClear_C::TriggerCheck(bool CallFunc_CanHeal_CanHeal, bool CallFunc_EqualEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_TemperatureClear_C", "TriggerCheck");

	Params::UBP_Modifier_TemperatureClear_C_TriggerCheck_Params Parms{};

	Parms.CallFunc_CanHeal_CanHeal = CallFunc_CanHeal_CanHeal;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Modifier_TemperatureClear.BP_Modifier_TemperatureClear_C.CanHeal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanHeal                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusStatContainer*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerCharacterState*       CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetInternalTemperature_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Modifier_TemperatureClear_C::CanHeal(bool* CanHeal, class AActor* CallFunc_GetOwner_ReturnValue, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, class UPlayerCharacterState* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetInternalTemperature_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_TemperatureClear_C", "CanHeal");

	Params::UBP_Modifier_TemperatureClear_C_CanHeal_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInternalTemperature_ReturnValue = CallFunc_GetInternalTemperature_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanHeal != nullptr)
		*CanHeal = Parms.CanHeal;

}


// Function BP_Modifier_TemperatureClear.BP_Modifier_TemperatureClear_C.ModifierApplied
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusCharacter*            K2Node_DynamicCast_AsIcarus_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ModifierApplied_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerCharacterState*       K2Node_DynamicCast_AsPlayer_Character_State                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Modifier_TemperatureClear_C::ModifierApplied(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ModifierApplied_ReturnValue, class UPlayerCharacterState* K2Node_DynamicCast_AsPlayer_Character_State, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_TemperatureClear_C", "ModifierApplied");

	Params::UBP_Modifier_TemperatureClear_C_ModifierApplied_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Character = K2Node_DynamicCast_AsIcarus_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ModifierApplied_ReturnValue = CallFunc_ModifierApplied_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character_State = K2Node_DynamicCast_AsPlayer_Character_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


