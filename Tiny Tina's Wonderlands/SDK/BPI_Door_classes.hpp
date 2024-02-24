#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Door.BPI_Door_C
class IBPI_Door_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Door_C* GetDefaultObj();

	void GetDoorFeedbackState(enum class Enum_States_DoorLocked* FeedbackState);
	void SetDoorFeedbackState(enum class Enum_States_DoorLocked FeedbackState);
	void GetDoorInteractiveState(bool* Interactive);
	void GetDoorLockedState(bool* Locked);
	void GetDoorState(enum class Enum_Door_State* DoorState);
	void SetDoorInteractiveState(bool Interactive_);
	void SetDoorLockedState(bool Locked_);
	void SetDoorState(enum class Enum_Door_State DoorState);
};

}


