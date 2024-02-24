#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_ResourceNodes.BPFL_ResourceNodes_C
class UBPFL_ResourceNodes_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_ResourceNodes_C* GetDefaultObj();

	void GetInstanceIdFromInteractionData(struct FInteractionData& InteractionData, class UObject* __WorldContext, int32* InstanceID, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void GetInstanceFromInteractionData(class ABP_ResourceNode_IIM_C* ResourceNodeIIM, struct FInteractionData& InteractionData, class UObject* __WorldContext, struct FIIMInstance* IIMInstance, int32 CallFunc_GetInstanceIdFromInteractionData_InstanceId, bool CallFunc_IsValid_ReturnValue, const struct FIIMInstance& CallFunc_GetInstance_OutInstance, bool CallFunc_GetInstance_ReturnValue, const struct FIIMInstance& K2Node_MakeStruct_IIMInstance);
};

}


