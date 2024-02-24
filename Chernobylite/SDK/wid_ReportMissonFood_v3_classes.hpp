#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x348 - 0x260)
// WidgetBlueprintGeneratedClass wid_ReportMissonFood_v3.wid_ReportMissonFood_v3_C
class UWid_ReportMissonFood_v3_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_CompanionsPanel_Entry_FoodSystem_V3_C* Entry;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInnerEvent                           Event;                                             // 0x270(0x48)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UDataTable*                            CompanionDT;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MapInfo2;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            ItemDT;                                            // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            NonItemDT;                                         // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HaveEvent;                                         // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1CE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            GenericDataTable;                                  // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMissionReportRequiredInformation     MissionReportInfo;                                 // 0x2E8(0x40)(Edit, BlueprintVisible)
	TArray<class UWid_ReportMission_Reward_Entry_Item_C*> Rewards;                                           // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        SelectedRewardID;                                  // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CF5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_FoodPanel_v3_C*                   Parent;                                            // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_ReportMissonFood_v3_C* GetDefaultObj();

	void Initialize(bool Condition, struct FMissionReportRequiredInformation& MissionReportRequiredInformation);
	void Construct();
	void ExecuteUbergraph_wid_ReportMissonFood_v3(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool K2Node_CustomEvent_Condition, const struct FMissionReportRequiredInformation& K2Node_CustomEvent_MissionReportRequiredInformation, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const struct FReportItems& CallFunc_GetQuestResultItems_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, const struct FQuestInfoInput& CallFunc_GetQuestInfoBP_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, const struct FDescriptionInfo& CallFunc_GetQuestDescription_ReturnValue, const struct FCompanionDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FReportInfo& K2Node_MakeStruct_ReportInfo, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FReportsTextsDataTableRow& CallFunc_GetQuestResultText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_ParseReport_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6, const struct FStruct_MapInformation& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FQuestInfoInput& CallFunc_GetQuestInfoBP_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, const struct FDescriptionInfo& CallFunc_GetQuestDescription_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FSt_GenericReports& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FName K2Node_Select_Default, const struct FLocalizedTextInfo& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class FText CallFunc_TextToUpper_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_5);
};

}


