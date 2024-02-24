#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x35 (0x295 - 0x260)
// WidgetBlueprintGeneratedClass wid_QuestCompleted.wid_QuestCompleted_C
class UWid_QuestCompleted_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      Hide;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Show;                                              // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_32;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            QuestName;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            QuestResult;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        HideDelay;                                         // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSuccessfull;                                     // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_QuestCompleted_C* GetDefaultObj();

	void GetSoundToPlay(class UAkAudioEvent** Event, bool Temp_bool_Variable, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, class UAkAudioEvent* K2Node_Select_Default);
	void Init(bool WasSuccessfull, class FText QuestName, class FText CustomTitle, class FText CustomContent, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default);
	void Activate(bool Success, class FText QuestName, float Delay, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class UAkAudioEvent* CallFunc_GetSoundToPlay_Event, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Construct();
	void DelayedHidePopup();
	void OnAnimationFinished_Event_0();
	void ExecuteUbergraph_wid_QuestCompleted(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


