#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// WidgetBlueprintGeneratedClass CF_TakeScreenshotUI.CF_TakeScreenshotUI_C
class UCF_TakeScreenshotUI_C : public UCF_BaseString_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_TakeScreenshotUI_C* GetDefaultObj();

	void Execute();
	void ExecuteUbergraph_CF_TakeScreenshotUI(int32 EntryPoint, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FFallbackStruct& K2Node_MakeStruct_AutomationScreenshotOptions);
};

}


