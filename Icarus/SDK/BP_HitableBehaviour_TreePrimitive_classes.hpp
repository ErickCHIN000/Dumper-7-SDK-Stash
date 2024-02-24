#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xD8 - 0xD0)
// BlueprintGeneratedClass BP_HitableBehaviour_TreePrimitive.BP_HitableBehaviour_TreePrimitive_C
class UBP_HitableBehaviour_TreePrimitive_C : public UHitableComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_HitableBehaviour_TreePrimitive_C* GetDefaultObj();

	bool ConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_StaticItem_TreePrimitive_C* K2Node_DynamicCast_AsBP_Static_Item_Tree_Primitive, bool K2Node_DynamicCast_bSuccess, enum class EIcarusDamageType CallFunc_GetDamageTypeFromEvent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
	bool CanConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, bool CallFunc_HasTag_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_HitableBehaviour_TreePrimitive(int32 EntryPoint);
};

}


