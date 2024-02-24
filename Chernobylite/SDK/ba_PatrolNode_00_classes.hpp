#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB4 (0x314 - 0x260)
// BlueprintGeneratedClass ba_PatrolNode_00.ba_PatrolNode_00_C
class Aba_PatrolNode_00_C : public APatrolActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                Custom;                                            // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Start;                                             // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Cylinder;                                          // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      ConnectionSpline;                                  // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      MovementSpline;                                    // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene1;                                            // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPaperSpriteComponent*                 PaperSprite;                                       // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldTeleport_;                                  // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bShouldCallReachedBeforeWait_;                     // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bShouldPlayAnimationOnReached_;                    // 0x2BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bShouldUseThisNodesTransform_;                     // 0x2BB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bBackToAI_;                                        // 0x2BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1658[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TransformFixTime;                                  // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_165B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class USkeletalMesh>          Skeletal;                                          // 0x2C8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class Enum_PatrolSkeletals_00           SkeletalMesh;                                      // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1662[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         CustomAnimToPlay;                                  // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaitTime_0;                                        // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_166B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USplineComponent*                      SnappedSpline;                                     // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                        AnimTime;                                          // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_PatrolNode_00_C* GetDefaultObj();

	void UpdateDebugRoute(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class Aba_PatrolNode_00_C* K2Node_DynamicCast_AsBa_Patrol_Node_00, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class Aba_PatrolNode_00_C* K2Node_DynamicCast_AsBa_Patrol_Node_00_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void UserConstructionScript(TSoftObjectPtr<class USkeletalMesh> Temp_softobject_Variable, TSoftObjectPtr<class USkeletalMesh> Temp_softobject_Variable_1, enum class Enum_PatrolSkeletals_00 Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, TSoftObjectPtr<class USkeletalMesh> K2Node_Select_Default);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_ba_PatrolNode_00(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class USkeletalMesh> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


