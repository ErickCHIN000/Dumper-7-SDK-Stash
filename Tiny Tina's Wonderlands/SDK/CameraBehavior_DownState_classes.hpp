#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x70 - 0x30)
// BlueprintGeneratedClass CameraBehavior_DownState.CameraBehavior_DownState_C
class UCameraBehavior_DownState_C : public UCameraBehavior
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(Transient, DuplicateTransient)
	float                                        PitchRate;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PitchMin;                                          // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PitchCycleDelta;                                   // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PitchCycleTime;                                    // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           PitchCycleCurve;                                   // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           PitchTotalCurve;                                   // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MyDelta;                                           // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              MyRotation;                                        // 0x5C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UCameraAnimInst*                       CameraAnimInst;                                    // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCameraBehavior_DownState_C* GetDefaultObj();

	void Update(float DeltaTime, class UCameraState* State);
	void Start(class UCameraState* State);
	void End(class UCameraState* State);
	void ExecuteUbergraph_CameraBehavior_DownState(int32 EntryPoint, class UCameraState* K2Node_Event_State1, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class UCameraAnimInst* CallFunc_PlayCameraAnim_ReturnValue, class UCameraState* K2Node_Event_State, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue1, float K2Node_Event_DeltaTime, class UCameraState* K2Node_Event_State2, const struct FRotator& CallFunc_GetBaseRotation_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue2, bool CallFunc_IsGamePaused_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_GetFloatValue_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
};

}


