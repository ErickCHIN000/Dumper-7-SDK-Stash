#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass HitReactionLayer_KotC_DragonCompanionExplodeCheck.HitReactionLayer_KotC_DragonCompanionExplodeCheck_C
class UHitReactionLayer_KotC_DragonCompanionExplodeCheck_C : public UHitReactionLayer_Blueprint
{
public:

	static class UClass* StaticClass();
	static class UHitReactionLayer_KotC_DragonCompanionExplodeCheck_C* GetDefaultObj();

	class UHitReactionTag* EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag, class UDamageComponent* HitReceiver, class AActor* CallFunc_GetOwner_ReturnValue, class ADrone_KnightOfTheClaw_DragonPet_C* K2Node_DynamicCast_AsDrone_Knight_Of_the_Claw_Dragon_Pet, bool K2Node_DynamicCast_bSuccess);
};

}


