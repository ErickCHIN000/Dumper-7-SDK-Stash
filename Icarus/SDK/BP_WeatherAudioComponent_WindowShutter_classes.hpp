#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x248 - 0x23C)
// BlueprintGeneratedClass BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C
class UBP_WeatherAudioComponent_WindowShutter_C : public UBP_WeatherAudioComponent_C
{
public:
	uint8                                        Pad_183F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_WeatherAudioComponent_WindowShutter_C* GetDefaultObj();

	void PlayPointSourceAudio(class ABP_Window_Base_C* K2Node_DynamicCast_AsBP_Window_Base, bool K2Node_DynamicCast_bSuccess);
	void StartWeatherAudio();
	void CheckExposure(float* Exposure, class ABP_Window_Base_C* K2Node_DynamicCast_AsBP_Window_Base, bool K2Node_DynamicCast_bSuccess, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsBuildingOutside_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void SetOpenState(bool Open, uint8 CallFunc_Conv_BoolToByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeatherAudioComponent_WindowShutter(int32 EntryPoint, class ABP_Window_Base_C* K2Node_DynamicCast_AsBP_Window_Base, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


