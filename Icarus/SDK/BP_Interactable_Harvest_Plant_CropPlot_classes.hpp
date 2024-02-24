#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x208 (0x2F0 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_Harvest_Plant_CropPlot.BP_Interactable_Harvest_Plant_CropPlot_C
class UBP_Interactable_Harvest_Plant_CropPlot_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusPlayerCharacter*                Current_Player;                                    // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DeployableBase_C*                  Deployable;                                        // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             Seed;                                              // 0x100(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UBP_Interactable_Harvest_Plant_CropPlot_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFunctional_bFunctional, bool CallFunc_IsValid_ReturnValue, class ABP_Crop_Plot_Base_C* K2Node_DynamicCast_AsBP_Crop_Plot_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanHarvest_CanHarvest);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Interactable_Harvest_Plant_CropPlot(int32 EntryPoint, class ABP_Crop_Plot_Base_C* K2Node_DynamicCast_AsBP_Crop_Plot_Base, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess_1, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_2, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_HarvestResource_Harvested);
};

}


