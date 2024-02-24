#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C
class UWid_MainMenu_SubMenu_List_C : public UUserWidget
{
public:
	class UWidgetAnimation*                      HideAnimation;                                     // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          Entries;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SelectableManager_C*              SelectableManager;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            EntryClicked;                                      // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWid_MainMenu_SubMenu_List_C* GetDefaultObj();

	void PlayClickEffect(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue);
	void GetSelectedEntry(class UWid_MainMenu_SubMenu_List_Entry_C** SelectedEntry, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, class UWid_MainMenu_SubMenu_List_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry, bool K2Node_DynamicCast_bSuccess);
	void InitEntry(class UWid_MainMenu_SubMenu_List_Entry_C* Entry, bool IsVisible, const struct FMargin& EntryPadding, int32 NewLocalVar_0, const TArray<TScriptInterface<class ISelectableEntryInterace_C>>& SelectableEntries, enum class ESlateVisibility Temp_byte_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetSelectedEntryIndex_CurrentlySelected, enum class ESlateVisibility Temp_byte_Variable_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_MainMenu_SubMenu_List_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Add_NewItem_CastInput, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TScriptInterface<class ISelectableEntryOwnerInterface_C> CallFunc_SelectNewEntry_self_CastInput, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess_1);
	void AddBackEntry(bool IsVisible, const struct FMargin& Padding, class UWid_MainMenu_SubMenu_List_Entry_C* CallFunc_Create_ReturnValue, class FText Temp_text_Variable);
	void ShowList(TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, class UWid_MainMenu_SubMenu_List_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry, bool K2Node_DynamicCast_bSuccess);
	void PlayHideAnimation(bool WasMouseClick, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, class UWid_MainMenu_SubMenu_List_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry, bool K2Node_DynamicCast_bSuccess);
	void OnEntryClicked(int32 EntryIndex);
	void ClearEntries(TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array);
	void AddEntry(class FText Text, bool IsVisible, const struct FMargin& Padding, int32 NewLocalVar_0, const TArray<TScriptInterface<class ISelectableEntryInterace_C>>& SelectableEntries, class UWid_MainMenu_SubMenu_List_Entry_C* CallFunc_Create_ReturnValue);
	void EntryClicked__DelegateSignature(int32 NewParam);
};

}


