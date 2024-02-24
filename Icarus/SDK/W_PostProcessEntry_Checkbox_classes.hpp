#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x2D1 - 0x298)
// WidgetBlueprintGeneratedClass W_PostProcessEntry_Checkbox.W_PostProcessEntry_Checkbox_C
class UW_PostProcessEntry_Checkbox_C : public UW_PostProcessEntry_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                             CheckBox_200;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_2;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x2B0(0x18)(Edit, BlueprintVisible)
	int32                                        FontSize;                                          // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        TextFill;                                          // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         DefaultState;                                      // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_PostProcessEntry_Checkbox_C* GetDefaultObj();

	void GetSaveGameValue(struct FFPostProcessSaveData* Value, bool CallFunc_IsChecked_ReturnValue, const struct FFPostProcessSaveData& K2Node_MakeStruct_FPostProcessSaveData);
	void InitFromSaveGameValue(const struct FFPostProcessSaveData& Value, bool Temp_bool_Variable, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState Temp_byte_Variable_1, enum class ECheckBoxState K2Node_Select_Default);
	void InitFromDefaultValue(bool Temp_bool_Variable, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState Temp_byte_Variable_1, enum class ECheckBoxState K2Node_Select_Default);
	bool GetCheckboxState(enum class ECheckBoxState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class ECheckBoxState CallFunc_GetCheckedState_ReturnValue, bool K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CheckBox_200_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void OnCheckedStatedUpdated();
	void ExecuteUbergraph_W_PostProcessEntry_Checkbox(int32 EntryPoint, bool Temp_bool_Variable, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, enum class ECheckBoxState K2Node_Select_Default);
};

}


