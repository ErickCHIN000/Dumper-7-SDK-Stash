#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Softlock.BPI_Softlock_C
class IBPI_Softlock_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Softlock_C* GetDefaultObj();

	void BI_ToggleHardlockWidget(enum class ESlateVisibility BI_Visibilty);
	void BI_TogglePredictiveWidget(enum class ESlateVisibility BI_Visibilty);
	void BI_ToggleHardlockSelection(enum class ESlateVisibility BI_Visibilty, bool* Return);
	void BI_TogglePredictiveSelection(enum class ESlateVisibility BI_Visibilty, bool* Return);
	void BI_OnSelectedTarget(bool* Return);
	void BI_CustomMinDistance(bool* BI_UseCustomDistance_, float* BI_NewMinDistance);
	void BI_CanBeTarget_(bool* BI_CanBeTarget_);
};

}


