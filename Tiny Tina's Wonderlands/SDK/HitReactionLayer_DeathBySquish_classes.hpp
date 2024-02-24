#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass HitReactionLayer_DeathBySquish.HitReactionLayer_DeathBySquish_C
class UHitReactionLayer_DeathBySquish_C : public UHitReactionLayer_Blueprint
{
public:

	static class UClass* StaticClass();
	static class UHitReactionLayer_DeathBySquish_C* GetDefaultObj();

	class UHitReactionTag* EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
};

}


