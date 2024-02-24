#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3B8 - 0x3B0)
// WidgetBlueprintGeneratedClass UMG_OptionsEntry.UMG_OptionsEntry_C
class UUMG_OptionsEntry_C : public UGGOptionContainerUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUMG_OptionsEntry_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void GetCurrentOptionSlot(class UGGGameSettingOptionUserWidget** NewParam, class UWidget* CallFunc_GetChildAt_ReturnValue, class UGGGameSettingOptionUserWidget* K2Node_DynamicCast_AsGGGame_Setting_Option_User_Widget, bool K2Node_DynamicCast_bSuccess);
	void BP_OnEntryReleased();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void OnFocusMarkerEnabled(bool bEnabled, bool bPrevious);
	void ExecuteUbergraph_UMG_OptionsEntry(int32 EntryPoint, bool K2Node_Event_bEnabled, bool K2Node_Event_bPrevious, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UGGGameSettingOptionUserWidget* K2Node_DynamicCast_AsGGGame_Setting_Option_User_Widget, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded);
};

}


