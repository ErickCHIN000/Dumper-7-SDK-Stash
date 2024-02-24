#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x408 - 0x318)
// WidgetBlueprintGeneratedClass WBP_JoinConquestTutorial.WBP_JoinConquestTutorial_C
class UWBP_JoinConquestTutorial_C : public UInputWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Init;                                              // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   CancelButton;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasSplash;                                      // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_203;                                         // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   JoinButton;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Splash;                                            // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_49;                                      // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VertCard_C*                       WBP_HorizCard;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VertCard_C*                       WBP_HorizCard_1;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VertCard_C*                       WBP_HorizCard_2;                                   // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ControlTextIndex;                                  // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ConquestType;                                      // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bLoading;                                          // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FKey, class FName>               ActionMap;                                         // 0x388(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            TutorialClosed;                                    // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FBlueprintSessionResult>       UniqueSessionList;                                 // 0x3E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FBlueprintSessionResult>       SessionsList;                                      // 0x3F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_JoinConquestTutorial_C* GetDefaultObj();

	class FText GetText_0(int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default);
	void WBP_JoinConquestTutorial_AutoGenFunc();
	void BP_DoBindings(class USophiaInputComponent* InputComp, enum class EInputDeviceType E);
	void OnExitClicked();
	void CustomEvent_0();
	void CustomEvent_1();
	void BndEvt__WBP_JoinConquestTutorial_WBP_StyledButton_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature();
	void BndEvt__WBP_JoinConquestTutorial_CancelButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_JoinConquestTutorial(int32 EntryPoint, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInGridMode_ReturnValue, const struct FEventPrompt& CallFunc_GetEventPromptState_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_inPowerMode_ReturnValue, class USophiaInputComponent* K2Node_Event_inputComp, enum class EInputDeviceType K2Node_Event_e, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const class FString& K2Node_Select_Default, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_3, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_4, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_5);
	void TutorialClosed__DelegateSignature();
};

}


