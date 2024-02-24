#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x398 - 0x370)
// WidgetBlueprintGeneratedClass UMG_ButtonOption.UMG_ButtonOption_C
class UUMG_ButtonOption_C : public UGGGameSettingOptionUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              EmbeddedButtonSizeBox;                             // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListEmbeddedButton_C*                 ListEmbeddedButton;                                // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxContent;                                   // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        ButtonHeightSizeOverride;                          // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ButtonWidthSizeOverride;                           // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ButtonOption_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, bool CallFunc_IsMobilePlatform_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void BndEvt__UMG_ButtonOption_ListEmbeddedButton_K2Node_ComponentBoundEvent_0_OnWidgetInteracted__DelegateSignature(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent);
	void RefreshOption();
	void Setup(const struct FGGGameSettingHandle& InSettingHandle, class UGGSettingsTabMenuUserWidget* InParentSettingTab);
	void Construct();
	void ExecuteUbergraph_UMG_ButtonOption(int32 EntryPoint, class UGGUserWidget* K2Node_ComponentBoundEvent_Widget, const struct FPointerEvent& K2Node_ComponentBoundEvent_PointerEvent, const struct FKeyEvent& K2Node_ComponentBoundEvent_KeyEvent, const struct FGGGameSettingHandle& K2Node_Event_InSettingHandle, class UGGSettingsTabMenuUserWidget* K2Node_Event_InParentSettingTab, TArray<struct FGGSettingOption>& CallFunc_GetAvailableOptions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided, bool CallFunc_IsMobilePlatform_ReturnValue);
};

}


