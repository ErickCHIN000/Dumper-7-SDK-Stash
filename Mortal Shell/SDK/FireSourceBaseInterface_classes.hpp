#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass FireSourceBaseInterface.FireSourceBaseInterface_C
class IFireSourceBaseInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFireSourceBaseInterface_C* GetDefaultObj();

	void Barbarous_RemoveFireSource(class AActor* FireSource);
	void Barbarous_AddFireSource(class AActor* FireSource);
	void Update();
	void NeedsUpdates(bool* bNeeds);
	void ClearEffect(class ACharacter* Char, int32 SlotIndex);
	void ApplyEffect(class ACharacter* Char, int32 Index);
};

}


