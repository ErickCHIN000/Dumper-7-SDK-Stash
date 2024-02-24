#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x3A8 - 0x318)
// WidgetBlueprintGeneratedClass WBP_SandBoxTutorial.WBP_SandBoxTutorial_C
class UWBP_SandBoxTutorial_C : public UInputWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Init;                                              // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_82;                                         // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_32;                                      // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ControlTextIndex;                                  // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1176[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FKey, class FName>               ActionMap;                                         // 0x348(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            TutorialClosed;                                    // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_SandBoxTutorial_C* GetDefaultObj();

	class FText GetText_0(const TArray<class FString>& NodeMode, const TArray<class FString>& GridMode, const TArray<class FString>& DefaultMode, TArray<class FString>& K2Node_MakeArray_Array, TArray<class FString>& K2Node_MakeArray_Array_1, TArray<class FString>& K2Node_MakeArray_Array_2, const class FString& CallFunc_JoinStringArray_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_JoinStringArray_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess);
	void BndEvt__WBP_Tutorial_Button_82_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void OnExitClicked();
	void BP_DoBindings(class USophiaInputComponent* InputComp, enum class EInputDeviceType E);
	void CustomEvent_0();
	void ExecuteUbergraph_WBP_SandBoxTutorial(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInGridMode_ReturnValue, bool CallFunc_inPowerMode_ReturnValue, class USophiaInputComponent* K2Node_Event_inputComp, enum class EInputDeviceType K2Node_Event_e);
	void TutorialClosed__DelegateSignature();
};

}


