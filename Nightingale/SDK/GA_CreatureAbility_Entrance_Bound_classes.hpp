#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x518 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_Entrance_Bound.GA_CreatureAbility_Entrance_Bound_C
class UGA_CreatureAbility_Entrance_Bound_C : public UGA_CreatureAbility_Entrance_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Entrance_Bound_C* GetDefaultObj();

	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_Entrance_Bound(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue, class ABP_Creature_Bound_C* K2Node_DynamicCast_AsBP_Creature_Bound, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_Attacker_C> CallFunc_GetEquippedWeapon_self_CastInput, class AEquippableItem* CallFunc_GetEquippedWeapon_CreatureWeapon, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue);
};

}


