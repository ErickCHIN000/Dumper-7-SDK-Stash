#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass HitReactionLayer_HitByVehicle.HitReactionLayer_HitByVehicle_C
class UHitReactionLayer_HitByVehicle_C : public UHitReactionLayer_Blueprint
{
public:

	static class UClass* StaticClass();
	static class UHitReactionLayer_HitByVehicle_C* GetDefaultObj();

	class UHitReactionTag* EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag, float RagdollMinVelocityZ, float LargeImpactForce, float SmallImpactForce, class UDamageSource_Vehicle_C* K2Node_DynamicCast_AsDamage_Source_Vehicle, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AOakVehicle* CallFunc_FindAssociatedOakVehicle_ReturnValue, class AOakVehicle* K2Node_DynamicCast_AsOak_Vehicle, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, class UCollisionDamageComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, const class FString& CallFunc_BuildString_Float_ReturnValue, bool CallFunc_IsHitReactionTagActive_ReturnValue, bool CallFunc_IsHitReactionTagActive_ReturnValue1, bool CallFunc_IsHitReactionTagActive_ReturnValue2, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Abs_ReturnValue, class UAIDodgeComponent* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


