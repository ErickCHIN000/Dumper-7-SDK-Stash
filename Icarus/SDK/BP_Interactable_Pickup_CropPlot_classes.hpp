#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x118 - 0x108)
// BlueprintGeneratedClass BP_Interactable_Pickup_CropPlot.BP_Interactable_Pickup_CropPlot_C
class UBP_Interactable_Pickup_CropPlot_C : public UBP_Interactable_Pickup_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_DeployableBase_C*                  Deployable;                                        // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_Pickup_CropPlot_C* GetDefaultObj();

	void Pickup_Item(bool* PickedUp, bool CallFunc_Deployable_Pickup_PickedUp);
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_IsValid_ReturnValue, class ABP_Farming_Plot_Base_C* K2Node_DynamicCast_AsBP_Farming_Plot_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Interactable_Pickup_CropPlot(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess);
};

}


