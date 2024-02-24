#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_MountInterface.BP_MountInterface_C
class IBP_MountInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_MountInterface_C* GetDefaultObj();

	void GetMountCombatBehaviour(enum class EMountCombatBehaviourState* CombatBehaviour);
	void GetMountMovementBehaviour(enum class EMountMovementBehaviourState* MovementBehaviour);
	void MountCombatBehaviourUpdated(enum class EMountCombatBehaviourState NewCombatBehaviour);
	void MountMovementBehaviourUpdated(enum class EMountMovementBehaviourState NewMovementBehaviour);
};

}


