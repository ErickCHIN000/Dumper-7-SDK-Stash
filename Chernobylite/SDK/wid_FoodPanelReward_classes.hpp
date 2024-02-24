#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDC (0x33C - 0x260)
// WidgetBlueprintGeneratedClass wid_FoodPanelReward.wid_FoodPanelReward_C
class UWid_FoodPanelReward_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_FoodPanelReward_Entry_C*          Entry;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInnerEvent                           Event;                                             // 0x270(0x48)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UDataTable*                            CompanionDT;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MapInfo2;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            ItemDT;                                            // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            NonItemDT;                                         // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HaveEvent;                                         // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_278F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            GenericDataTable;                                  // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMissionReportRequiredInformation     MissionReportInfo;                                 // 0x2E8(0x40)(Edit, BlueprintVisible)
	TArray<class UWid_ReportMission_Reward_Entry_Item_C*> Rewards;                                           // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        SelectedRewardID;                                  // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_FoodPanelReward_C* GetDefaultObj();

	void Construct();
	void Initialize(bool Condition, struct FMissionReportRequiredInformation& MissionReportRequiredInformation);
	void PreConstruct(bool IsDesignTime);
	void InitializeLost(class FName NameID);
	void ExecuteUbergraph_wid_FoodPanelReward(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UWid_CompanionsPanel_Entry_element_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable_2, class FName Temp_name_Variable, class FName Temp_name_Variable_1, int32 Temp_int_Array_Index_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, const struct FQuestInfoInput& CallFunc_GetQuestInfoBP_ReturnValue, const struct FCompanionDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FDescriptionInfo& CallFunc_GetQuestDescription_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FName K2Node_Select_Default, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, const struct FLocalizedTextInfo& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, class FText CallFunc_TextToUpper_ReturnValue_1, const struct FQuestInfoInput& CallFunc_GetQuestInfoBP_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, const struct FDescriptionInfo& CallFunc_GetQuestDescription_ReturnValue_1, const struct FReportItems& CallFunc_GetQuestResultItems_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const struct FReportItemsInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_ReportMission_Reward_Entry_Item_C* CallFunc_Create_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6, const struct FReportsTextsDataTableRow& CallFunc_GetQuestResultText_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FReportInfo& K2Node_MakeStruct_ReportInfo, const class FString& CallFunc_ParseReport_ReturnValue, const struct FReportsTextsDataTableRow& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, bool K2Node_CustomEvent_Condition, const struct FMissionReportRequiredInformation& K2Node_CustomEvent_MissionReportRequiredInformation, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, const struct FSt_Dictionary& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable_4, const struct FStruct_MapInformation& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWid_ReportMission_Reward_Entry_Item_C* CallFunc_Create_ReturnValue_2, class FText CallFunc_TextToUpper_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool K2Node_Event_IsDesignTime, class FName K2Node_CustomEvent_NameID, const struct FCompanionDefinition& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, class FName CallFunc_Conv_StringToName_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


