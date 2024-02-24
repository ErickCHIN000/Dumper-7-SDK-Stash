#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6A (0x2CA - 0x260)
// WidgetBlueprintGeneratedClass wid_CompanionsPanel.wid_CompanionsPanel_C
class UWid_CompanionsPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                          CompanionsList;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_37;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_0;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         _DebugHide;                                        // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         CurrentShow;                                       // 0x281(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1101[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentSelection;                                  // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideButton;                                        // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1109[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            NewSelection;                                      // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_AvailableMissionsPanel_C*         Parent;                                            // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowEntriesBackground;                             // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         HideIgor;                                          // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         UseAlternativeSelection;                           // 0x2AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1114[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionAssigment_Main_C*          AssignPanelParent;                                 // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseSmallButtons;                                   // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1119[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_pda_NotesList_C*                  NotesListParent;                                   // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseMiddleButton;                                   // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseJustRecruitedInsteadOfUndefined;                // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_CompanionsPanel_C* GetDefaultObj();

	void ShowAllInfo(bool SetVisible, class FText Temp_text_Variable, float CallFunc_SelectFloat_ReturnValue, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, int32 Temp_int_Variable, enum class EBuffType Temp_byte_Variable, enum class EBuffType Temp_byte_Variable_1, enum class EBuffType Temp_byte_Variable_2, enum class EBuffType Temp_byte_Variable_3, enum class EBuffType Temp_byte_Variable_4, enum class EBuffType Temp_byte_Variable_5, enum class EBuffType Temp_byte_Variable_6, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_GetCompanionData_Found, const struct FCompanionDefinition& CallFunc_GetCompanionData_StartingData, bool CallFunc_GetCompanionData_Found_in_current_data, const struct FCompanionEntry& CallFunc_GetCompanionData_CurrentData, float CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class FText K2Node_Select_Default, const class FString& CallFunc_Conv_TextToString_ReturnValue, enum class EBuffType K2Node_Select_Default_1, TArray<enum class EBuffType>& K2Node_MakeArray_Array);
	void SelectItemReport(class UWid_CompanionsPanel_Entry_Report_C* Index, int32 Idx, int32 CallFunc_GetChildIndex_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_CompanionsPanel_Entry_Report_C* K2Node_DynamicCast_AsWid_Companions_Panel_Entry_Report, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_CompanionsPanel_Entry_Report_C* K2Node_DynamicCast_AsWid_Companions_Panel_Entry_Report_1, bool K2Node_DynamicCast_bSuccess_1);
	void SelectItem(class UWid_CompanionsPanel_Entry_C* Index, int32 Idx, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess);
	void GetCanBeCurrentSend(bool* CanBeSend, class FName* PreventingBuff, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanBeSend_Result, class FName CallFunc_CanBeSend_PreventingBuff);
	void GetCurrentCompanion(int32 Offset, class FName* Name, int32* CurrentSelection, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, const struct FCompanionEntry& CallFunc_Array_Get_Item);
	void Select(int32 Index, int32 Idx, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1, bool K2Node_DynamicCast_bSuccess_1);
	void InitSelection(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void ShowPanel(bool Show, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWid_CompanionsPanel_Entry_C* K2Node_DynamicCast_AsWid_Companions_Panel_Entry, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_CompanionsPanel_Entry_C* K2Node_DynamicCast_AsWid_Companions_Panel_Entry_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	void UpdateCompanions(const struct FCompanionEntry& LocalElement, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_FoodPanel_v3_Entry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FCompanionDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCompanionEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void InputUp();
	void InputDown();
	void ExecuteUbergraph_wid_CompanionsPanel(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_FoodPanel_v3_Entry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1, bool K2Node_DynamicCast_bSuccess_1);
	void NewSelection__DelegateSignature(class FName NameID);
};

}


