#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_StormModeMenuButton.BPI_StormModeMenuButton_C
class IBPI_StormModeMenuButton_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_StormModeMenuButton_C* GetDefaultObj();

	void UpdateIndexes(TArray<int32>& Indexes);
	void OverrideCurrentValue(int32 Index);
	void NavHorizontal(int32 Delta);
	void NavVertical(int32 Delta);
	void IsButtonEnabled(bool* Enabled_);
	void DeactivateButton();
	void ActivateButton();
	void EnableOrDisableButton(bool Enable);
	void ForceSelectButton(bool Select);
	void UpdateSettingName(class FText Text);
	void Value_Reset();
	void Value_Previous();
	void Value_Next();
	void UpdateSettingValues(TArray<class FText>& Values);
	void SetParentRef(class UWidget* Parent);
	void SelectButton(bool Select_);
	void HighlightButton(bool Highlight_);
};

}


