#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x120 - 0x110)
// BlueprintGeneratedClass BP_UIProjectionComponent_Building.BP_UIProjectionComponent_Building_C
class UBP_UIProjectionComponent_Building_C : public UBP_UIProjectionComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusActor*                          CurrentActor;                                      // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_UIProjectionComponent_Building_C* GetDefaultObj();

	enum class EViewTraceResultPriority BP_UIProjectionComponent_Building_AutoGenFunc(struct FViewTraceResult& Result, enum class EViewTraceResultPriority CallFunc_GetGenericViewTraceResultPriority_ReturnValue);
	void GetWidgetLocation(struct FVector* Location, bool CallFunc_IsValid_ReturnValue, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_UIProjectionComponent_Building(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, TArray<class AActor*>& K2Node_MakeArray_Array, bool CallFunc_IsLocallyControlled_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess_1, enum class EValid CallFunc_GetTrait_Paths, class UDurableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


