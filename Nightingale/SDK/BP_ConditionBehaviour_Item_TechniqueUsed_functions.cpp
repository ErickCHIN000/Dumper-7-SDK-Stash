#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour_Item_TechniqueUsed.BP_ConditionBehaviour_Item_TechniqueUsed_C
// (None)

class UClass* UBP_ConditionBehaviour_Item_TechniqueUsed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_Item_TechniqueUsed_C");

	return Clss;
}


// BP_ConditionBehaviour_Item_TechniqueUsed_C BP_ConditionBehaviour_Item_TechniqueUsed.Default__BP_ConditionBehaviour_Item_TechniqueUsed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_Item_TechniqueUsed_C* UBP_ConditionBehaviour_Item_TechniqueUsed_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_Item_TechniqueUsed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_Item_TechniqueUsed_C*>(UBP_ConditionBehaviour_Item_TechniqueUsed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour_Item_TechniqueUsed.BP_ConditionBehaviour_Item_TechniqueUsed_C.OnItemTechniqueUsed
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTechniqueDataAsset>Technique                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemConstraintMatchData    CallFunc_IsItemConstraintMet_OutMatchData                        (NoDestructor)
// enum class EGetResult              CallFunc_IsItemConstraintMet_OutBranch                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_SoftObjectReference_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Item_TechniqueUsed_C::OnItemTechniqueUsed(TSoftObjectPtr<class UTechniqueDataAsset> Technique, const struct FInventoryEntry& ItemEntry, const struct FItemConstraintMatchData& CallFunc_IsItemConstraintMet_OutMatchData, enum class EGetResult CallFunc_IsItemConstraintMet_OutBranch, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_TechniqueUsed_C", "OnItemTechniqueUsed");

	Params::UBP_ConditionBehaviour_Item_TechniqueUsed_C_OnItemTechniqueUsed_Params Parms{};

	Parms.Technique = Technique;
	Parms.ItemEntry = ItemEntry;
	Parms.CallFunc_IsItemConstraintMet_OutMatchData = CallFunc_IsItemConstraintMet_OutMatchData;
	Parms.CallFunc_IsItemConstraintMet_OutBranch = CallFunc_IsItemConstraintMet_OutBranch;
	Parms.CallFunc_EqualEqual_SoftObjectReference_ReturnValue = CallFunc_EqualEqual_SoftObjectReference_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Item_TechniqueUsed.BP_ConditionBehaviour_Item_TechniqueUsed_C.GetDebugText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Description                                                      (Parm, OutParm)
// struct FItemConstraintPresentationDataCallFunc_GetItemConstraintUIData_OutPresentationData             (None)
// struct FSoftObjectPath             CallFunc_Conv_SoftObjRefToSoftObjPath_ReturnValue                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_ConditionBehaviour_Item_TechniqueUsed_C::GetDebugText(class FText* Description, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, const struct FSoftObjectPath& CallFunc_Conv_SoftObjRefToSoftObjPath_ReturnValue, const class FString& CallFunc_BreakSoftObjectPath_PathString, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetBaseFilename_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_TechniqueUsed_C", "GetDebugText");

	Params::UBP_ConditionBehaviour_Item_TechniqueUsed_C_GetDebugText_Params Parms{};

	Parms.CallFunc_GetItemConstraintUIData_OutPresentationData = CallFunc_GetItemConstraintUIData_OutPresentationData;
	Parms.CallFunc_Conv_SoftObjRefToSoftObjPath_ReturnValue = CallFunc_Conv_SoftObjRefToSoftObjPath_ReturnValue;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function BP_ConditionBehaviour_Item_TechniqueUsed.BP_ConditionBehaviour_Item_TechniqueUsed_C.OnConditionRemoved
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Item_TechniqueUsed_C::OnConditionRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_TechniqueUsed_C", "OnConditionRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Item_TechniqueUsed.BP_ConditionBehaviour_Item_TechniqueUsed_C.SetupCondition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Item_TechniqueUsed_C::SetupCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_TechniqueUsed_C", "SetupCondition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Item_TechniqueUsed.BP_ConditionBehaviour_Item_TechniqueUsed_C.InitializeFromPersistence
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FConditionPersistentData    UpdatedProgressData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_ConditionBehaviour_Item_TechniqueUsed_C::InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_TechniqueUsed_C", "InitializeFromPersistence");

	Params::UBP_ConditionBehaviour_Item_TechniqueUsed_C_InitializeFromPersistence_Params Parms{};

	Parms.UpdatedProgressData = UpdatedProgressData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Item_TechniqueUsed.BP_ConditionBehaviour_Item_TechniqueUsed_C.ExecuteUbergraph_BP_ConditionBehaviour_Item_TechniqueUsed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState_2                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditionPersistentData    K2Node_Event_UpdatedProgressData                                 (ConstParm, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Item_TechniqueUsed_C::ExecuteUbergraph_BP_ConditionBehaviour_Item_TechniqueUsed(int32 EntryPoint, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_2, bool CallFunc_IsValid_ReturnValue, const struct FConditionPersistentData& K2Node_Event_UpdatedProgressData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_TechniqueUsed_C", "ExecuteUbergraph_BP_ConditionBehaviour_Item_TechniqueUsed");

	Params::UBP_ConditionBehaviour_Item_TechniqueUsed_C_ExecuteUbergraph_BP_ConditionBehaviour_Item_TechniqueUsed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetConditionPlayerState_PlayerState = CallFunc_GetConditionPlayerState_PlayerState;
	Parms.CallFunc_GetConditionPlayerState_PlayerState_1 = CallFunc_GetConditionPlayerState_PlayerState_1;
	Parms.CallFunc_GetConditionPlayerState_PlayerState_2 = CallFunc_GetConditionPlayerState_PlayerState_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_UpdatedProgressData = K2Node_Event_UpdatedProgressData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


