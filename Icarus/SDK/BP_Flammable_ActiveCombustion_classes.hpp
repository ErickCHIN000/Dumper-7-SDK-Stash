#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x108 - 0x100)
// BlueprintGeneratedClass BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C
class UBP_Flammable_ActiveCombustion_C : public UFlammableActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x100(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Flammable_ActiveCombustion_C* GetDefaultObj();

	bool CanPropagateToTarget(const struct FFlammableTargetIgnite& Target, bool CallFunc_IsTargetDeployableFoundation_IsDeployableFoundation, bool CallFunc_IsTargetHeldByPlayer_IsOwningPlayer, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void IsTargetDeployableFoundation(const struct FFlammableTargetIgnite& Target, bool* IsDeployableFoundation, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void IsTargetHeldByPlayer(const struct FFlammableTargetIgnite& Target, bool* IsOwningPlayer, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	struct FBoxSphereBounds GetLocalBounds(class AActor* CallFunc_GetOwner_ReturnValue, TArray<class UCapsuleComponent*>& CallFunc_GetComponentsByTag_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UCapsuleComponent* CallFunc_Array_Get_Item, const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds_1);
	bool CanPropagate(enum class EFlammablePropagationType PropagationType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnFlammableInstanceAttached(class UFlammableInstance* Instance);
	void OnFlammableInstanceDetached(class UFlammableInstance* Instance);
	void OnFlammableInstanceState_Combusting_Enter(class UFlammableInstance* Instance, class UFlammableState* State);
	void OnFlammableInstanceState_Combusting_Exit(class UFlammableInstance* Instance, class UFlammableState* State);
	void OnActiveStateChanged(bool IsActive);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Flammable_ActiveCombustion(int32 EntryPoint, float CallFunc_GetWorldDeltaSeconds_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFlammableInstance* K2Node_Event_Instance_1, class UFlammableInstance* K2Node_Event_Instance, class UFlammableState* CallFunc_GetFlammableState_ReturnValue, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFlammableInstance* K2Node_CustomEvent_Instance_1, class UFlammableState* K2Node_CustomEvent_State_1, class UFlammableInstance* K2Node_CustomEvent_Instance, class UFlammableState* K2Node_CustomEvent_State, class AActor* CallFunc_GetOwner_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_ActivateGenerator_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABP_SkeletalItem_Wood_Flare_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Wood_Flare, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths_1, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class ABP_SkeletalItem_Wood_Flare_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Wood_Flare_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue_1, bool K2Node_CustomEvent_IsActive, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, enum class EValid CallFunc_GetTrait_Paths_2, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_2, const struct FFlammableTargetExtinguish& CallFunc_MakeFlammableTargetExtinguishFromActor_ReturnValue, const struct FFlammableTarget& CallFunc_FlammableTargetExtinguishToFlammableTarget_ReturnValue, class UFlammableInstance* CallFunc_TryExtinguishFlammableTarget_OutFlammableInstance, enum class EFireExtinguishResult CallFunc_TryExtinguishFlammableTarget_ReturnValue, class UFlammableInstance* CallFunc_GetFlammableInstanceFromTarget_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsCurrentState_ReturnValue, const struct FFlammableTargetIgnite& CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue, class ABP_SkeletalItem_LightBase_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Light_Base, bool K2Node_DynamicCast_bSuccess_2, const struct FFlammableTarget& CallFunc_FlammableTargetIgniteToFlammableTarget_ReturnValue, class UFlammableInstance* CallFunc_GetFlammableInstanceFromTarget_ReturnValue_1, class UFlammableInstance* CallFunc_TryIgniteFlammableTarget_OutInstance, bool CallFunc_TryIgniteFlammableTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsCurrentState_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2);
};

}


