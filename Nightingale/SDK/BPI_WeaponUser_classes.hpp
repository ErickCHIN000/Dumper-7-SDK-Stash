#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_WeaponUser.BPI_WeaponUser_C
class IBPI_WeaponUser_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_WeaponUser_C* GetDefaultObj();

	void HandleHitConnectedPredictive(struct FHitResult& HitResult);
	void PlayItemCameraShake(const struct FGameplayTag& ShakeTag, double Scale, const struct FGameplayTag& SlotTag);
	void PlayAttackAnimation(class UAnimMontage* Montage3P);
	void ConsumeAmmo(const struct FItemDataReference& AmmoReference, int32 Amount, int32* AmountConsumed);
	void GetAmmoAmount(const struct FItemDataReference& ItemReference, int32* Amount);
	void HandlePostHitConnected(class AActor* Hit_Actor, double Damage, enum class E_HitType HitType);
	void GetShotInstigator(class AController** Controller);
	void HandlePostAttack();
	void GetProjectileStart(double ProjectileLaunchDistance, struct FVector* ProjectileStart);
	void GetShootVector(double ProjectileLaunchDistance, struct FVector* ForwardVector);
	void GetEquippedRangedWeapon(const struct FGameplayTag& ContextTag, class AEquippableItem** EquippedItem);
};

}


