#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2B0 - 0x230)
// WidgetBlueprintGeneratedClass FamiliarityDiamond.FamiliarityDiamond_C
class UFamiliarityDiamond_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NewAppear;                                         // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Maxed;                                             // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NewFill;                                           // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BigAnimated;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Fill;                                              // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_85;                                      // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnMaxedAnimEnd;                                    // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFillAnimEnd;                                     // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnAppearAnimEnd;                                   // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Index;                                             // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1167[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StringDebug;                                       // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFamiliarityDiamond_C* GetDefaultObj();

	class FText GetText_0(class FText CallFunc_Conv_IntToText_ReturnValue);
	void OnAppearAnimEnded();
	void OnFillAnimEnded();
	void OnMaxedAnimEnded();
	void SetFilled(bool bNewFill);
	void PlayFillAnim(bool PlaySound);
	void PlayMaxed();
	void PlayNewAppear();
	void OnMaxedEnd();
	void ExecuteUbergraph_FamiliarityDiamond(int32 EntryPoint, const class FString& CallFunc_Conv_IntToString_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bNewFill, bool K2Node_CustomEvent_PlaySound, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void OnAppearAnimEnd__DelegateSignature();
	void OnFillAnimEnd__DelegateSignature();
	void OnMaxedAnimEnd__DelegateSignature(int32 Index);
};

}


