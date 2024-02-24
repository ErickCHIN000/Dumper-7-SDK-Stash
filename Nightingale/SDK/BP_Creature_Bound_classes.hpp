#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0x1631 - 0x15D0)
// BlueprintGeneratedClass BP_Creature_Bound.BP_Creature_Bound_C
class ABP_Creature_Bound_C : public ABP_CreatureBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         HasAuraEffect;                                     // 0x15D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USkeletalMeshComponent*>        AllSkeletalMeshes;                                 // 0x15E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         SupportMeshesVisible;                              // 0x15F0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                AICBound;                                          // 0x15F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     DissolveCrustEffect_0;                             // 0x1600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DistanceCheckTimer;                                // 0x1608(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BoundOriginalLocation;                             // 0x1610(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PuppetCrustEffect;                                 // 0x1628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         DropReward;                                        // 0x1630(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creature_Bound_C* GetDefaultObj();

	void ServerDeathLogic(const struct FHitResult& Hit, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, const struct FRealmSettings& CallFunc_GetCurrentRealmSettings_OutRealmSettings, bool CallFunc_GetCurrentRealmSettings_ReturnValue);
	void HandleTagCountChanged(struct FGameplayTag& Tag, int32 Count, const struct FTagValueContainer& TagContainer, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnRep_SupportMeshesVisible(int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void HideSupportMeshes(double Duration);
	void ShowSupportMeshes();
	void ReceiveAuthorityGained();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Creature_Bound(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, double K2Node_Event_Duration, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsMinHealth_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAIC_CreatureBase_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
};

}


