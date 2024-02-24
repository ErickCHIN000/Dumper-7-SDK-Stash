#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x380 - 0x370)
// WidgetBlueprintGeneratedClass UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C
class UUMG_MultipleOptionsGameSetting_C : public UGGGameSettingOptionUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_MultipleOptionsOption_C*          UMG_MultipleOptionsOption;                         // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_MultipleOptionsGameSetting_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void Get_Current_Index(int32* Index);
	class UWidget* GetInitialWidgetFocus();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void On_Option_Index_Changed(int32 NewIndex);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void RefreshOption();
	void Construct();
	void OnSetIsEnabled(bool bInIsEnabled);
	void ExecuteUbergraph_UMG_MultipleOptionsGameSetting(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, int32 CallFunc_GetOptionIndexForCurrentValue_ReturnValue, int32 CallFunc_GetOptionIndexForCurrentValue_ReturnValue_1, TArray<struct FGGSettingOption>& CallFunc_GetAvailableOptions_ReturnValue, int32 K2Node_CustomEvent_NewIndex, const struct FFocusEvent& K2Node_Event_InFocusEvent, TArray<struct FGGSettingOption>& CallFunc_GetAvailableOptions_ReturnValue_1, bool K2Node_Event_bInIsEnabled);
};

}


