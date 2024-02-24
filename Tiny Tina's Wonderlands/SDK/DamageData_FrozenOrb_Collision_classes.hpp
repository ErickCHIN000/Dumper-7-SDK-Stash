#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x350 - 0x350)
// BlueprintGeneratedClass DamageData_FrozenOrb_Collision.DamageData_FrozenOrb_Collision_C
class UDamageData_FrozenOrb_Collision_C : public USpellDamageData
{
public:

	static class UClass* StaticClass();
	static class UDamageData_FrozenOrb_Collision_C* GetDefaultObj();

	void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details, TScriptInterface<class IBPI_FrozenOrb_C> K2Node_DynamicCast_AsBPI_Frozen_Orb, bool K2Node_DynamicCast_bSuccess);
};

}


