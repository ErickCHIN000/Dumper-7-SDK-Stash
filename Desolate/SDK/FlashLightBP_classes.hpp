#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x328 - 0x2D8)
// BlueprintGeneratedClass FlashLightBP.FlashLightBP_C
class AFlashLightBP_C : public ASHFlashLight
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Cone;                                              // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioScreamer;                                     // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Intensity_9485FC4344BFFCD6FB38FA89834D22CC; // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_9485FC4344BFFCD6FB38FA89834D22CC; // 0x2F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Energy_0;                                          // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BaseIntencity;                                     // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DischargeRate;                                     // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        NewVar_0;                                          // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class ATriggerVolume*                        Room_Volume;                                       // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFlashLightBP_C* GetDefaultObj();

	bool StartHorrorEvent(bool CallFunc_StartHorrorEvent_ReturnValue);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnUltravioletFullStage();
	void OnUltravioletMediumStage();
	void OnUltravioletLowStage();
	void OnDefaultStage();
	void StartHorror();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FlashLightBP(int32 EntryPoint, TArray<class AFlashLightBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Find_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, TArray<class AFlashLightBP_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 CallFunc_Array_Find_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_3, TArray<class AFlashLightBP_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, int32 CallFunc_Array_Find_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_3, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_2, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_3, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_4, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_6, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_7, int32 CallFunc_Array_Find_ReturnValue_3, TArray<class AFlashLightBP_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, bool K2Node_SwitchInteger_CmpSuccess_3);
};

}


