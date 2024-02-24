#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x360 - 0x340)
// WidgetBlueprintGeneratedClass WBP_RadioButton.WBP_RadioButton_C
class UWBP_RadioButton_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                             RadioButton;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnButtonToggled;                                   // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_RadioButton_C* GetDefaultObj();

	void SetButtonToggleEnabled(bool IsToggled);
	void BndEvt__WBP_RadioButton_RadioButton_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_WBP_RadioButton(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsChecked);
	void OnButtonToggled__DelegateSignature(bool IsToggled, class UWBP_RadioButton_C* Widget);
};

}


