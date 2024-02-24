#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4D8 - 0x4D0)
// BlueprintGeneratedClass LightProjectile_JAK_PS_Catatumbo.LightProjectile_JAK_PS_Catatumbo_C
class ULightProjectile_JAK_PS_Catatumbo_C : public ULightProjectile_JAK_PS_CrossbowBolt_C
{
public:
	class UWwiseEvent*                           AudioPlayLightningStrike;                          // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULightProjectile_JAK_PS_Catatumbo_C* GetDefaultObj();

	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class FName CallFunc_GetCompanionTargetingSocket_Socket, class APawn* CallFunc_GetInstigator_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnPlayerParticleSystemAtLocationMulticast_Res, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FHitResult& Temp_struct_Variable);
};

}


