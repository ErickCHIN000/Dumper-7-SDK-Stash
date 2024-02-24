#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2A8 - 0x270)
// WidgetBlueprintGeneratedClass UMG_OnProspectNotification_MissionComplete.UMG_OnProspectNotification_MissionComplete_C
class UUMG_OnProspectNotification_MissionComplete_C : public UUMG_OnProspectNotificationBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               MissionNameBorder;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MissionNameText;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NotificationTitle;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               RewardBorder;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RewardsBox;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RewardsText;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_OnProspectNotification_MissionComplete_C* GetDefaultObj();

	void GetMissionDropName(struct FFactionMissionsRowHandle& MissionRowHandle, class FText* MissionDropName, const struct FProspectListRowHandle& CallFunc_FindProspectListRowHandleFromFactionMission_FoundProspectListRowHandle, bool CallFunc_FindProspectListRowHandleFromFactionMission_ReturnValue, bool CallFunc_IsRowHandleNone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void SetMissionReward(const struct FFactionMissionsRowHandle& Mission, bool IsCurrentMission, TArray<struct FMetaResource>& ResourcesReceived, float RewardMulti, class FText Temp_text_Variable, class UUMG_WorkshopCostLarge_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetMissionDropName_MissionDropName, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FMetaResource& CallFunc_Array_Get_Item, bool Temp_bool_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FMetaCurrencyRowHandle& CallFunc_MakeMetaCurrency_ReturnValue, class FText Temp_text_Variable_1, class FText K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_OnProspectNotification_MissionComplete(int32 EntryPoint, const struct FMetaResource& K2Node_MakeStruct_MetaResource, bool K2Node_Event_IsDesignTime, const struct FMetaResource& K2Node_MakeStruct_MetaResource_1, TArray<struct FMetaResource>& K2Node_MakeArray_Array);
};

}


