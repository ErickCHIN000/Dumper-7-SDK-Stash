#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC4 (0x414 - 0x350)
// BlueprintGeneratedClass DamageData_SWicked.DamageData_SWicked_C
class UDamageData_SWicked_C : public UDamageData_Spell_C
{
public:
	class UParticleSystem*                       PoisonImpactVFX;                                   // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       FindChainTargetEQS;                                // 0x358(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        ChildProjDMGScalar;                                // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDamageData_SWicked_C* GetDefaultObj();

	void FireProjectile(const struct FDamageDataEventDetails& Details, class AActor* HitTarget, class AActor* DamageActor, class AActor* DamageInstigator, class AActor* DamageCauser, class AGrenadeMod* K2Node_DynamicCast_AsGrenade_Mod, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue1, const struct FSpellLightProjectileInitializationData& K2Node_MakeStruct_SpellLightProjectileInitializationData);
	void RichochetProjectile(TArray<class AActor*>& HitActors, class AActor* DamageActor, class AActor* DamageCauser, const struct FDamageDataEventDetails& Details, class AActor* DamageInstigator, int32 ChainTargetCount, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, class AActor* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details, class AGrenadeMod* K2Node_DynamicCast_AsGrenade_Mod, bool K2Node_DynamicCast_bSuccess, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue);
};

}


