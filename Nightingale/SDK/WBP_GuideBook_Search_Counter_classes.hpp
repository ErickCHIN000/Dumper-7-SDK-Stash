#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x360 - 0x340)
// WidgetBlueprintGeneratedClass WBP_GuideBook_Search_Counter.WBP_GuideBook_Search_Counter_C
class UWBP_GuideBook_Search_Counter_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Txt_ResultCounter;                                 // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGameplayTag                          CounterCategory;                                   // 0x350(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_GuideBookComponent_C*              GuideBookComponent;                                // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_GuideBook_Search_Counter_C* GetDefaultObj();

	void UpdateTextColor(struct FGameplayTag& CategoryTag, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void UpdateCounter(struct FGameplayTag& CategoryTag, int32 TotalFilteredResults, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSearchStringEmpty_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void ShowCounter();
	void HideCounter();
	void Counter_NoSearchResultsFound();
	void SetCounterText(int32 NewCount, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void Initialize(const struct FGameplayTag& CategoryTag, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_GetFilteredEntryCountByCategory_ReturnValue);
	void Destruct();
	void ExecuteUbergraph_WBP_GuideBook_Search_Counter(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


