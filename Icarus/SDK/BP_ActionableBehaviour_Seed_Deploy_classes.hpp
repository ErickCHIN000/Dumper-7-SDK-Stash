#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xC52 - 0xC52)
// BlueprintGeneratedClass BP_ActionableBehaviour_Seed_Deploy.BP_ActionableBehaviour_Seed_Deploy_C
class UBP_ActionableBehaviour_Seed_Deploy_C : public UBP_ActionableBehaviour_DeployableBase_C
{
public:

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Seed_Deploy_C* GetDefaultObj();

	void CustomDeploymentCheck(class AActor* HitActor, bool* ValidPlacement, class FText* Reason, class ABP_Crop_Plot_Base_C* K2Node_DynamicCast_AsBP_Crop_Plot_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnySeeds_IsSeeded, bool CallFunc_Not_PreBool_ReturnValue);
	void BlueprintDeploy(const struct FTransform& DeployTransform, class AActor* FoundationActor, const struct FItemData& ItemData, int32 VarientIndex, class AActor* CallFunc_GetOwner_ReturnValue, class ADeployable* K2Node_DynamicCast_AsDeployable, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_Crop_Plot_Base_C* K2Node_DynamicCast_AsBP_Crop_Plot_Base, bool K2Node_DynamicCast_bSuccess_1, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CanPlantSeed_CanPlant, bool CallFunc_PlantSeed_Planted, class UDeployableSubsystem* CallFunc_GetWorldSubsystem_ReturnValue);
};

}

