#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_IO_Switch.BPI_IO_Switch_C
class IBPI_IO_Switch_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_IO_Switch_C* GetDefaultObj();

	void GetSwitchFeedbackState(enum class Enum_States_SwitchFeedback* FeedbackState);
	void SetSwitchFeedbackState(enum class Enum_States_SwitchFeedback FeedbackState);
	void GetSwitchInteractiveState(bool* Interactive);
	void GetSwitchLockedState(bool* Locked);
	void GetSwitchState(enum class Enum_Switch_State* SwitchState);
	void SetSwitchInteractiveState(bool Interactive);
	void SetSwitchLockedState(bool Locked);
	void SetSwitchState(enum class Enum_Switch_State SwitchState);
};

}


