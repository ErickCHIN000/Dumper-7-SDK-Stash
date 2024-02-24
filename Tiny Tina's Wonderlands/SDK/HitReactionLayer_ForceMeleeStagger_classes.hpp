#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass HitReactionLayer_ForceMeleeStagger.HitReactionLayer_ForceMeleeStagger_C
class UHitReactionLayer_ForceMeleeStagger_C : public UHitReactionLayer_Blueprint
{
public:

	static class UClass* StaticClass();
	static class UHitReactionLayer_ForceMeleeStagger_C* GetDefaultObj();

	class UHitReactionTag* EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag, class UDataTable* ForceTable, float IncomingForce, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsPlayer_ReturnValue, float CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, float CallFunc_GetDataTableValue_OutValue2, bool CallFunc_GetDataTableValue_ReturnValue2, float CallFunc_GetDataTableValue_OutValue3, bool CallFunc_GetDataTableValue_ReturnValue3, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, bool CallFunc_LessEqual_FloatFloat_ReturnValue3);
};

}


