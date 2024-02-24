#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LighProj_Tiabolt_M2_1.LighProj_Tiabolt_M2_1_C
class ULighProj_Tiabolt_M2_1_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_2A8D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULighProj_Tiabolt_M2_1_C* GetDefaultObj();

	void FireBonusProjectile(class UClass* Projectile_Class, class UClass* DamageType, class ULightProjectile* Projectile, class AActor* CallFunc_GetSource_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
	void OnBegin(class ULightProjectile* Projectile, class AActor* CallFunc_GetSource_ReturnValue, class ABPWeap_SR_DAL_Tiabolt_C* K2Node_DynamicCast_AsBPWeap_SR_DAL_Tiabolt, bool K2Node_DynamicCast_bSuccess);
};

}


