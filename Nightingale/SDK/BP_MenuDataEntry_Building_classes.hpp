#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x180 - 0x180)
// BlueprintGeneratedClass BP_MenuDataEntry_Building.BP_MenuDataEntry_Building_C
class UBP_MenuDataEntry_Building_C : public UNWXMenuDataEntryBuilding
{
public:

	static class UClass* StaticClass();
	static class UBP_MenuDataEntry_Building_C* GetDefaultObj();

	void TogglePinnedState(class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, const struct FStructureAssetReference& CallFunc_GetStructureAssetReference_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_IsPinned_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IBPI_UI_GoalTracking_C> CallFunc_TrackBuildingEntity_self_CastInput);
	bool IsPinned(const struct FGuid& CallFunc_GetID_ReturnValue, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, const class FString& CallFunc_Conv_GuidToString_ReturnValue, TScriptInterface<class IBPI_UI_GoalTracking_C> K2Node_DynamicCast_AsBPI_UI_Goal_Tracking, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsEntityPinned_IsPinned);
	class FText GetDescription(class FText ResultDescription, int32 CallFunc_TryGetMaxCapacity_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetDescription_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


