#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x110 - 0xF8)
// BlueprintGeneratedClass BP_Interactable_Interact_ArmSatellite.BP_Interactable_Interact_ArmSatellite_C
class UBP_Interactable_Interact_ArmSatellite_C : public UBP_Interactable_WorldObject_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusPlayerCharacter*                Current_Player_0;                                  // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DeployableBase_C*                  Deployable;                                        // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_Interact_ArmSatellite_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_BW4_Satellite_Object_C* K2Node_DynamicCast_AsBP_BW4_Satellite_Object, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Interactable_Interact_ArmSatellite(int32 EntryPoint);
};

}


