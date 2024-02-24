#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x368 - 0x328)
// BlueprintGeneratedClass MyBullet.MyBullet_C
class AMyBullet_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Life;                                              // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMoving;                                          // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_75D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       OldPositions;                                      // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                          TrailColor;                                        // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMyBullet_C* GetDefaultObj();

	void CheckHitActorOld(class AActor* Actor, bool* CanHit, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue1, class UClass* CallFunc_GetObjectClass_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ExecuteUbergraph_MyBullet(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class ABaseTank_C* K2Node_DynamicCast_AsBase_Tank, bool K2Node_DynamicCast_bSuccess, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess1, enum class ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue, enum class ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue2, class UClass* CallFunc_GetObjectClass_ReturnValue1, class AActor* K2Node_Event_otherActor, float K2Node_Event_DeltaSeconds, class UClass* CallFunc_GetObjectClass_ReturnValue2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<struct FVector>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class UClass* CallFunc_GetObjectClass_ReturnValue3, bool CallFunc_NotEqual_ObjectObject_ReturnValue2, bool CallFunc_NotEqual_ClassClass_ReturnValue1, bool CallFunc_NotEqual_ObjectObject_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue4, class AController* CallFunc_GetInstigatorController_ReturnValue, bool CallFunc_BooleanAND_ReturnValue5, float CallFunc_TTLApplyDamage_ReturnValue, float CallFunc_TTLApplyDamage_ReturnValue1, int32 Temp_int_Variable, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1);
};

}


