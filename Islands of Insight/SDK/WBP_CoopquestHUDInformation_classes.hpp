#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x360 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_CoopquestHUDInformation.WBP_CoopquestHUDInformation_C
class UWBP_CoopquestHUDInformation_C : public UConquestHUDInformationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              BlueTeamContainer;                                 // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        CentralHorizontalBox;                              // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PeopleLeaderboard;                                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              RedTeamContainer;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TimeLeftTextBlock;                                 // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoopQuestPerson_C*                WBP_CoopQuestPerson;                               // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoopQuestPerson_C*                WBP_CoopQuestPerson_1;                             // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoopQuestPerson_C*                WBP_CoopQuestPerson_2;                             // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressCoopMessageBox_C*     WBP_ZoneProgressCoopMessageBox;                    // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Zone0Box;                                          // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressHexagonCoop_C*        Zone0Progress;                                     // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Zone1Box;                                          // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressHexagonCoop_C*        Zone1Progress;                                     // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Zone2Box;                                          // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressHexagonCoop_C*        Zone2Progress;                                     // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Zone3Box;                                          // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressHexagonCoop_C*        Zone3Progress;                                     // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Zone4Box;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressHexagonCoop_C*        Zone4Progress;                                     // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CoopquestHUDInformation_C* GetDefaultObj();

	void SetZoneParameters(bool Visible, class FText& ZoneName, const struct FLinearColor& TeamColor, float RedProgress, float blueProgress, class UWBP_ZoneProgressHexagonCoop_C* ZoneWidget, bool CompletedFully);
	void BP_VisualizeLocalZone(bool Show, float RedProgress, float blueProgress, const struct FLinearColor& CaptureColor, class FText& ZoneShortName, bool CompletedFully);
	void BP_VisualizeZoneWithIndex(int32 Index, bool bShow, float RedProgress, float blueProgress, const struct FLinearColor& CaptureColor, class FText& ZoneShortName, bool CompletedFully);
	void BP_VisualizeCoopScore(int32 Score, int32 Time, int32 RedSolvedNum, int32 blueSolvedNum);
	void BP_VisualizeCoopClosestPeople(TArray<struct FConquestPersonPerformanceInformation>& SortedInfos);
	void BP_VisualizeLocalPlayerTeam(bool IsRedTeam);
	void ExecuteUbergraph_WBP_CoopquestHUDInformation(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_show, float K2Node_Event_redProgress_1, float K2Node_Event_blueProgress_1, const struct FLinearColor& K2Node_Event_captureColor_1, class FText K2Node_Event_zoneShortName_1, bool K2Node_Event_completedFully_1, int32 K2Node_Event_Index, bool K2Node_Event_bShow, float K2Node_Event_redProgress, float K2Node_Event_blueProgress, const struct FLinearColor& K2Node_Event_captureColor, class FText K2Node_Event_zoneShortName, bool K2Node_Event_completedFully, float CallFunc_Add_FloatFloat_ReturnValue, int32 K2Node_Event_Score, int32 K2Node_Event_Time, int32 K2Node_Event_redSolvedNum, int32 K2Node_Event_blueSolvedNum, int32 Temp_int_Loop_Counter_Variable_1, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class FText CallFunc_AsTimespan_Timespan_ReturnValue, int32 Temp_int_Variable, TArray<class USizeBox*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class USizeBox* K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class USizeBox* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_ZoneProgressHexagonCoop_C* K2Node_DynamicCast_AsWBP_Zone_Progress_Hexagon_Coop, bool K2Node_DynamicCast_bSuccess, TArray<struct FConquestPersonPerformanceInformation>& K2Node_Event_sortedInfos, bool CallFunc_EqualEqual_TextText_ReturnValue, const struct FConquestPersonPerformanceInformation& CallFunc_Array_Get_Item_1, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class UWidget* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UWBP_CoopQuestPerson_C* K2Node_DynamicCast_AsWBP_Coop_Quest_Person, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Variable_1, class UWBP_ZoneProgressHexagonCoop_C* K2Node_Select_Default_2, bool K2Node_Event_isRedTeam, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, class UPanelSlot* CallFunc_SetSlotIndex_ReturnValue, class UPanelSlot* CallFunc_SetSlotIndex_ReturnValue_1);
};

}


