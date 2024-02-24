#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD0 - 0xD0)
// BlueprintGeneratedClass BP_Hitable_AnimalCharacter.BP_Hitable_AnimalCharacter_C
class UBP_Hitable_AnimalCharacter_C : public UHitableComponent
{
public:

	static class UClass* StaticClass();
	static class UBP_Hitable_AnimalCharacter_C* GetDefaultObj();

	bool ConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket, class ABP_GOAP_Corpse_C* CorpseRef, class AIcarusPlayerController* ControllerRef, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, const struct FItemData& CallFunc_GetSerialisedItemData_ReturnValue, float CallFunc_RandomFloat_ReturnValue, class UPlayerFeedbackSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue, bool CallFunc_ItemMatchesQuery_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class ABP_GOAP_Corpse_C* K2Node_DynamicCast_AsBP_GOAP_Corpse, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	bool CanConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket);
};

}


