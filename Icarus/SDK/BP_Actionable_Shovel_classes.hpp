#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x200 (0x5A0 - 0x3A0)
// BlueprintGeneratedClass BP_Actionable_Shovel.BP_Actionable_Shovel_C
class UBP_Actionable_Shovel_C : public UBP_ActionableBehaviour_Generic_Melee_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        SnowClearThresholdDegrees;                         // 0x3A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             GainedResource;                                    // 0x3B0(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UBP_Actionable_Shovel_C* GetDefaultObj();

	void OnActionHitEvent(class AActor* Invoking_Actor, class UPrimitiveComponent* OverlappedComponent_, struct FHitResult& SweepResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<struct FAlterationsEnum>& K2Node_MakeArray_Array, TArray<struct FIcarusStatReplicated>& K2Node_MakeArray_Array_1, const struct FIcarusItemSpawnParametersAdvanced& K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, int32 Temp_int_Array_Index_Variable, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, const struct FItemRewards& CallFunc_GetItemRewardsStruct_ItemRewards, enum class EValid CallFunc_GetItemRewardsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemRewardEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FItemData& CallFunc_GenerateItemFromReward_ReturnValue, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FVector& CallFunc_Vector_Up_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_DegAcos_ReturnValue, const struct FItemData& K2Node_MakeStruct_ItemData, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FItemData& CallFunc_CreateCustomItem_ReturnValue, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ExecuteUbergraph_BP_Actionable_Shovel(int32 EntryPoint);
};

}


