#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x408 - 0x3D1)
// BlueprintGeneratedClass Buildable_BunkerDoor.Buildable_BunkerDoor_C
class ABuildable_BunkerDoor_C : public ABuildable_MASTER_C
{
public:
	uint8                                        Pad_2817[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_OpenDoor_Alpha_C656392E466C41B6931DD2939FBD89AC; // 0x3E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_OpenDoor__Direction_C656392E466C41B6931DD2939FBD89AC; // 0x3EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_282E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_OpenDoor;                                 // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsClosed;                                          // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2836[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DotProduct;                                        // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABuildable_BunkerDoor_C* GetDefaultObj();

	void Timeline_OpenDoor__FinishedFunc();
	void Timeline_OpenDoor__UpdateFunc();
	void ReceiveBeginPlay();
	void OnInteractBuildable(class AActor* Actor);
	void Event_OpenDoor();
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_Buildable_BunkerDoor(int32 EntryPoint, class AActor* K2Node_Event_Actor, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, double CallFunc_Dot_VectorVector_ReturnValue, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
};

}


