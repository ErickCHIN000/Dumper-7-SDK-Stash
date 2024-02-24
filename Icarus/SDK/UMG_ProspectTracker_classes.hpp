#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0x2B3 - 0x298)
// WidgetBlueprintGeneratedClass UMG_ProspectTracker.UMG_ProspectTracker_C
class UUMG_ProspectTracker_C : public UIcarusWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          CurrentProspects;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Title;                                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Initialised;                                       // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Update;                                            // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Found;                                             // 0x2B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_ProspectTracker_C* GetDefaultObj();

	void Update_Prospects(const TArray<class UWidget*>& Widgets, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, const struct FSessionQuery& Temp_struct_Variable, class UWidget* CallFunc_Array_Get_Item, class UUMG_ProspectTracker_Entry_C* K2Node_DynamicCast_AsUMG_Prospect_Tracker_Entry, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<class UIcarusSessionResult*>& CallFunc_GetSessions_ReturnValue, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_Array_Length_ReturnValue_1, class UIcarusSessionResult* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_2, class UWidget* CallFunc_Array_Get_Item_2, class UUMG_ProspectTracker_Entry_C* K2Node_DynamicCast_AsUMG_Prospect_Tracker_Entry_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_3, class UWidget* CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UUMG_ProspectTracker_Entry_C* K2Node_DynamicCast_AsUMG_Prospect_Tracker_Entry_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, class UUMG_ProspectTracker_Entry_C* CallFunc_Create_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, enum class E_ProspectState CallFunc_CalculateProspectState_ProspectState, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnSessionsUpdated();
	void ExecuteUbergraph_UMG_ProspectTracker(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


