#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x100 - 0x100)
// BlueprintGeneratedClass BP_Interactable_Interact_CropPlot.BP_Interactable_Interact_CropPlot_C
class UBP_Interactable_Interact_CropPlot_C : public UBP_Interactable_Interact_Deployable_C
{
public:

	static class UClass* StaticClass();
	static class UBP_Interactable_Interact_CropPlot_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_CanInteract_ReturnValue, class ABP_Crop_Plot_Base_C* K2Node_DynamicCast_AsBP_Crop_Plot_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnySeeds_IsSeeded, bool CallFunc_CanHarvestAny_CanHarvest, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


