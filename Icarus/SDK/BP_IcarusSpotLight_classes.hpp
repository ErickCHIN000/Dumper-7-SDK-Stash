#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x369 - 0x360)
// BlueprintGeneratedClass BP_IcarusSpotLight.BP_IcarusSpotLight_C
class UBP_IcarusSpotLight_C : public USpotLightComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         InitWithShadows;                                   // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_IcarusSpotLight_C* GetDefaultObj();

	void UpdateShadowSetting(bool bNewValue);
	void InitLightSettings();
	void ShadowSettingUpdated(bool Value);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_IcarusSpotLight(int32 EntryPoint, bool K2Node_CustomEvent_bNewValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetLightShadows_ReturnValue, bool K2Node_CustomEvent_Value);
};

}


