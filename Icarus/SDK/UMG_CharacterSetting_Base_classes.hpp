#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2D0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C
class UUMG_CharacterSetting_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FRowHandle>                    CustomisationOptions;                              // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SelectedOptionIndex;                               // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5304[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SelectionUpdated;                                  // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable)
	bool                                         HasNoneOption;                                     // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_530E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPreviewCameraSettingsEnum            SettingFocus;                                      // 0x298(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FText                                  SettingName;                                       // 0x2A8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<enum class ECharacterCustomisationContext> CustomisationContextWhitelist;                     // 0x2C0(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUMG_CharacterSetting_Base_C* GetDefaultObj();

	void VerifySettingsValid(bool IsValid, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, const struct FRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue);
	void GetSelectionDisplayName(class FText* DisplayName);
	void GetSelectedOption(struct FRowHandle* SelectedRow, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FRowHandle& CallFunc_Array_Get_Item);
	void UpdateVisuals();
	void ChangeSelection(int32 Index, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ClearOptions(bool ClearIndex, int32 CallFunc_AddOption_Index);
	void AddOption(const struct FRowHandle& Option, int32* Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Construct();
	void ExecuteUbergraph_UMG_CharacterSetting_Base(int32 EntryPoint);
	void SelectionUpdated__DelegateSignature(int32 Index, const struct FPreviewCameraSettingsEnum& NewFocus);
};

}


