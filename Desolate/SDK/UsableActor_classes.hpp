#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass UsableActor.UsableActor_C
class IUsableActor_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUsableActor_C* GetDefaultObj();

	void UnlockActor(class FText Password);
	void IsCodeLocked(bool* Result);
	void OnHoldUseActor(class ASHPlayerCharacter* Character);
	void HoldUseSupports(bool* Result);
	void OnUseActor(class ASHPlayerCharacter* Character);
};

}


