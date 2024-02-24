#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x64 (0x360 - 0x2FC)
// BlueprintGeneratedClass BP_CreatureCreatedObstacle_StonePillar.BP_CreatureCreatedObstacle_StonePillar_C
class ABP_CreatureCreatedObstacle_StonePillar_C : public ABP_CreatureCreatedObstacle_C
{
public:
	uint8                                        Pad_72D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_SpawnAnim_E74DC46B4F1AF9D620163994F5D8A024; // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_E74DC46B4F1AF9D620163994F5D8A024; // 0x314(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_72EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SpawnLocation;                                     // 0x320(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EndLocation;                                       // 0x338(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                   Fulgeritemeshs;                                    // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_CreatureCreatedObstacle_StonePillar_C* GetDefaultObj();

	void DeathLogic(double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_GetTargetGroundLevel_HitDetected, const struct FVector& CallFunc_GetTargetGroundLevel_GroundLocation, const struct FVector& CallFunc_GetTargetGroundLevel_GroundNormal, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_IsAtMinHealth_AtMinHealth);
	void SetIsDead();
	void UserConstructionScript(const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void TEMP_DamageRecieved(double Damage, class AActor* DamageSource);
	void ExecuteUbergraph_BP_CreatureCreatedObstacle_StonePillar(int32 EntryPoint, class UStaticMesh* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FGameplayTag& Temp_struct_Variable, class AActor* K2Node_Event_OtherActor, bool CallFunc_ActorHasTag_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, double K2Node_Event_Damage, class AActor* K2Node_Event_DamageSource, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
};

}


