#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x7B4 - 0x774)
// BlueprintGeneratedClass BP_Door_Base.BP_Door_Base_C
class ABP_Door_Base_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_5A4D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         PlacementBlockerBox;                               // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioOcclusionComponent*              AudioOcclusion1;                                   // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EDoorState                        DoorState;                                         // 0x790(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OpenStateChanged;                                  // 0x798(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          DelayedDirtyTimer;                                 // 0x7A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        DoorStateSaved;                                    // 0x7B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Door_Base_C* GetDefaultObj();

	float GetOcclusionValue(enum class EDoorState Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void DirtyNavigation(bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UIcarusNavigationSystem* CallFunc_GetIcarusNavigationSystem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetOpenableStateOnFoundationActor(enum class EDoorState Temp_byte_Variable, enum class EBuildingOpenableState Temp_byte_Variable_1, enum class EBuildingOpenableState Temp_byte_Variable_2, enum class EBuildingOpenableState Temp_byte_Variable_3, enum class EBuildingOpenableState Temp_byte_Variable_4, bool CallFunc_IsValid_ReturnValue, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess, enum class EBuildingOpenableState K2Node_Select_Default);
	void OnRep_DoorState(class FName OverlapCollisionProfile, class FName BlockingCollisionProfile, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EDoorState Temp_byte_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FName K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void Deployable_Interact(class AActor* Interactor);
	void OpenCloseDoor(const struct FHitResult& HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void IcarusBeginPlay();
	void ScheduleDelayedOpenableStateCheck();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Door_Base(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess);
	void OpenStateChanged__DelegateSignature(bool Open);
};

}


