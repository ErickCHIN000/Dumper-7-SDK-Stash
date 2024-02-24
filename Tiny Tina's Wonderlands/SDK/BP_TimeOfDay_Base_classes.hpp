#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x50C - 0x4D0)
// BlueprintGeneratedClass BP_TimeOfDay_Base.BP_TimeOfDay_Base_C
class ABP_TimeOfDay_Base_C : public ATimeOfDayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_Cloudring;                                      // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Atmosphere;                                        // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Plane;                                             // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Clouds;                                            // 0x4F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Celestial_Body_Orientation;                        // 0x4F8(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                        Celestial_Body_Distance;                           // 0x504(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Celestial_Body_Scale;                              // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TimeOfDay_Base_C* GetDefaultObj();

	void UpdateParameters(const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue);
	void UserConstructionScript(const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TimeOfDay_Base(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


