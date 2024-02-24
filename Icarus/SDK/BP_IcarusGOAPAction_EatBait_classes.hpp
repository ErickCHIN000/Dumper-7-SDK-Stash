#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xD8 - 0xA0)
// BlueprintGeneratedClass BP_IcarusGOAPAction_EatBait.BP_IcarusGOAPAction_EatBait_C
class UBP_IcarusGOAPAction_EatBait_C : public UBP_IcarusGOAPAction_Interact_Base_C
{
public:
	class AIcarusItem*                           TargetBait;                                        // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTagQueriesEnum                       OmnivoreBaitQuery;                                 // 0xA8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTagQueriesEnum                       CarnivoreBaitQuery;                                // 0xB8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTagQueriesEnum                       HerbivoreBaitQuery;                                // 0xC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_EatBait_C* GetDefaultObj();

	void GetBestBaitQueryForController(class AIcarusNPCGOAPController* Controller, struct FTagQueriesEnum* BaitQuery, bool* Success, bool IsHerbivore, bool IsCarnivore, const struct FGameplayTagContainer& PawnGameplayTags, const struct FTagQueriesEnum& HerbivoreQuery, const struct FTagQueriesEnum& CarnivoreQuery, bool Temp_bool_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool Temp_bool_Variable_1, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FTagQueriesEnum& K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, const struct FTagQueriesEnum& K2Node_Select_Default_1, const struct FTagQueriesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FTagQueriesRowHandle& CallFunc_StructToRowHandle_ReturnValue_1, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries_1, enum class EValid CallFunc_GetTagQueriesStruct_Paths_1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue_1);
	void GetNearestRelevantBaitItem(class AIcarusNPCGOAPController* ForController, bool SkipPathCheck, class AIcarusItem** BaitItem, struct FVector* PathEnd, float MaxDistance, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTagQueriesEnum& CallFunc_GetBestBaitQueryForController_BaitQuery, bool CallFunc_GetBestBaitQueryForController_Success, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTagQueriesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AIcarusItem*>& CallFunc_GetAllActorsOfClassMatchingTagQuery_OutActors, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& Temp_wildcard_Variable, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UDeployableComponent* CallFunc_GetTrait_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint, bool CallFunc_ProjectReachablePointAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool GOAPAnimNotify(const class FString& NotifyName, class AIcarusNPCGOAPController* Controller, bool CallFunc_GOAPAnimNotify_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
	void EatBait(class AIcarusNPCGOAPController* Controller, bool Return, int32 FoodEaten, int32 ItemSlot, bool CallFunc_IsValid_ReturnValue, class AIcarusNPCGOAPCharacter* CallFunc_GetNPCCharacter_ReturnValue, TScriptInterface<class IBP_GOAPBaitInterface_C> K2Node_DynamicCast_AsBP_GOAPBait_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FModifierStatesRowHandle& CallFunc_GetModifierToApplyOnConsume_Modifier, float CallFunc_GetModifierToApplyOnConsume_Lifetime, const struct FModifier& K2Node_MakeStruct_Modifier, bool CallFunc_IsRowHandleValid_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FGOAPMotivationsRowHandle& CallFunc_MakeGOAPMotivations_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue);
	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, class AIcarusItem* CallFunc_GetNearestRelevantBaitItem_BaitItem, const struct FVector& CallFunc_GetNearestRelevantBaitItem_PathEnd, bool CallFunc_CheckContextualPreconditions_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetInteractLocation(class AIcarusNPCGOAPController* ForController, struct FVector* OutLocation, bool* Success, class AIcarusNPCGOAPController* Controller, class AIcarusItem* CallFunc_GetNearestRelevantBaitItem_BaitItem, const struct FVector& CallFunc_GetNearestRelevantBaitItem_PathEnd, bool CallFunc_IsValid_ReturnValue);
};

}


