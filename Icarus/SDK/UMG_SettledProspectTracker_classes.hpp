#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0x2B3 - 0x298)
// WidgetBlueprintGeneratedClass UMG_SettledProspectTracker.UMG_SettledProspectTracker_C
class UUMG_SettledProspectTracker_C : public UIcarusWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          CurrentProspects;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Title;                                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Initialised;                                       // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Update;                                            // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Found;                                             // 0x2B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_SettledProspectTracker_C* GetDefaultObj();

	void UpdateNotifications(const TArray<class UWidget*>& Widgets, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_ProspectComplete_Notification_C* K2Node_DynamicCast_AsUMG_Prospect_Complete_Notification, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UNotificationSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FNotification>& CallFunc_GetNotifications_ReturnValue, const struct FNotification& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, class UUMG_ProspectComplete_Notification_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, class UUMG_ProspectComplete_Notification_C* K2Node_DynamicCast_AsUMG_Prospect_Complete_Notification_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_3, class UWidget* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_4, class UUMG_ProspectComplete_Notification_C* K2Node_DynamicCast_AsUMG_Prospect_Complete_Notification_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_3, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnNotificationsUpdated();
	void ExecuteUbergraph_UMG_SettledProspectTracker(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UNotificationSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue);
};

}


