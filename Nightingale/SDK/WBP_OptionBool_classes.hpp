#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x3C0 - 0x390)
// WidgetBlueprintGeneratedClass WBP_OptionBool.WBP_OptionBool_C
class UWBP_OptionBool_C : public UNWXOptionsSettingBoolWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                             BoolCheckbox;                                      // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label;                                             // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  LabelText;                                         // 0x3A8(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UWBP_OptionBool_C* GetDefaultObj();

	class UCheckBox* GetCheckBoxWidget();
	class UWidget* GetDefaultFocusWidget(class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue);
	void OnValueChanged(bool Value);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_OptionBool_BoolCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_WBP_OptionBool(int32 EntryPoint, const struct FGameplayTag& CallFunc_SelectedLeftEventTag_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_ComponentBoundEvent_bIsChecked);
};

}


