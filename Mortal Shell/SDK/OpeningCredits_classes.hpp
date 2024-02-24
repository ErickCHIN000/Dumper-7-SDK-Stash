#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2A8 - 0x230)
// WidgetBlueprintGeneratedClass OpeningCredits.OpeningCredits_C
class UOpeningCredits_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      TopBarPositionDown;                                // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BottomBarPositionUp;                               // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      TopBarFadeFin;                                     // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BottomBarFadeIn;                                   // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      TextFadeOut;                                       // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      TextFadeIn;                                        // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_OpeningCredits;                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_145;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                          CreditQueue;                                       // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        DelayBetweenCredits;                               // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2670[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          CreditQueue_old;                                   // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AGameplayPC_C*                         GameplayPC;                                        // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UOpeningCredits_C* GetDefaultObj();

	void Construct();
	void FadeOutBars();
	void FadeInText();
	void FadeOutText();
	void SingleCredit(class FText TextToDisplay);
	void CreditLoop();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_OpeningCredits(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class FText K2Node_CustomEvent_TextToDisplay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_Select_Default);
};

}


