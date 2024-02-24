#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x510 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_NPCTurnToFacingLocation.GA_CreatureAbility_NPCTurnToFacingLocation_C
class UGA_CreatureAbility_NPCTurnToFacingLocation_C : public UGA_CreatureAbilityBase_C
{
public:

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_NPCTurnToFacingLocation_C* GetDefaultObj();

	void GetDesiredRotation(class ABP_Creature_NPC_Villager_C* NPCVillager, struct FRotator* DesiredRotation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1);
	void SetCreaturePawnTargetTransform(class ABP_Creature_NPC_Villager_C* K2Node_DynamicCast_AsBP_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_GetDesiredRotation_DesiredRotation, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
};

}


