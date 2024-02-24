#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x330 - 0x2C0)
// WidgetBlueprintGeneratedClass LoadingScreenWidget.LoadingScreenWidget_C
class ULoadingScreenWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeOutAnimation;                                  // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeInAnimation;                                   // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                             Throbber;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            FadeInFinished;                                    // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            FadeOutFinished;                                   // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UTexture2D*>                    Images;                                            // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                          Tips;                                              // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ULoadingScreenWidget_C* GetDefaultObj();

	void _Tip(class FText CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UTexture2D* CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1);
	void FadeOut(FDelegateProperty_& FadeFinished, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void FadeIn(FDelegateProperty_& FadeFinished, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnInitialized();
	void CustomEvent_0();
	void CustomEvent_1();
	void Construct();
	void ExecuteUbergraph_LoadingScreenWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void FadeOutFinished__DelegateSignature();
	void FadeInFinished__DelegateSignature();
};

}


