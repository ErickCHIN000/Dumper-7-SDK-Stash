#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3A0 - 0x388)
// WidgetBlueprintGeneratedClass WBP_CraftingFilter.WBP_CraftingFilter_C
class UWBP_CraftingFilter_C : public UNWXMenuDataFilterWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                             CheckBox;                                          // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_FilterName;                                    // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CraftingFilter_C* GetDefaultObj();

	void Construct();
	void BndEvt__WBP_CraftingFilter_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_WBP_CraftingFilter(int32 EntryPoint, const struct FGameplayTag& CallFunc_CraftingCreationCategoryTag_ReturnValue, bool Temp_bool_Variable, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState Temp_byte_Variable_1, bool K2Node_ComponentBoundEvent_bIsChecked, enum class ECheckBoxState K2Node_Select_Default);
};

}


