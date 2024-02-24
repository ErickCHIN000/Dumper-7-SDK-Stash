#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x279 - 0x248)
// WidgetBlueprintGeneratedClass InventorySortButton.InventorySortButton_C
class UInventorySortButton_C : public USHUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            CaptionText;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHButton*                             SortNewbutton;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Caption;                                           // 0x260(0x18)(Edit, BlueprintVisible)
	enum class EUIInventorySortingType           SortingType;                                       // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInventorySortButton_C* GetDefaultObj();

	struct FSlateColor Get_CaptionText_ColorAndOpacity_0(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void BndEvt__SortNewButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void OnSynchronizeProperties();
	void ExecuteUbergraph_InventorySortButton(int32 EntryPoint, class FText CallFunc_TextToUpper_ReturnValue);
};

}


