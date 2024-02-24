#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x134 - 0xD8)
// BlueprintGeneratedClass BP_VehicleEngineSoundController.BP_VehicleEngineSoundController_C
class UBP_VehicleEngineSoundController_C : public UGGVehicleEngineSoundController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        AudioRPM;                                          // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EngineRPM;                                         // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxRPM;                                            // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentAudioRPM;                                   // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RPMSmooth;                                         // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EngineLOAD;                                        // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetLOAD;                                        // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LoadSmooth;                                        // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LoadScale;                                         // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_CarVariables_C*                   CarWidget;                                         // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VehicleSpeed;                                      // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioSpeed;                                        // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           RPMModCurve;                                       // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxWheelRPM;                                       // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RPMSmoothDown;                                     // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ActualSmooth;                                      // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxVehicleSpeed;                                   // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentWheelSpeed;                                 // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VehicleEngineSoundController_C* GetDefaultObj();

	void ResolveCarWidget(class UUMG_CarVariables_C** CarWidget, class UUMG_CarVariables_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void OnRepDriverChanged(class AGGCharacter* NewDriver);
	void OnGearChanged(int32 PreviousGear, int32 NewGear);
	void CalculateAudioRPM();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_VehicleEngineSoundController(int32 EntryPoint, int32 K2Node_Event_PreviousGear, int32 K2Node_Event_NewGear, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDebugging_ReturnValue, class UUMG_CarVariables_C* CallFunc_ResolveCarWidget_CarWidget, float K2Node_Event_DeltaSeconds, int32 CallFunc_GetCurrentGear_ReturnValue, float CallFunc_GetEngineRotationSpeed_ReturnValue, float CallFunc_Abs_ReturnValue, class AGGCharacter* K2Node_CustomEvent_NewDriver, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FEngineAudioRPMInput& K2Node_MakeStruct_EngineAudioRPMInput, bool CallFunc_IsValid_ReturnValue_2, const struct FEngineAudioRPMOutput& CallFunc_CalculateAudioRPM_Internal_ReturnValue, int32 CallFunc_GetSpeedKPH_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_WeightedMovingAverage_Float_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue);
};

}


