#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x2AC - 0x260)
// WidgetBlueprintGeneratedClass wid_SelectableManager.wid_SelectableManager_C
class UWid_SelectableManager_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<TScriptInterface<class ISelectableEntryInterace_C>> SelectableEntries;                                 // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CurrentlySelected;                                 // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_211D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectedEntryChanged;                            // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsManagerEnabled;                                  // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2123[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 EnabledCache;                                      // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PreviosulySelected;                                // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_SelectableManager_C* GetDefaultObj();

	void IncrementValueReleased(bool CallFunc_IsAnythingSelected_ReturnValue, bool CallFunc_SelectPreviouslySelected_Result, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry);
	void DecrementValueReleased(bool CallFunc_IsAnythingSelected_ReturnValue, bool CallFunc_SelectPreviouslySelected_Result, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry);
	void PlaySoundEffect(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue);
	void SelectPreviouslySelected(bool* Result, bool CallFunc_IsAnythingSelected_ReturnValue, bool CallFunc_Array_Get_Item, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Is_Entry_Enabled(int32 Index, bool* Is_Enabled, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntry_Entry, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Set_Selectable_Enabled(int32 Index, bool Is_Enabled, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntry_Entry, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void Set_Selectables_Enabled(bool Is_Enabled, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Array_Get_Item, bool K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class UWidget* K2Node_DynamicCast_AsWidget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	bool IsAnythingSelected(bool CallFunc_NotEqual_IntInt_ReturnValue);
	void DecrementValue(bool CallFunc_SelectPreviouslySelected_Result, bool CallFunc_IsAnythingSelected_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry);
	void IncrementValue(bool CallFunc_IsAnythingSelected_ReturnValue, bool CallFunc_SelectPreviouslySelected_Result, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry);
	void GetSelectedEntryIndex(int32* CurrentlySelected);
	void GetSelectedEntry(TScriptInterface<class ISelectableEntryInterace_C>* Entry, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntry_Entry);
	void GetEntry(int32 EntryIndex, TScriptInterface<class ISelectableEntryInterace_C>* Entry, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Get_Item);
	void Select(int32 EntryIndex, bool PostSoundEvent, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, bool CallFunc_IsAnythingSelected_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntry_Entry, bool CallFunc_InRange_IntInt_ReturnValue);
	void SelectPrevious(int32 NewIndex, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SelectPreviouslySelected_Result, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Is_Entry_Enabled_Is_Enabled, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue);
	void SelectNext(int32 NewIndex, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SelectPreviouslySelected_Result, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Is_Entry_Enabled_Is_Enabled, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue);
	void InitSelectableEntries(TArray<TScriptInterface<class ISelectableEntryInterace_C>>& SelectableEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Get_Item, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Array_Add_ReturnValue_1, TScriptInterface<class ISelectableEntryOwnerInterface_C> CallFunc_SetSelectableEntryOwner_Owner_CastInput);
	void SelectNewEntry(int32 EntryIndex, bool PostSoundEvent);
	void ExecuteUbergraph_wid_SelectableManager(int32 EntryPoint, int32 K2Node_Event_EntryIndex, bool K2Node_Event_PostSoundEvent);
	void OnSelectedEntryChanged__DelegateSignature(int32 EntryIndex);
};

}


