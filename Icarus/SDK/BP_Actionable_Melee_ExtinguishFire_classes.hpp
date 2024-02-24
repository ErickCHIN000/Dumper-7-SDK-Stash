#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3C8 - 0x3A0)
// BlueprintGeneratedClass BP_Actionable_Melee_ExtinguishFire.BP_Actionable_Melee_ExtinguishFire_C
class UBP_Actionable_Melee_ExtinguishFire_C : public UBP_ActionableBehaviour_Generic_Melee_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODEvent*                            FMODEvent_Extinguish;                              // 0x3A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExtinguishChance;                                  // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F38[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                HitAnimNotifyName;                                 // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Actionable_Melee_ExtinguishFire_C* GetDefaultObj();

	void ProcessDurability(int32 DuribilityLoss, int32 CalculatedToolDurabilityLoss, int32 CallFunc_GetStatAdjustedDurability_ReturnValue, class AIcarusItem* CallFunc_GetFocusedItemActor_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UDurableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_DealSelfDamage_ReturnValue, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue);
	void Try_Extinguish(const struct FVector& SpherePos, class AActor* InvokingActor, int32* ExtinguishCount, int32 NumTargetsToExtinguish, int32 ExtinguishedCount, float BaseExtinguishTime, float BaseExtinguishRadius, int32 BaseExtinguishCountPerAttempt, float FailedExtinguishChanceAdded, float BaseExtinguishChance, int32 Temp_int_Array_Index_Variable, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_RandomBoolWithWeight_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_Vector_Up_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMulti_OutHits, bool CallFunc_SphereTraceMulti_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFlammableTargetExtinguish& CallFunc_MakeFlammableTargetExtinguishFromHitResult_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFlammableInstance* CallFunc_TryExtinguishFlammableTarget_OutFlammableInstance, enum class EFireExtinguishResult CallFunc_TryExtinguishFlammableTarget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnActionHit(class AActor* InvokingActor, class UPrimitiveComponent* OverlappedComponent, struct FHitResult& SweepResult);
	void MULTI_ExtinguishEffects(const struct FVector& HitLocation);
	void ExecuteUbergraph_BP_Actionable_Melee_ExtinguishFire(int32 EntryPoint, class AActor* K2Node_Event_InvokingActor, class UPrimitiveComponent* K2Node_Event_OverlappedComponent, const struct FHitResult& K2Node_Event_SweepResult, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Try_Extinguish_ExtinguishCount, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& K2Node_CustomEvent_HitLocation, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
};

}


