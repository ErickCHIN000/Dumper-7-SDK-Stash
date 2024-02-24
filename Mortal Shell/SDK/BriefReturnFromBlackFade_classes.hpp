#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0x291 - 0x230)
// WidgetBlueprintGeneratedClass BriefReturnFromBlackFade.BriefReturnFromBlackFade_C
class UBriefReturnFromBlackFade_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeFromBlack_Skipping;                            // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeFromBlack;                                     // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            FadeCompleted;                                     // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        TickingCounter;                                    // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_110F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            FadeAnimCompleted;                                 // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        PlayRate;                                          // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         SkippedFadeOut;                                    // 0x27C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1119[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            FadeAnimHalfway;                                   // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         RemoveFromParentOnEnd;                             // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBriefReturnFromBlackFade_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTBriefReturnFromBlackFade_1(class UImage* Image_0);
	void SequenceEvent__ENTRYPOINTBriefReturnFromBlackFade_0(class UImage* Image_0);
	void Image_0_Event_1(class UImage* Image_0);
	void Construct();
	void OnFadeEnded();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Image_0_Event_0(class UImage* Image_0);
	void ExecuteUbergraph_BriefReturnFromBlackFade(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UImage* K2Node_CustomEvent_Image_0_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UImage* K2Node_CustomEvent_Image_0, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void FadeAnimHalfway__DelegateSignature();
	void FadeAnimCompleted__DelegateSignature();
	void FadeCompleted__DelegateSignature();
};

}


