#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x440 - 0x380)
// BlueprintGeneratedClass LightProjectile_HYP_BlazingVolley.LightProjectile_HYP_BlazingVolley_C
class ULightProjectile_HYP_BlazingVolley_C : public ULightProjectile_HYP_Magic_Fire_01_C
{
public:
	struct FEnvQueryParams                       EQS_NearbyTargets;                                 // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FRandomStream                         RandStream;                                        // 0x438(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ULightProjectile_HYP_BlazingVolley_C* GetDefaultObj();

	void Timer1(class ULightProjectile* Projectile, class AActor* TargetEnemy, bool TargetFound, class AActor* CallFunc_GetTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_GetFiringPatternID_ReturnValue, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue);
};

}


