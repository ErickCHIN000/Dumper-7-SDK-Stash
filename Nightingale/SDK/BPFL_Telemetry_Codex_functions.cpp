#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Telemetry_Codex.BPFL_Telemetry_Codex_C
// (None)

class UClass* UBPFL_Telemetry_Codex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Telemetry_Codex_C");

	return Clss;
}


// BPFL_Telemetry_Codex_C BPFL_Telemetry_Codex.Default__BPFL_Telemetry_Codex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Telemetry_Codex_C* UBPFL_Telemetry_Codex_C::GetDefaultObj()
{
	static class UBPFL_Telemetry_Codex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Telemetry_Codex_C*>(UBPFL_Telemetry_Codex_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Telemetry_Codex.BPFL_Telemetry_Codex_C.Telemetry Codex Viewed
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                Player_State                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCodexBaseDataAsset*         Codex_Data_Asset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      UnlockedCodices                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UCodexTrackerComponent*      CodexTrackerComponent                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCodexTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCodexSubentry              CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTagName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexTrackerInterface>CallFunc_GetUnlockedSubentryTags_self_CastInput                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetUnlockedSubentryTags_OutUnlockedSubentryTags         (None)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr                               (None)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_1                             (None)
// TArray<struct FMetricsEventAttr>   K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)

void UBPFL_Telemetry_Codex_C::Telemetry_Codex_Viewed(class APlayerState* Player_State, class UCodexBaseDataAsset* Codex_Data_Asset, class UObject* __WorldContext, const class FString& UnlockedCodices, class UCodexTrackerComponent* CodexTrackerComponent, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCodexSubentry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TScriptInterface<class ICodexTrackerInterface> CallFunc_GetUnlockedSubentryTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetUnlockedSubentryTags_OutUnlockedSubentryTags, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_HasTag_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_1, TArray<struct FMetricsEventAttr>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Telemetry_Codex_C", "Telemetry Codex Viewed");

	Params::UBPFL_Telemetry_Codex_C_Telemetry_Codex_Viewed_Params Parms{};

	Parms.Player_State = Player_State;
	Parms.Codex_Data_Asset = Codex_Data_Asset;
	Parms.__WorldContext = __WorldContext;
	Parms.UnlockedCodices = UnlockedCodices;
	Parms.CodexTrackerComponent = CodexTrackerComponent;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetTagName_ReturnValue = CallFunc_GetTagName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetUnlockedSubentryTags_self_CastInput = CallFunc_GetUnlockedSubentryTags_self_CastInput;
	Parms.CallFunc_GetUnlockedSubentryTags_OutUnlockedSubentryTags = CallFunc_GetUnlockedSubentryTags_OutUnlockedSubentryTags;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.K2Node_MakeStruct_MetricsEventAttr = K2Node_MakeStruct_MetricsEventAttr;
	Parms.K2Node_MakeStruct_MetricsEventAttr_1 = K2Node_MakeStruct_MetricsEventAttr_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


