#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass GC_Weapon_MuzzleFlash_Projectile.GC_Weapon_MuzzleFlash_Projectile_C
class UGC_Weapon_MuzzleFlash_Projectile_C : public UGC_Weapon_MuzzleFlash_C
{
public:

	static class UClass* StaticClass();
	static class UGC_Weapon_MuzzleFlash_Projectile_C* GetDefaultObj();

	void HandleLaunchSoundLoaded(class UAkAudioEvent* LoadedEvent);
	void PlayLaunchSound(class UObject* MyTarget, class ABP_ProjectileBase_C* Projectile, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CachedReturnValue, bool CallFunc_OnExecute_ReturnValue);
	void SpawnMuzzleFlash(class UObject* MyTarget, class USceneComponent* AttachToComponent, struct FS_RangedAbilityResponses& RangedAbilityResponse, bool FirstPerson, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetStartingLocation_StartingLocation, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue);
	void GetMuzzleFlashParameters(class AActor* Target, bool IsFirstPerson, bool* ShouldExecute, class USceneComponent** AttachToComponent, struct FS_RangedAbilityResponses* RangedAbilityResponse, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess);
	void IsFirstPerson(class AActor* MyTarget, bool* IsFirstPerson, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue);
};

}


