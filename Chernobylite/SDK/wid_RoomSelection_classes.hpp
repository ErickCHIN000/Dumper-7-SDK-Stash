#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC1 (0x321 - 0x260)
// WidgetBlueprintGeneratedClass wid_RoomSelection.wid_RoomSelection_C
class UWid_RoomSelection_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      Fade;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWid_MissionSelection_Button_C*        Assign;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BuildInfo;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DescImage;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Description;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MissionSelection_Button_C*        ReturnButton;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RoomList;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_1;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_2;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          UpgradesBox;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_PlayerResources_C*                Wid_PlayerResources;                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SkillCost_C*                      Wid_SkillCost;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        LocalIndexVal;                                     // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Dictionary;                                        // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BuildConfirmed;                                    // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         BuildConfirmVisible;                               // 0x301(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26C5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_RoomSkillTreeConfirm_C*           NewVar_0;                                          // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_RoomSkillTreeConfirm_C*           BuildConfirmWidget;                                // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RoomBuildEvent;                                    // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayingCloseAnim;                                // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_RoomSelection_C* GetDefaultObj();

	class FText GetText_OtherRooms(class FText CallFunc_GetTextFromDictionary_Text);
	class FText GetText_RoomsAvailable(class FText CallFunc_GetTextFromDictionary_Text);
	class FText GetText_RoomsOwned(class FText CallFunc_GetTextFromDictionary_Text);
	void PostInit(class UWid_RoomSelectionOption_C* LocalTargret, const TArray<class UWid_RoomSelectionOption_C*>& Other, const TArray<class UWid_RoomSelectionOption_C*>& Owned, const TArray<class UWid_RoomSelectionOption_C*>& Available, int32 ChildCount, int32 InitIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class UWid_RoomSelectionOption_C* K2Node_DynamicCast_AsWid_Room_Selection_Option, bool K2Node_DynamicCast_bSuccess, class UWid_RoomSelectionOption_C* CallFunc_Array_Get_Item, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWid_RoomSelectionOption_C* CallFunc_Array_Get_Item_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_3, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_4, class UWid_RoomSelectionOption_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue, class UWid_RoomSelectionOption_C* K2Node_DynamicCast_AsWid_Room_Selection_Option_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanBeBought_Can, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3);
	void GetRoom(int32 Index, class UWid_RoomSelectionOption_C** SelectionOption, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_RoomSelectionOption_C* K2Node_DynamicCast_AsWid_Room_Selection_Option, bool K2Node_DynamicCast_bSuccess);
	void GetIndexForRoom(class FName RoomID, int32* Index, int32 LocalIndex, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_RoomSelectionOption_C* K2Node_DynamicCast_AsWid_Room_Selection_Option, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void SetSelected(int32 SelectedIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_RoomSkillTreeMain_C* CallFunc_Create_ReturnValue, class UWid_RoomSelectionOption_C* K2Node_DynamicCast_AsWid_Room_Selection_Option, bool K2Node_DynamicCast_bSuccess, class UVerticalBox* CallFunc_GetUpgrades_NewParam, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_RoomSelectionOption_C* K2Node_DynamicCast_AsWid_Room_Selection_Option_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetChildAt_ReturnValue_2, class UWid_RoomSelectionOption_C* K2Node_DynamicCast_AsWid_Room_Selection_Option_2, bool K2Node_DynamicCast_bSuccess_2);
	void Construct();
	void Next();
	void Previous();
	void Select();
	void AnimFinished();
	void ExecuteUbergraph_wid_RoomSelection(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FSt_Dictionary& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_RoomSelectionOption_C* K2Node_DynamicCast_AsWid_Room_Selection_Option, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanBeBought_Can, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_RoomSelectionOption_C* K2Node_DynamicCast_AsWid_Room_Selection_Option_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Percent_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_2, class UWid_RoomSelectionOption_C* K2Node_DynamicCast_AsWid_Room_Selection_Option_2, bool K2Node_DynamicCast_bSuccess_2, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_RemoveChild_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnSelected__DelegateSignature(class FName Param);
};

}


