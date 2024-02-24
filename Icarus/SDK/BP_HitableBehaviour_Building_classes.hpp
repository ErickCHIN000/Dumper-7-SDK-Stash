#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD0 - 0xD0)
// BlueprintGeneratedClass BP_HitableBehaviour_Building.BP_HitableBehaviour_Building_C
class UBP_HitableBehaviour_Building_C : public UHitableComponent
{
public:

	static class UClass* StaticClass();
	static class UBP_HitableBehaviour_Building_C* GetDefaultObj();

	bool ConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket, bool CallFunc_ConsumeHit_ReturnValue, enum class EIcarusDamageType CallFunc_GetDamageTypeFromEvent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess);
	bool CanConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket, enum class EIcarusDamageType CallFunc_GetDamageTypeFromEvent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


