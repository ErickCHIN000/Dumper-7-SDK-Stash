#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x338 - 0x260)
// WidgetBlueprintGeneratedClass UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C
class UUMG_CheatFunctionBorder_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          ContentBox;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Description;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               TitleBorder;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheatFunctionBase*                    CheatFunction;                                     // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  DisplayName;                                       // 0x290(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UUMG_CheatOverlay_C>    ParentOverlay;                                     // 0x2A8(0x28)(Edit, BlueprintVisible, InstancedReference, HasGetValueTypeHash)
	struct FLinearColor                          TitleColor;                                        // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          AreaColor;                                         // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CheatDescription;                                  // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          HighlightColor;                                    // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TitleTextColor;                                    // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TitleDescriptionColor;                             // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_CheatFunctionBorder_C* GetDefaultObj();

	void UpperChar(const class FString& Char, bool* IsUpper, class FString* UpperChar, const class FString& CallFunc_ToUpper_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void GenerateDisplayName(bool IsUpper, int32 CharIndex, const TArray<class FString>& Array, const class FString& Char, const class FString& DisplayString, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void Construct();
	void Set_Function(class UCheatFunctionBase* CheatFunction);
	void Set_Top_Function(bool IsTop);
	void ExecuteUbergraph_UMG_CheatFunctionBorder(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UCheatFunctionBase* K2Node_CustomEvent_CheatFunction, const struct FMargin& K2Node_MakeStruct_Margin, class UCF_Base_C* K2Node_DynamicCast_AsCF_Base, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UUMG_CheatFunctionBorder_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_CustomEvent_IsTop);
};

}


