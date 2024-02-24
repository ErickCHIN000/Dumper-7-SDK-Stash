#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x34 - 0x30)
// BlueprintGeneratedClass HitReactionLayer_DeathByVehicle.HitReactionLayer_DeathByVehicle_C
class UHitReactionLayer_DeathByVehicle_C : public UHitReactionLayer_Blueprint
{
public:
	float                                        OverkillThresholdPercent;                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHitReactionLayer_DeathByVehicle_C* GetDefaultObj();

	class UHitReactionTag* EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UDamageSource_Vehicle_C* K2Node_DynamicCast_AsDamage_Source_Vehicle, bool K2Node_DynamicCast_bSuccess);
};

}


