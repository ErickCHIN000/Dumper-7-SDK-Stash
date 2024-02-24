#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x394 - 0x370)
// WidgetBlueprintGeneratedClass UMG_DropDownGameSetting.UMG_DropDownGameSetting_C
class UUMG_DropDownGameSetting_C : public UGGGameSettingOptionUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              ComboBoxSizeBox;                                   // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxWidget_C*                     ComboBoxWidget;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        MobileDropDownScaleMultiplier;                     // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MobileMaxHeight;                                   // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MobileTabletDropDownScaleMultiplier;               // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_DropDownGameSetting_C* GetDefaultObj();

	void Get_Options_As_Text(TArray<class FText>* Options, const TArray<class FText>& Out_Options, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGGSettingOption>& CallFunc_GetAvailableOptions_ReturnValue, const struct FGGSettingOption& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, bool CallFunc_IsMobilePlatform_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void Get_Current_Index(int32* Index);
	class UWidget* GetInitialWidgetFocus();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void On_Option_Index_Changed(int32 SelectionIndex);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void RefreshOption();
	void Construct();
	void OnSetIsEnabled(bool bInIsEnabled);
	void ExecuteUbergraph_UMG_DropDownGameSetting(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, int32 CallFunc_GetOptionIndexForCurrentValue_ReturnValue, int32 CallFunc_GetOptionIndexForCurrentValue_ReturnValue_1, int32 K2Node_CustomEvent_SelectionIndex, const struct FFocusEvent& K2Node_Event_InFocusEvent, TArray<class FText>& CallFunc_Get_Options_As_Text_Options, bool K2Node_Event_bInIsEnabled);
};

}


