#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x281 - 0x260)
// WidgetBlueprintGeneratedClass wid_AutoSaveStartScreen.wid_AutoSaveStartScreen_C
class UWid_AutoSaveStartScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeOut;                                           // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_287;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         AnimCompleted;                                     // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_AutoSaveStartScreen_C* GetDefaultObj();

	void Input(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Start(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Completed();
	void Done();
	void ExecuteUbergraph_wid_AutoSaveStartScreen(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue);
};

}


