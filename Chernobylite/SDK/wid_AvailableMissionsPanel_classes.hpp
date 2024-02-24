#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x89 (0x2E9 - 0x260)
// WidgetBlueprintGeneratedClass wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C
class UWid_AvailableMissionsPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_CompanionsPanel_C*                CompanionsPanel;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MainCanvas;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_LevelSelector_Tutorial_Companions_C* TutorialCompanionsAssignment;                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_CompanionsPanel_Entry_v2_C*       Wid_CompanionsPanel_Entry_v2;                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MissionSelection_Buttons_C*       Wid_MissionSelection_Buttons;                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABackend*                              Backend;                                           // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GoBack;                                            // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Index;                                             // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2689[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            NewCompanionSelected;                              // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CompanionChanged;                                  // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_MissionAssigment_Main_C*          Parent;                                            // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEventSystemBackend*                   BackEndv2;                                         // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SelectedEventID;                                   // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TutorialsAlreadyShown;                             // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_AvailableMissionsPanel_C* GetDefaultObj();

	void SelectCompanionAtIndex(int32 Index);
	void SelectFirstCompanionWithoutMission(int32 CurrentIndex, int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_GetCurrentCompanion_Name, int32 CallFunc_GetCurrentCompanion_CurrentSelection, bool CallFunc_GetCurrentStatsForCompanion2_Valid, const struct FCompanionEntry& CallFunc_GetCurrentStatsForCompanion2_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void ShowCustomTutorial(bool Show, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_GetCurrentDay_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	bool GetbIsEnabled_0();
	void UpdateAllCompanions(int32 Temp_int_Variable, class FName CallFunc_GetCurrentCompanion_Name, int32 CallFunc_GetCurrentCompanion_CurrentSelection, const struct FCompanionDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess);
	void UpdateAssignButtn(class FName CallFunc_GetCurrentCompanion_Name, int32 CallFunc_GetCurrentCompanion_CurrentSelection, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_GetCurrentStatsForCompanion2_Valid, const struct FCompanionEntry& CallFunc_GetCurrentStatsForCompanion2_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Update(class FName EventID, enum class EEventMap Map);
	void Up();
	void Down();
	void Start();
	void End();
	void OnCompanionSelection(class FName NameID);
	void Accept();
	void Construct();
	void Toggle();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnCompanionChanged();
	void ExecuteUbergraph_wid_AvailableMissionsPanel(int32 EntryPoint, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable_1, bool Temp_bool_Variable, class FName Temp_name_Variable, bool Temp_bool_Variable_1, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName K2Node_CustomEvent_NameID, class FName CallFunc_GetCurrentCompanion_Name, int32 CallFunc_GetCurrentCompanion_CurrentSelection, class FName CallFunc_GetCurrentCompanion_Name_1, int32 CallFunc_GetCurrentCompanion_CurrentSelection_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class ABackend*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_GetCurrentStatsForCompanion2_Valid, const struct FCompanionEntry& CallFunc_GetCurrentStatsForCompanion2_ReturnValue, class ABackend* CallFunc_Array_Get_Item, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetCurrentCompanion_Name_2, int32 CallFunc_GetCurrentCompanion_CurrentSelection_2, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_UnsetCompanionFromCurrentActiveEvent_ReturnValue, class UWid_CompanionsPanel_Entry_C* K2Node_DynamicCast_AsWid_Companions_Panel_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetCanBeCurrentSend_CanBeSend, class FName CallFunc_GetCanBeCurrentSend_PreventingBuff, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName CallFunc_GetCurrentCompanion_Name_3, int32 CallFunc_GetCurrentCompanion_CurrentSelection_3, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess_1, TArray<class AEventSystemBackend*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AEventSystemBackend* CallFunc_Array_Get_Item_1, bool CallFunc_SetCompanionForQuest_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_PostEvent_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class FName CallFunc_GetCurrentCompanion_Name_4, int32 CallFunc_GetCurrentCompanion_CurrentSelection_4, int32 CallFunc_PostEvent_ReturnValue_1, TArray<class UWid_WorkshopUI_Main_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWid_WorkshopUI_Main_C* CallFunc_Array_Get_Item_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void CompanionChanged__DelegateSignature(class FName CompanionName);
	void NewCompanionSelected__DelegateSignature(class FName NameID);
	void GoBack__DelegateSignature(class FName EventID, class FName CompanionID);
};

}


