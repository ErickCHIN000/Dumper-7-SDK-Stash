#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x358 - 0x350)
// BlueprintGeneratedClass Damage_SG_MagicProjectile_TOR_Alt.Damage_SG_MagicProjectile_TOR_Alt_C
class UDamage_SG_MagicProjectile_TOR_Alt_C : public UDamage_SG_MagicProjectile_C
{
public:
	class AActor*                                DamageCauser;                                      // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDamage_SG_MagicProjectile_TOR_Alt_C* GetDefaultObj();

	void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details, class AActor* PlayerOwner, class AActor* InDamageCauser, class AActor* HitActor, class UClass* LightProjectileData, float StickyDamage, TScriptInterface<class IBPI_MagicProjectile_TOR_C> K2Node_DynamicCast_AsBPI_Magic_Projectile_TOR, bool K2Node_DynamicCast_bSuccess);
};

}


