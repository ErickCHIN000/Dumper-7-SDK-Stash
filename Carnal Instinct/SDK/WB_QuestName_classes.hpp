#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C8 (0x528 - 0x260)
// WidgetBlueprintGeneratedClass WB_QuestName.WB_QuestName_C
class UWB_QuestName_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCheckBox*                             ActiveCheckbox;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_339;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ObjectiveName;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Tracked;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemData                           Item_Data;                                         // 0x290(0xE8)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_quest_data                         Quest_Data;                                        // 0x378(0x158)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FS_quest_objective_data>       Objective_Array;                                   // 0x4D0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UWB_Quest_C*                           WB_Quest;                                          // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_F8A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Quest_ID;                                          // 0x4EC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Objective_Count;                                   // 0x4F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Completed_;                                        // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F98[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           Colour;                                            // 0x500(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWB_QuestName_C* GetDefaultObj();

	struct FEventReply ActiveClick(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class UWB_ObjectiveName_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWB_ObjectiveDescription_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const struct FS_quest_objective_data& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FEventReply& K2Node_MakeStruct_EventReply, bool CallFunc_Less_IntInt_ReturnValue);
	struct FSlateBrush Set_Image(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	struct FSlateColor Set_Rarity_Text_Color(bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& CallFunc_Set_Rarity_Color_Color);
	class FText Set_Rarity(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Set_Type(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Set_Name();
	void Construct();
	void Set_Active_Text();
	void Set_inactive_Text();
	void BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ActiveCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Update_Quest_UI();
	void Set_Selected();
	void Unset_Selected();
	void ExecuteUbergraph_WB_QuestName(int32 EntryPoint, class UWB_ObjectiveDescription_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class FText CallFunc_Conv_NameToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FS_quest_objective_data& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue_1, class FText CallFunc_Conv_NameToText_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWB_ObjectiveName_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_ComponentBoundEvent_bIsChecked, TArray<class UW_01_quest_mini_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_01_quest_mini_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle);
};

}


