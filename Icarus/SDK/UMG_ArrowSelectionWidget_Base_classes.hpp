#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C
class UUMG_ArrowSelectionWidget_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FText>                          Options;                                           // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SelectedOptionIndex;                               // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FAE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SelectionUpdated;                                  // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable)
	bool                                         HasNoneOption;                                     // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FBE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SettingName;                                       // 0x298(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<enum class ECharacterCustomisationContext> CustomisationContextWhitelist;                     // 0x2B0(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUMG_ArrowSelectionWidget_Base_C* GetDefaultObj();

	void GetSelectedOption(class FText* SelectedRow, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Array_Get_Item);
	void UpdateVisuals();
	void ChangeSelection(int32 Index, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ClearOptions(bool ClearIndex, int32 CallFunc_AddOption_Index);
	void AddOption(class FText Option, int32* Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Construct();
	void ExecuteUbergraph_UMG_ArrowSelectionWidget_Base(int32 EntryPoint);
	void SelectionUpdated__DelegateSignature();
};

}


