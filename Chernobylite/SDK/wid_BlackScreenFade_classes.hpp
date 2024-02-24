#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass wid_BlackScreenFade.wid_BlackScreenFade_C
class UWid_BlackScreenFade_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      Fade;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_10;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_BlackScreenFade_C* GetDefaultObj();

	void Unfade(bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Construct();
	void Finished();
	void ExecuteUbergraph_wid_BlackScreenFade(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


