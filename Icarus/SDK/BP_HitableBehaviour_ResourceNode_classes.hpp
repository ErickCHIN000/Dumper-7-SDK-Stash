#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xD8 - 0xD0)
// BlueprintGeneratedClass BP_HitableBehaviour_ResourceNode.BP_HitableBehaviour_ResourceNode_C
class UBP_HitableBehaviour_ResourceNode_C : public UHitableComponent
{
public:
	class AIcarusPlayerCharacter*                Player;                                            // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_HitableBehaviour_ResourceNode_C* GetDefaultObj();

	bool ConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket, bool CallFunc_ConsumeHit_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasTag_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetStat_ReturnValue, const struct FToolTypesEnum& CallFunc_IntToStruct_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_ResourceNodeBase_C* K2Node_DynamicCast_AsBP_Resource_Node_Base, bool K2Node_DynamicCast_bSuccess_1);
	bool CanConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, class ABP_ResourceNodeBase_C* K2Node_DynamicCast_AsBP_Resource_Node_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasTag_ReturnValue);
};

}


