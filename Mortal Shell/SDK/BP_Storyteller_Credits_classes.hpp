#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x2D8 - 0x220)
// BlueprintGeneratedClass BP_Storyteller_Credits.BP_Storyteller_Credits_C
class ABP_Storyteller_Credits_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            StorytellerTextBlock;                              // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FinishTextNow;                                     // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1606[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          TextToDisplay;                                     // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        ArrayIterator;                                     // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1613[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrentStringToDisplay;                            // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        DelayBetweenLines;                                 // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBetweenLetters;                               // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            AllTextDone;                                       // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Storyteller_Loaded;                                // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUMG_Storyteller_C*                    UMG_StorytellerReference;                          // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_Storyteller_Black_Background_C*   UI_StoryTellerBlackBG;                             // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBetweenScreens;                               // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x2A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1638[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer_Begin;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_Run;                                         // 0x2B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_End;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_Progress;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_Letters;                                     // 0x2C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           UI_MainMenu;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Storyteller_Credits_C* GetDefaultObj();

	void Timer_Progress_Set(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void Timer_End_Set(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void Timer_Run_Set(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void Timer_Begin_Set(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void DisplayText(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2);
	void StoryTeller_Run_Bind();
	void StartStoryteller(TArray<class FText>& TextToDisplay, bool Immediate);
	void FinishCurrentLineNow();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void StoryTeller_Begin_Bind();
	void StoryTeller_Stop();
	void OnFadeOutEnd();
	void StoryTeller_Run_Set();
	void StoryTeller_End();
	void StoryTeller_Progress();
	void ExecuteUbergraph_BP_Storyteller_Credits(int32 EntryPoint, class FText CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<class FText>& K2Node_CustomEvent_TextToDisplay, bool K2Node_CustomEvent_Immediate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IMainMenuInterface_C> K2Node_DynamicCast_AsMain_Menu_Interface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMG_Storyteller_Black_Background_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IMainMenuInterface_C> K2Node_DynamicCast_AsMain_Menu_Interface_1, bool K2Node_DynamicCast_bSuccess_1);
	void Storyteller_Loaded__DelegateSignature();
	void AllTextDone__DelegateSignature();
};

}


