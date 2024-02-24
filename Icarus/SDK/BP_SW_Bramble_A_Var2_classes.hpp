#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x3D8 - 0x3CC)
// BlueprintGeneratedClass BP_SW_Bramble_A_Var2.BP_SW_Bramble_A_Var2_C
class ABP_SW_Bramble_A_Var2_C : public ABP_ResourceNodeBase_C
{
public:
	uint8                                        Pad_2C8F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_SW_Bramble_A_Var2_C* GetDefaultObj();

	void PlayHarvestFX(const struct FVector& Location, class AIcarusPlayerCharacter* Instigator, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_HAV_SW_Bramble_A_Var2_C* CallFunc_FinishSpawningActor_ReturnValue);
	void ReceiveBeginPlay();
	void BndEvt__BP_SW_Bramble_A_Var1_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_SW_Bramble_A_Var2(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, const struct FModifier& K2Node_MakeStruct_Modifier, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, class ABP_Mount_Base_C* K2Node_DynamicCast_AsBP_Mount_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasModifierState_ReturnValue, bool CallFunc_HasModifierState_ReturnValue_1, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasModifierState_ReturnValue_2, int32 CallFunc_AddModifierState_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier_1, const struct FModifier& K2Node_MakeStruct_Modifier_2, int32 CallFunc_AddModifierState_ReturnValue_1, int32 CallFunc_AddModifierState_ReturnValue_2);
};

}


