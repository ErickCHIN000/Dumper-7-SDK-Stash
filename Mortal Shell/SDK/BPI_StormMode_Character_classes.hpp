#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_StormMode_Character.BPI_StormMode_Character_C
class IBPI_StormMode_Character_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_StormMode_Character_C* GetDefaultObj();

	void OnLuteStateChanged();
	void GetRiposteCathDropItemChance(float* Chance);
	void SpecialWeaponSound();
	void RemoveMaxResolveBonus();
	void AddMaxResolveBonus();
	void GetBurningMaceDamageBonus(float* Bonus);
	void GetBoltDropChance(float* Chance);
	void StormMode_RekindledMaceProjectile();
	void StormMode_GlacialBladeProjectile();
	void GetUnlockedRipostes(TArray<enum class ERiposteTypes>* Ripostes);
	void ReloadRipostes();
	void StormMode_IsCrawling(bool* Crawling);
	void AddStartingRiposte(enum class ERiposteTypes Riposte);
	void ChangeWeaponUtil(enum class EComboTypes NewWeapon);
	void ChangeShellUtil(enum class EArmorTypes Shell);
	void ClearLockOnEnemy();
	bool HasCharacterFullySpawned();
	void HallowedSwordSuper_LifeSteal(float Damage, class AEnemyCharacter_C* Enemy);
	void KickRune_3(float* PoiseReduction);
	void KickRune_2(float* Damage);
	void KickRune_1(class AActor* KickedActor, bool* Success_);
	void HandleKickRunes(class FName* KickRune);
	void AddImmediateEffectRune(const struct FStruct_Rune& Rune);
	void AddResolveOnRunStart();
	void ApplyImmediateRuneEffect(class FName ID);
	void ApplyRuneHealingEffect(class AActor* Actor, class USceneComponent* Component);
	void DisableAllRunesObjects();
	void StopForceWalking();
	void ForceWalking();
	void NewRuneHasBeenAdded();
};

}


