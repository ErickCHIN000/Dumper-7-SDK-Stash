#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProj_Spell_Meteor_Mod_03.LightProj_Spell_Meteor_Mod_03_C
class ULightProj_Spell_Meteor_Mod_03_C : public ULightProj_Spell_Meteor_C
{
public:

	static class UClass* StaticClass();
	static class ULightProj_Spell_Meteor_Mod_03_C* GetDefaultObj();

	void Timer3(class ULightProjectile* Projectile);
	void Timer2(class ULightProjectile* Projectile);
	void Timer1(class ULightProjectile* Projectile);
	void CauseDamage(class ULightProjectile* InProjectile, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, const struct FHitResult& Temp_struct_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides);
	void OnExplode(class ULightProjectile* Projectile, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess);
	void OnBegin(class ULightProjectile* Projectile);
	void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor);
};

}


