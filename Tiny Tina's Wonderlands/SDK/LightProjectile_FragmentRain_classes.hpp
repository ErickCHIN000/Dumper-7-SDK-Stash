#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x478 - 0x380)
// BlueprintGeneratedClass LightProjectile_FragmentRain.LightProjectile_FragmentRain_C
class ULightProjectile_FragmentRain_C : public ULightProjectile_SMG_C
{
public:
	struct FEnvQueryParams                       SearchEQS;                                         // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector                               RicochetDirection;                                 // 0x438(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4082[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DamageScalar;                                      // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 Ricochets;                                         // 0x460(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ULightProjectile_FragmentRain_C* GetDefaultObj();

	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, const struct FVector& CallFunc_GetHitLocation_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, TScriptInterface<class IBPI_Ability_FragmentRain_C> K2Node_DynamicCast_AsBPI_Ability_Fragment_Rain, bool K2Node_DynamicCast_bSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, class AActor* CallFunc_FragmentRain_GetTargetExternal_FragmentRainTarget, bool CallFunc_FragmentRain_GetTargetExternal_Res, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetHitActor_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_GetDamageCauser_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
};

}


