#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x440 - 0x378)
// BlueprintGeneratedClass LightProj_SMG_Magic_Fire.LightProj_SMG_Magic_Fire_C
class ULightProj_SMG_Magic_Fire_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_3D31[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       EQS_NearbyTargets;                                 // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FRandomStream                         RandStream;                                        // 0x438(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ULightProj_SMG_Magic_Fire_C* GetDefaultObj();

	void Timer1(class ULightProjectile* Projectile, bool CallFunc_RandomBoolWithWeight_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerFromStream_ReturnValue, class AActor* CallFunc_Array_Get_Item);
};

}


