#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC0 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_ReturnToPathNetwork.AIA_Creature_ReturnToPathNetwork_C
class UAIA_Creature_ReturnToPathNetwork_C : public UAIA_CreatureBase_C
{
public:
	class UNWX_CharacterMovementComponent*       MovementComponent;                                 // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_ReturnToPathNetwork_C* GetDefaultObj();

	bool Initialize(bool CallFunc_Initialize_ReturnValue, class UNWX_CharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue);
	bool CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	bool CheckOwnerRequirements(bool CallFunc_IsCurrentlyReturningToNavMesh_ReturnValue);
};

}


