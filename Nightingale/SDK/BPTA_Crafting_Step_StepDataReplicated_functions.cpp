#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPTA_Crafting_Step_StepDataReplicated.BPTA_Crafting_Step_StepDataReplicated_C
// (Actor)

class UClass* ABPTA_Crafting_Step_StepDataReplicated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPTA_Crafting_Step_StepDataReplicated_C");

	return Clss;
}


// BPTA_Crafting_Step_StepDataReplicated_C BPTA_Crafting_Step_StepDataReplicated.Default__BPTA_Crafting_Step_StepDataReplicated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPTA_Crafting_Step_StepDataReplicated_C* ABPTA_Crafting_Step_StepDataReplicated_C::GetDefaultObj()
{
	static class ABPTA_Crafting_Step_StepDataReplicated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPTA_Crafting_Step_StepDataReplicated_C*>(ABPTA_Crafting_Step_StepDataReplicated_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPTA_Crafting_Step_StepDataReplicated.BPTA_Crafting_Step_StepDataReplicated_C.ValidateClientTargetData
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsTargetDataValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress ServerCIPData                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FString                      CallFunc_DynamicStructsToString_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_DynamicStructsToString_ReturnValue_1                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindCraftForID_BP_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindCraftForID_BP_CraftInProgressIndex                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Crafting_Step_StepDataReplicated_C::ValidateClientTargetData(struct FGameplayAbilityTargetDataHandle& Data, bool* bIsTargetDataValid, const struct FS_Crafting_CraftInProgress& ServerCIPData, const class FString& CallFunc_DynamicStructsToString_ReturnValue, const class FString& CallFunc_DynamicStructsToString_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Crafting_Step_StepDataReplicated_C", "ValidateClientTargetData");

	Params::ABPTA_Crafting_Step_StepDataReplicated_C_ValidateClientTargetData_Params Parms{};

	Parms.Data = Data;
	Parms.ServerCIPData = ServerCIPData;
	Parms.CallFunc_DynamicStructsToString_ReturnValue = CallFunc_DynamicStructsToString_ReturnValue;
	Parms.CallFunc_DynamicStructsToString_ReturnValue_1 = CallFunc_DynamicStructsToString_ReturnValue_1;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_FindCraftForID_BP_Success = CallFunc_FindCraftForID_BP_Success;
	Parms.CallFunc_FindCraftForID_BP_CraftInProgressIndex = CallFunc_FindCraftForID_BP_CraftInProgressIndex;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsTargetDataValid != nullptr)
		*bIsTargetDataValid = Parms.bIsTargetDataValid;

}


// Function BPTA_Crafting_Step_StepDataReplicated.BPTA_Crafting_Step_StepDataReplicated_C.ConfirmAndSendTargetData
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, OutParm)
// struct FHitResult                  CallFunc_MakeHitResult_ReturnValue                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromHitResult_ReturnValue              (None)

void ABPTA_Crafting_Step_StepDataReplicated_C::ConfirmAndSendTargetData(struct FGameplayAbilityTargetDataHandle* TargetData, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Crafting_Step_StepDataReplicated_C", "ConfirmAndSendTargetData");

	Params::ABPTA_Crafting_Step_StepDataReplicated_C_ConfirmAndSendTargetData_Params Parms{};

	Parms.CallFunc_MakeHitResult_ReturnValue = CallFunc_MakeHitResult_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromHitResult_ReturnValue = CallFunc_AbilityTargetDataFromHitResult_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetData != nullptr)
		*TargetData = std::move(Parms.TargetData);

}


// Function BPTA_Crafting_Step_StepDataReplicated.BPTA_Crafting_Step_StepDataReplicated_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPTA_Crafting_Step_StepDataReplicated_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Crafting_Step_StepDataReplicated_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_Crafting_Step_StepDataReplicated.BPTA_Crafting_Step_StepDataReplicated_C.Timeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTA_Crafting_Step_StepDataReplicated_C::Timeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Crafting_Step_StepDataReplicated_C", "Timeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_Crafting_Step_StepDataReplicated.BPTA_Crafting_Step_StepDataReplicated_C.CheckForDataReplication
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTA_Crafting_Step_StepDataReplicated_C::CheckForDataReplication()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Crafting_Step_StepDataReplicated_C", "CheckForDataReplication");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_Crafting_Step_StepDataReplicated.BPTA_Crafting_Step_StepDataReplicated_C.InvalidateTimers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPTA_Crafting_Step_StepDataReplicated_C::InvalidateTimers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Crafting_Step_StepDataReplicated_C", "InvalidateTimers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPTA_Crafting_Step_StepDataReplicated.BPTA_Crafting_Step_StepDataReplicated_C.ExecuteUbergraph_BPTA_Crafting_Step_StepDataReplicated
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_DynamicStructsToString_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindCraftForID_BP_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindCraftForID_BP_CraftInProgressIndex                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class FString                      CallFunc_DynamicStructsToString_ReturnValue_1                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_Crafting_Step_StepDataReplicated_C::ExecuteUbergraph_BPTA_Crafting_Step_StepDataReplicated(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_DynamicStructsToString_ReturnValue, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item, const class FString& CallFunc_DynamicStructsToString_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_NotEqual_StriStri_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_Crafting_Step_StepDataReplicated_C", "ExecuteUbergraph_BPTA_Crafting_Step_StepDataReplicated");

	Params::ABPTA_Crafting_Step_StepDataReplicated_C_ExecuteUbergraph_BPTA_Crafting_Step_StepDataReplicated_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DynamicStructsToString_ReturnValue = CallFunc_DynamicStructsToString_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_FindCraftForID_BP_Success = CallFunc_FindCraftForID_BP_Success;
	Parms.CallFunc_FindCraftForID_BP_CraftInProgressIndex = CallFunc_FindCraftForID_BP_CraftInProgressIndex;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_DynamicStructsToString_ReturnValue_1 = CallFunc_DynamicStructsToString_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue = CallFunc_NotEqual_StriStri_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


