#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4C8 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_NonShippableWindow.WBP_NonShippableWindow_C
class UWBP_NonShippableWindow_C : public UNWXCommonWindowWidget
{
public:
	FMulticastInlineDelegateProperty_            OnDebugSubscreenClosed;                            // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_NonShippableWindow_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void OnDebugSubscreenClosed__DelegateSignature();
};

}


