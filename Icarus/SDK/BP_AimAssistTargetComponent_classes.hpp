#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE8 - 0xB0)
// BlueprintGeneratedClass BP_AimAssistTargetComponent.BP_AimAssistTargetComponent_C
class UBP_AimAssistTargetComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        CollisionRadiusScale;                              // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        OverrideCollisionRadius;                           // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         DebugComponent;                                    // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_210C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USphereComponent*                      Collider;                                          // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DesiredSize;                                       // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2117[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ColliderTags;                                      // 0xD8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_AimAssistTargetComponent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_AimAssistTargetComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class FName Temp_name_Variable, int32 CallFunc_Array_Add_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class USphereComponent* CallFunc_AddActorComponentWithName_OutComponent, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_GetMaxElement_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


