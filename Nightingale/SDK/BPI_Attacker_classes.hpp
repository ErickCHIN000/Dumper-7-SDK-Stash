#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Attacker.BPI_Attacker_C
class IBPI_Attacker_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Attacker_C* GetDefaultObj();

	void StopCastEffects(bool* Success);
	void PlayCastEffects(bool* Success);
	void GetEquippedWeapon(class AEquippableItem** CreatureWeapon);
	void EquipWeapon(const struct FGameplayTag& GameplayWeaponTag, bool* Succeeded);
	void SelectWeapon(class AActor* AttackTarget, struct FGameplayTag* GameplayWeaponTag);
	void DisableMeleeCollision(bool* bSuccess);
	void EnableMeleeCollision(bool* bSuccess);
	void CanAttack(bool* bCanAttack);
	void SelectAttack(class AActor* AttackTarget, struct FGameplayTag* GameplayAttackTag);
	void Attack(const struct FGameplayTag& GameplayAttackTag, bool* Succeeded);
};

}


