#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RewardBehaviour_Codex.BP_RewardBehaviour_Codex_C
// (None)

class UClass* UBP_RewardBehaviour_Codex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RewardBehaviour_Codex_C");

	return Clss;
}


// BP_RewardBehaviour_Codex_C BP_RewardBehaviour_Codex.Default__BP_RewardBehaviour_Codex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RewardBehaviour_Codex_C* UBP_RewardBehaviour_Codex_C::GetDefaultObj()
{
	static class UBP_RewardBehaviour_Codex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RewardBehaviour_Codex_C*>(UBP_RewardBehaviour_Codex_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RewardBehaviour_Codex.BP_RewardBehaviour_Codex_C.RewardCodex
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ContextObject                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CodexId                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCodexTrackerComponent*      CodexTrackerComponent                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetCodexAssetUniqueId_OutUniqueID                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UCodexTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FGuid                       Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidCodexReference_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexTrackerInterface>CallFunc_GrantCodexEntry_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Codex_C::RewardCodex(class APlayerState* PlayerState, class UObject* ContextObject, const struct FGuid& CodexId, class UCodexTrackerComponent* CodexTrackerComponent, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const struct FGuid& CallFunc_GetCodexAssetUniqueId_OutUniqueID, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FGuid& Temp_struct_Variable, bool CallFunc_IsValidCodexReference_ReturnValue, TScriptInterface<class ICodexTrackerInterface> CallFunc_GrantCodexEntry_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Codex_C", "RewardCodex");

	Params::UBP_RewardBehaviour_Codex_C_RewardCodex_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.ContextObject = ContextObject;
	Parms.CodexId = CodexId;
	Parms.CodexTrackerComponent = CodexTrackerComponent;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_GetCodexAssetUniqueId_OutUniqueID = CallFunc_GetCodexAssetUniqueId_OutUniqueID;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValidCodexReference_ReturnValue = CallFunc_IsValidCodexReference_ReturnValue;
	Parms.CallFunc_GrantCodexEntry_self_CastInput = CallFunc_GrantCodexEntry_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RewardBehaviour_Codex.BP_RewardBehaviour_Codex_C.GetDebugText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        DebugText                                                        (Parm, OutParm)
// class FString                      CallFunc_GetObjectNameOrNone_Name                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_RewardBehaviour_Codex_C::GetDebugText(class FText* DebugText, const class FString& CallFunc_GetObjectNameOrNone_Name, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Codex_C", "GetDebugText");

	Params::UBP_RewardBehaviour_Codex_C_GetDebugText_Params Parms{};

	Parms.CallFunc_GetObjectNameOrNone_Name = CallFunc_GetObjectNameOrNone_Name;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DebugText != nullptr)
		*DebugText = Parms.DebugText;

}


// Function BP_RewardBehaviour_Codex.BP_RewardBehaviour_Codex_C.ApplyReward
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     SenderContextObject                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Codex_C::ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Codex_C", "ApplyReward");

	Params::UBP_RewardBehaviour_Codex_C_ApplyReward_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.SenderContextObject = SenderContextObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RewardBehaviour_Codex.BP_RewardBehaviour_Codex_C.ExecuteUbergraph_BP_RewardBehaviour_Codex
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_Event_PlayerState                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_SenderContextObject                                 (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Codex_C::ExecuteUbergraph_BP_RewardBehaviour_Codex(int32 EntryPoint, class APlayerState* K2Node_Event_PlayerState, class UObject* K2Node_Event_SenderContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Codex_C", "ExecuteUbergraph_BP_RewardBehaviour_Codex");

	Params::UBP_RewardBehaviour_Codex_C_ExecuteUbergraph_BP_RewardBehaviour_Codex_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayerState = K2Node_Event_PlayerState;
	Parms.K2Node_Event_SenderContextObject = K2Node_Event_SenderContextObject;

	UObject::ProcessEvent(Func, &Parms);

}

}


