#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_BuildModeFeedback.BPI_BuildModeFeedback_C
class IBPI_BuildModeFeedback_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_BuildModeFeedback_C* GetDefaultObj();

	void SetBuildModeFeedbackMode(enum class EBuildModeContext Mode);
	void SetBuildModeFeedbackActionEnabled(enum class EBuildModeAction Action, bool Enabled);
	void GetBuildModeFeedbackComponent(class UBP_BuildModeFeedbackComponent_C** Component);
};

}


