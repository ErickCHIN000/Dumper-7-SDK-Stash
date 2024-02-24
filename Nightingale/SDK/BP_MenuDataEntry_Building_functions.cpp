#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuDataEntry_Building.BP_MenuDataEntry_Building_C
// (None)

class UClass* UBP_MenuDataEntry_Building_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuDataEntry_Building_C");

	return Clss;
}


// BP_MenuDataEntry_Building_C BP_MenuDataEntry_Building.Default__BP_MenuDataEntry_Building_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuDataEntry_Building_C* UBP_MenuDataEntry_Building_C::GetDefaultObj()
{
	static class UBP_MenuDataEntry_Building_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuDataEntry_Building_C*>(UBP_MenuDataEntry_Building_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuDataEntry_Building.BP_MenuDataEntry_Building_C.TogglePinnedState
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_HUDGoalTrackingComponent_C*CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    CallFunc_GetStructureAssetReference_ReturnValue                  (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlocked_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPinned_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_UI_GoalTracking_C>CallFunc_TrackBuildingEntity_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuDataEntry_Building_C::TogglePinnedState(class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, const struct FStructureAssetReference& CallFunc_GetStructureAssetReference_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_IsPinned_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IBPI_UI_GoalTracking_C> CallFunc_TrackBuildingEntity_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Building_C", "TogglePinnedState");

	Params::UBP_MenuDataEntry_Building_C_TogglePinnedState_Params Parms{};

	Parms.CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent = CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent;
	Parms.CallFunc_GetStructureAssetReference_ReturnValue = CallFunc_GetStructureAssetReference_ReturnValue;
	Parms.CallFunc_IsUnlocked_ReturnValue = CallFunc_IsUnlocked_ReturnValue;
	Parms.CallFunc_IsPinned_ReturnValue = CallFunc_IsPinned_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_TrackBuildingEntity_self_CastInput = CallFunc_TrackBuildingEntity_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuDataEntry_Building.BP_MenuDataEntry_Building_C.IsPinned
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDGoalTrackingComponent_C*CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_UI_GoalTracking_C>K2Node_DynamicCast_AsBPI_UI_Goal_Tracking                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEntityPinned_IsPinned                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_MenuDataEntry_Building_C::IsPinned(const struct FGuid& CallFunc_GetID_ReturnValue, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, const class FString& CallFunc_Conv_GuidToString_ReturnValue, TScriptInterface<class IBPI_UI_GoalTracking_C> K2Node_DynamicCast_AsBPI_UI_Goal_Tracking, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsEntityPinned_IsPinned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Building_C", "IsPinned");

	Params::UBP_MenuDataEntry_Building_C_IsPinned_Params Parms{};

	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent = CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_UI_Goal_Tracking = K2Node_DynamicCast_AsBPI_UI_Goal_Tracking;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_IsEntityPinned_IsPinned = CallFunc_IsEntityPinned_IsPinned;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MenuDataEntry_Building.BP_MenuDataEntry_Building_C.GetDescription
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        ResultDescription                                                (Edit, BlueprintVisible)
// int32                              CallFunc_TryGetMaxCapacity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UBP_MenuDataEntry_Building_C::GetDescription(class FText ResultDescription, int32 CallFunc_TryGetMaxCapacity_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetDescription_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuDataEntry_Building_C", "GetDescription");

	Params::UBP_MenuDataEntry_Building_C_GetDescription_Params Parms{};

	Parms.ResultDescription = ResultDescription;
	Parms.CallFunc_TryGetMaxCapacity_ReturnValue = CallFunc_TryGetMaxCapacity_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


