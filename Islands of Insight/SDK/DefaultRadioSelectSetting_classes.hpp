#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x319 - 0x2E0)
// WidgetBlueprintGeneratedClass DefaultRadioSelectSetting.DefaultRadioSelectSetting_C
class UDefaultRadioSelectSetting_C : public URadioSelectSetting
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnChanged;                                         // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                Preset_Value;                                      // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            NoLongerUsingPreset;                               // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsUsingPreset;                                     // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UDefaultRadioSelectSetting_C* GetDefaultObj();

	void BndEvt__DefaultRadioSelectSetting_RadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(const class FString& Value);
	void Change_to_Preset_Value(const class FString& NewParam);
	void ExecuteUbergraph_DefaultRadioSelectSetting(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_Value, const class FString& K2Node_CustomEvent_NewParam, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void NoLongerUsingPreset__DelegateSignature();
	void OnChanged__DelegateSignature(const class FString& Val);
};

}


