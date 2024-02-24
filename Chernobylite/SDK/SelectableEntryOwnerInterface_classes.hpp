#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass SelectableEntryOwnerInterface.SelectableEntryOwnerInterface_C
class ISelectableEntryOwnerInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISelectableEntryOwnerInterface_C* GetDefaultObj();

	void SelectNewEntry(int32 EntryIndex, bool PostSoundEvent);
};

}


