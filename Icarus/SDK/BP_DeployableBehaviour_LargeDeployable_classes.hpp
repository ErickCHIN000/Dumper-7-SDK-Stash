#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0xFC - 0xE0)
// BlueprintGeneratedClass BP_DeployableBehaviour_LargeDeployable.BP_DeployableBehaviour_LargeDeployable_C
class UBP_DeployableBehaviour_LargeDeployable_C : public UDeployableComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusItem*                           OriginalDeployable;                                // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusItem*                           SpawnedDeployable;                                 // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeployableRadius;                                  // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_DeployableBehaviour_LargeDeployable_C* GetDefaultObj();

	void OnDeploy(class ADeployable* SpawnedDeployable, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue);
	void OnOriginalDeployableDestroy(class AActor* DestroyedActor, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue);
	void OnHeldDeployableDestroy(class AActor* HeldDeployable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TransferInventories_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsServer_ReturnValue);
	void InitialiseHeldDeployment(class ADeployable* OriginalDeployable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetOwner_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_DeployableBehaviour_LargeDeployable(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


