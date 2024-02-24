#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x138 - 0xB0)
// BlueprintGeneratedClass BP_CaveLightController.BP_CaveLightController_C
class UBP_CaveLightController_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IntensityAdvanced;                                 // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BC5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IntensityOverride;                                 // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ColorAdvanced;                                     // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BCC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorOverride;                                     // 0xC4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DirectionAdvanced;                                 // 0xD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              DirectionOverride;                                 // 0xD8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BDD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_AtmosphereController_C*            AtmosphereController;                              // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentIntensity;                                  // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CurrentSunDirection;                               // 0xF4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                          CurrentColour;                                     // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time;                                              // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StartHour;                                         // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartMinute;                                       // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BFA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            LightDetails;                                      // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        EntranceFade;                                      // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Entrance;                                          // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CaveLightController_C* GetDefaultObj();

	class ABP_AtmosphereController_C* GetAtmosphereController(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_AtmosphereController_C* K2Node_DynamicCast_AsBP_Atmosphere_Controller, bool K2Node_DynamicCast_bSuccess);
	void AtmosphereControllerInput(struct FRotator& SunDirection, float& Intensity, struct FLinearColor& Color, float& Entrance, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FRotator& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, float K2Node_Select_Default_2, float CallFunc_Lerp_ReturnValue);
	void SunLightDirection(const struct FRotator& SunDirection);
	void EventSetup();
	void SunLightColor(const struct FLinearColor& Color, float Intensity, float CaveCover);
	void WeatherManTick();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CaveLightController(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FRotator& K2Node_CustomEvent_SunDirection, const struct FLinearColor& K2Node_CustomEvent_Color, float K2Node_CustomEvent_Intensity, float K2Node_CustomEvent_CaveCover, class ABP_AtmosphereController_C* CallFunc_GetAtmosphereController_ReturnValue, class ABP_AtmosphereController_C* CallFunc_GetAtmosphereController_ReturnValue_1);
	void LightDetails__DelegateSignature(float Intensity_Out, const struct FLinearColor& Color_Out, const struct FRotator& Sun_Direction_Out);
};

}


