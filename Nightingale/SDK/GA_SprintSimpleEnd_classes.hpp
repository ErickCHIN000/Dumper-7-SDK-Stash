#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x430 - 0x420)
// BlueprintGeneratedClass GA_SprintSimpleEnd.GA_SprintSimpleEnd_C
class UGA_SprintSimpleEnd_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNWX_CharacterMovementComponent*       MovementComponent;                                 // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_SprintSimpleEnd_C* GetDefaultObj();

	void IsValidInDeathStates(bool* IsValid);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_SprintSimpleEnd(int32 EntryPoint, bool CallFunc_K2_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsMovementSpeedActive_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UNWX_CharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class UBP_Emote_Component_C* CallFunc_GetComponentByClass_ReturnValue_1);
};

}


