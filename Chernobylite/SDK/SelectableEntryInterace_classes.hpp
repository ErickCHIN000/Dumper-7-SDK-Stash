#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass SelectableEntryInterace.SelectableEntryInterace_C
class ISelectableEntryInterace_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISelectableEntryInterace_C* GetDefaultObj();

	void DecrementValueReleased();
	void IncrementValueRelesed();
	void DecrementValue();
	void IncrementValue();
	void SetEntryIndex(int32 EntryIndex);
	void GetEntryIndex(int32* EntryIndex);
	void SetSelectableEntryOwner(TScriptInterface<class ISelectableEntryOwnerInterface_C> Owner);
	void Select(bool IsSelected, bool PostSoundEvent);
};

}


