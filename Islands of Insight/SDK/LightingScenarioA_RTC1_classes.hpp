#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x250 - 0x228)
// BlueprintGeneratedClass LightingScenarioA_RTC1.LightingScenarioA_RTC1_C
class ALightingScenarioA_RTC1_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ADirectionalLight*                     DirectionalLight_1_ExecuteUbergraph_LightingScenarioA_RTC1_RefProperty; // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                             SkyLight2_ExecuteUbergraph_LightingScenarioA_RTC1_RefProperty; // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                             SkyLight_LowQuality_ExecuteUbergraph_LightingScenarioA_RTC1_RefProperty; // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                     DirectionalLight2_ExecuteUbergraph_LightingScenarioA_RTC1_RefProperty; // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALightingScenarioA_RTC1_C* GetDefaultObj();

	void SwitchSkylightQuality(int32 NewValue);
	void ReceiveBeginPlay();
	void MainSceneShadowsDisabled(bool NewValue);
	void ExecuteUbergraph_LightingScenarioA_RTC1(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, int32 K2Node_CustomEvent_NewValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_CustomEvent_NewValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


