#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x388 - 0x378)
// BlueprintGeneratedClass LightProj_Spell_Meteor_Targeting.LightProj_Spell_Meteor_Targeting_C
class ULightProj_Spell_Meteor_Targeting_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_1B73[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                MeteorSpellActorToSpawn;                           // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULightProj_Spell_Meteor_Targeting_C* GetDefaultObj();

	void OnExplode(class ULightProjectile* Projectile, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


