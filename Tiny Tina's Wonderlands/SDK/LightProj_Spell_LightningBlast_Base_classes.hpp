#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x438 - 0x378)
// BlueprintGeneratedClass LightProj_Spell_LightningBlast_Base.LightProj_Spell_LightningBlast_Base_C
class ULightProj_Spell_LightningBlast_Base_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_2165[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       EQSSearch;                                         // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ULightProj_Spell_LightningBlast_Base_C* GetDefaultObj();

	void OnBegin(class ULightProjectile* Projectile, const struct FSpawnableSpellBasicData& SpellData, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, bool CallFunc_DoesSpellHavePart_ReturnValue);
	void GetSpellData(class ULightProjectile* Projectile, struct FSpawnableSpellBasicData* Res, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess);
	void CreateChainController(class ULightProjectile* Projectile, const struct FHitResult& HitResults, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, class AActor* CallFunc_GetHitActor_ReturnValue, const struct FVector& CallFunc_GetHitLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue);
};

}


