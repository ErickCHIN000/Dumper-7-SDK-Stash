#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProj_Spell_Eruption_Mod_04.LightProj_Spell_Eruption_Mod_04_C
class ULightProj_Spell_Eruption_Mod_04_C : public ULightProj_Spell_Eruption_Base_C
{
public:

	static class UClass* StaticClass();
	static class ULightProj_Spell_Eruption_Mod_04_C* GetDefaultObj();

	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FHitResult& SpellHitInfo, const struct FSpawnableSpellBasicData& InSpellData, bool Temp_bool_Has_Been_Initd_Variable, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable, const struct FTransform& CallFunc_TransformSplat_SplatTransform, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue);
};

}


