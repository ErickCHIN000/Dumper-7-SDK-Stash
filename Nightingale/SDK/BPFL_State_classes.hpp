#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_State.BPFL_State_C
class UBPFL_State_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_State_C* GetDefaultObj();

	void HailDamageTag(class UObject* __WorldContext, struct FGameplayTag* HailDamageTag);
	void GetHopeRegenTag(class UObject* __WorldContext, struct FGameplayTag* Tag);
	void GetHopeDrainTag(class UObject* __WorldContext, struct FGameplayTag* Tag);
	void AmmoDamageTag(class UObject* __WorldContext, struct FGameplayTag* AmmoDamageTag);
	void MiasmaDamageTag(class UObject* __WorldContext, struct FGameplayTag* MiasmaTag);
	void PoisonDamageTag(class UObject* __WorldContext, struct FGameplayTag* PoisonTag);
	void FireDamageTag(class UObject* __WorldContext, struct FGameplayTag* FireTag);
	void GetHailTag(class UObject* __WorldContext, struct FGameplayTag* HailGameplayTag);
	void MeleeDamageTag(class UObject* __WorldContext, struct FGameplayTag* MeleeTag);
	void GetBurningTag(class UObject* __WorldContext, struct FGameplayTag* BurningGameplayTag, const struct FGameplayTag& BurningTag);
	void MovingTag(class UObject* __WorldContext, struct FGameplayTag* MovingTag);
	void TargetIsSourceTag(class UObject* __WorldContext, struct FGameplayTag* InsideKillVolumeTag);
	void ComboCountTag(class UObject* __WorldContext, struct FGameplayTag* ComboCountTag);
	void PelletsTag(class UObject* __WorldContext, struct FGameplayTag* PelletsTag);
	void DeconstructTag(class UObject* __WorldContext, struct FGameplayTag* DeconstructTag);
	void Item_Effectiveness_Tag(class UObject* __WorldContext, struct FGameplayTag* NewParam);
	void PieceHealthTag(class UObject* __WorldContext, struct FGameplayTag* PieceHealthTag);
	void DropNoneResourcesTag(class UObject* __WorldContext, struct FGameplayTag* DropNoneTag);
	void DropPartialResourcesTag(class UObject* __WorldContext, struct FGameplayTag* DropPartialTag);
	void RearHemisphereTag(class UObject* __WorldContext, struct FGameplayTag* RearHemisphereTag);
	void ForwardHemisphereTag(class UObject* __WorldContext, struct FGameplayTag* ForwardHemisphereTag);
	void Power_Swing_Damage_Modifier_Tag(class UObject* __WorldContext, struct FGameplayTag* PowerSwingDamageModifierTag);
	void PowerSwingChargedTag(class UObject* __WorldContext, struct FGameplayTag* PowerSwingTag);
	void MarkedForDebugRespawn(class UObject* __WorldContext, struct FGameplayTag* MarkedForDebugRespawnTag);
	void MarkedForDebugDeathTag(class UObject* __WorldContext, struct FGameplayTag* MarkedForDebugDeathTag);
	void InsideKillVolumeTag(class UObject* __WorldContext, struct FGameplayTag* InsideKillVolumeTag);
	void DropAllResourcesTag(class UObject* __WorldContext, struct FGameplayTag* DropAllTag);
	void StrengthTag(class UObject* __WorldContext, struct FGameplayTag* StrengthTag);
	void DamageBlockedAmountTag(class UObject* __WorldContext, struct FGameplayTag* BlockingTag);
	void EnvironmentalTag(class UObject* __WorldContext, struct FGameplayTag* EnvironmentalTag);
	void MissileTag(class UObject* __WorldContext, struct FGameplayTag* MissileTag);
	void FriendTag(class UObject* __WorldContext, struct FGameplayTag* FriendTag);
	void ZKillPlaneTag(class UObject* __WorldContext, struct FGameplayTag* ZKillPlaneTag);
	void MeleeTag(class UObject* __WorldContext, struct FGameplayTag* MeleeTag);
	void BlockingTag(class UObject* __WorldContext, struct FGameplayTag* BlockingTag);
	void RightQuadrantTag(class UObject* __WorldContext, struct FGameplayTag* RightQuadrantTag);
	void LeftQuadrantTag(class UObject* __WorldContext, struct FGameplayTag* LeftQuadrantTag);
	void RearQuadrantTag(class UObject* __WorldContext, struct FGameplayTag* RearQuadrantTag);
	void ForwardQuadrantTag(class UObject* __WorldContext, struct FGameplayTag* ForwardQuadrantTag);
	void HeadshotTag(class UObject* __WorldContext, struct FGameplayTag* HeadshotTag);
	void FriendlyFireTag(class UObject* __WorldContext, struct FGameplayTag* FriendlyFireTag);
	void OwnedBySamePlayerTag(class UObject* __WorldContext, struct FGameplayTag* OwnedBySamePlayerTag);
	void PlayerOwnedTag(class UObject* __WorldContext, struct FGameplayTag* PlayerOwnedTag);
	void StructureCompleteTag(class UObject* __WorldContext, struct FGameplayTag* StructureCompleteTag);
	void SchematicTag(class UObject* __WorldContext, struct FGameplayTag* SchematicTag);
	void InvulnerabilityTag(class UObject* __WorldContext, struct FGameplayTag* InvulnerabilityTag);
	void GodModeTag(class UObject* __WorldContext, struct FGameplayTag* GodModeTag);
};

}


