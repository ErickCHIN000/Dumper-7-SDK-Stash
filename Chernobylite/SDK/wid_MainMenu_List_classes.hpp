#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x2A1 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_List.wid_MainMenu_List_C
class UWid_MainMenu_List_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                          MenuEntries;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentIndex;                                      // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MainMenu_02_C*                    Owner;                                             // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OldIndex;                                          // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWid_MainMenu_List_Entry_C*>    List;                                              // 0x290(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                         IsPauseMenu;                                       // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_MainMenu_List_C* GetDefaultObj();

	void GetSelectedEntry(class UWid_MainMenu_List_Entry_C** AsWid_Main_Menu_List_Entry, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_MainMenu_List_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_List_Entry, bool K2Node_DynamicCast_bSuccess);
	void OffsetScrollBoxToSelection(class UWidget* CallFunc_GetChildAt_ReturnValue);
	void HasAnyValidEntry(bool* Result, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetEnableEntry(int32 Index, bool Enabled, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_MainMenu_List_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_List_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void SetAllFontDefault(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWid_MainMenu_List_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void GetIndex(int32* CurrentIndex);
	void Select(int32 New, int32 Old, bool PostSoundEvent, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_MainMenu_List_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_List_Entry, bool K2Node_DynamicCast_bSuccess, class UWid_MainMenu_List_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_List_Entry_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetChildAt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
	void ClearEntries();
	void AddEntry(class FText Name, int32 Index, bool Visible, const class FString& Value, const struct FMargin& Padding, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_MainMenu_List_Entry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void InputUp();
	void InputDown();
	void ExecuteUbergraph_wid_MainMenu_List(int32 EntryPoint, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_HasAnyValidEntry_Result, bool CallFunc_HasAnyValidEntry_Result_1);
};

}


