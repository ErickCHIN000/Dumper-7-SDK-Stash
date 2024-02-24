#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProjectile_HW_COV_SplatBall_AI.LightProjectile_HW_COV_SplatBall_AI_C
class ULightProjectile_HW_COV_SplatBall_AI_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_3D62[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectile_HW_COV_SplatBall_AI_C* GetDefaultObj();

	void OnExplode(class ULightProjectile* Projectile, class USplatData* SplatData, class AActor* CallFunc_GetSource_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue1, bool CallFunc_EqualEqual_ClassClass_ReturnValue2, bool CallFunc_EqualEqual_ClassClass_ReturnValue3, bool CallFunc_EqualEqual_ClassClass_ReturnValue4, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


