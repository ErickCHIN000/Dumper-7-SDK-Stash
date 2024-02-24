#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x298 - 0x220)
// BlueprintGeneratedClass BP_Storyteller.BP_Storyteller_C
class ABP_Storyteller_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            StorytellerTextBlock;                              // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FinishTextNow;                                     // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1608[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          TextToDisplay;                                     // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        ArrayIterator;                                     // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_160D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrentStringToDisplay;                            // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        DelayBetweenLines;                                 // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBetweenLetters;                               // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            AllTextDone;                                       // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Storyteller_Loaded;                                // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUMG_Storyteller_C*                    UMG_StorytellerReference;                          // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Storyteller_C* GetDefaultObj();

	void DisplayText(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2);
	void ReceiveBeginPlay();
	void StartStoryteller(TArray<class FText>& TextToDisplay);
	void RunStoryTeller();
	void FinishCurrentLineNow();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_Storyteller(int32 EntryPoint, class FText CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<class FText>& K2Node_CustomEvent_TextToDisplay, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, class FText CallFunc_Array_Get_Item_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1);
	void Storyteller_Loaded__DelegateSignature();
	void AllTextDone__DelegateSignature();
};

}


