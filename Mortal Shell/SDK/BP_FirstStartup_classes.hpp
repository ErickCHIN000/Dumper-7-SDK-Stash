#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x258 - 0x220)
// BlueprintGeneratedClass BP_FirstStartup.BP_FirstStartup_C
class ABP_FirstStartup_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      Widget_Brightness;                                 // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1561[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_StartupCalibration_C*              UI_BrightnessCalibration;                          // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                    PostProcess;                                       // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FirstStartup_C* GetDefaultObj();

	void Remove(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void BrightnessCalibration_Enable(class AActor* MainMenu);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FirstStartup(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* K2Node_CustomEvent_MainMenu, class UUI_StartupCalibration_C* CallFunc_Create_ReturnValue);
};

}


