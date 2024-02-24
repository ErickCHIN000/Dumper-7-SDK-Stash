#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x388 - 0x378)
// BlueprintGeneratedClass LightProj_UndeadPact.LightProj_UndeadPact_C
class ULightProj_UndeadPact_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_3E21[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           AudioGhostProjExplo;                               // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULightProj_UndeadPact_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue);
	void FireProj(class ULightProjectile* Projectile, bool Temp_bool_Variable, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, class AActor* CallFunc_GetDamageCauser_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AShield* K2Node_DynamicCast_AsShield, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetTarget_ReturnValue, float CallFunc_GetBaseShieldDamage_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
	void HomeIn(class ULightProjectile* Projectile);
};

}


