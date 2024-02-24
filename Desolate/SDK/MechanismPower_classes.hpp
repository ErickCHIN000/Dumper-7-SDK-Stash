#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass MechanismPower.MechanismPower_C
class IMechanismPower_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMechanismPower_C* GetDefaultObj();

	void OnTriggerUse(class AActor* Trigger);
	void LampPuzzleTrigger(class AActor* Actor);
};

}


