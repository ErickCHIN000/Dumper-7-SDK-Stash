#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C
class IIFeat_KnightOfTheClaw_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIFeat_KnightOfTheClaw_C* GetDefaultObj();

	void KnightOfTheClawStartDragonBreathAttack(bool* Res);
	void HammerOfTheDragonGodsSetRecallFXState(bool State, bool* Res);
	void KnightOfTheClassPassive7_StartRegen(bool* Res);
	void DragonAuraRefresh(bool* Res);
	void DragonAuraRegisterThornyAura(bool Enable, class AActor* Target);
	void TryToRemoveDragonAuraEffect(class AActor* TargetActor, bool* Res);
	void UnregisterDragonAuraStatusEffect(class AActor* TargetActor, bool* Res);
	void RegisterDragonAuraStatusEffect(class AActor* TargetActor, class UGbxAttributeData* Attribute, int32 Grade, float Duration_Optional_, struct FGbxAttributeModifierHandle* AttributeHandle, bool* Res);
	void UnregisterDragonAuraCDM(class AActor* TargetActor, class UConditionalDamageModifier* CDM, bool bUseDamageCauser, bool* Res);
	void RegisterDragonAuraCDM(class AActor* TargetActor, class UConditionalDamageModifier* CDM, class UGbxAttributeData* PassiveAttribute, int32 Grade, bool bUseDamageCauser, struct FGbxAttributeModifierHandle* AttributeHandle, bool* Res);
	void RemoveDragonAura(class AIO_KotC_DragonAura_C* DragonAura);
	void ActivateDragonAura();
	void KnightOfTheClawSpawnDragonBreathEmitter(bool Enable, bool* Res);
	void KnightOfTheClawPassive9_GetSpentStacks(int32* Stacks);
	void KnightOfTheClawPassive9_ResetStacks(bool* Res);
	void KnightOfTheClawPassive9_Getstacks(int32* Res);
	void KnightOfTheClawPassive9_AddStack(int32* Res);
	void StopDragonRoarEffect(bool* Res);
	void StartDragonRoarEffect(bool* Res);
	void DespawnDragonPet(bool* Res);
	void GetDragonPet(class AActor** Ref);
	void SpawnDragonPet(bool* Res);
};

}


