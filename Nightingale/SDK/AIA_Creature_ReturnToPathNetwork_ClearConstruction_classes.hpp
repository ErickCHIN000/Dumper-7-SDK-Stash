#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC0 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_ReturnToPathNetwork_ClearConstruction.AIA_Creature_ReturnToPathNetwork_ClearConstruction_C
class UAIA_Creature_ReturnToPathNetwork_ClearConstruction_C : public UAIA_CreatureBase_C
{
public:
	class UCharacterMovementComponent*           MovementComponent;                                 // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_ReturnToPathNetwork_ClearConstruction_C* GetDefaultObj();

	bool CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
};

}


