#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x438 - 0x380)
// BlueprintGeneratedClass LightProjectile_RoisensSpite_Child.LightProjectile_RoisensSpite_Child_C
class ULightProjectile_RoisensSpite_Child_C : public ULightProjectile_Crossbow_Bolt_PS_C
{
public:
	struct FEnvQueryParams                       RoisenEQS;                                         // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ULightProjectile_RoisensSpite_Child_C* GetDefaultObj();

	void OnBegin(class ULightProjectile* Projectile, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


