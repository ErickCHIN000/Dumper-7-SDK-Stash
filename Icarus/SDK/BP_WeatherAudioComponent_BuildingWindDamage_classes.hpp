#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x24C - 0x23C)
// BlueprintGeneratedClass BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C
class UBP_WeatherAudioComponent_BuildingWindDamage_C : public UBP_WeatherAudioComponent_C
{
public:
	uint8                                        Pad_33BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        MaxDestructionPoints;                              // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_WeatherAudioComponent_BuildingWindDamage_C* GetDefaultObj();

	void ForceStopAndDestroy();
	void StopWeatherAudio();
	void CheckExposure(float* Exposure, float CallFunc_Conv_IntToFloat_ReturnValue, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsBuildingOutside_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_SafeDivide_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeatherAudioComponent_BuildingWindDamage(int32 EntryPoint, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueRange_MinValue, float CallFunc_GetValueRange_MaxValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Round_ReturnValue);
};

}


