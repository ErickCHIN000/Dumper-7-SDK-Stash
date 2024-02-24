#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xF0 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_LinkBeacon.BP_Interactable_LinkBeacon_C
class UBP_Interactable_LinkBeacon_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Interactable_LinkBeacon_C* GetDefaultObj();

	void GetInstigatorBeaconTool(class AActor* Instigator, class ABP_SkeletalItem_Beacon_Tool_C** BeaconTool, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AIcarusItem* CallFunc_GetFocusedItem_ReturnValue, class ABP_SkeletalItem_Beacon_Tool_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Beacon_Tool, bool K2Node_DynamicCast_bSuccess_1);
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class ABP_SkeletalItem_Beacon_Tool_C* CallFunc_GetInstigatorBeaconTool_BeaconTool, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Interactable_LinkBeacon(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class ABP_SkeletalItem_Beacon_Tool_C* CallFunc_GetInstigatorBeaconTool_BeaconTool, bool CallFunc_IsValid_ReturnValue);
};

}


