#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProj_Spell_Eruption_Mod_02.LightProj_Spell_Eruption_Mod_02_C
class ULightProj_Spell_Eruption_Mod_02_C : public ULightProj_Spell_Eruption_Base_C
{
public:

	static class UClass* StaticClass();
	static class ULightProj_Spell_Eruption_Mod_02_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, float NextRadius, float NextDamage, const struct FSpawnableSpellBasicData& ProjSpellData, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, const struct FHitResult& Temp_struct_Variable, float CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1);
};

}


