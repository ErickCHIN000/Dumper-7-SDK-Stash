#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x369 - 0x358)
// BlueprintGeneratedClass BP_IcarusPointLight.BP_IcarusPointLight_C
class UBP_IcarusPointLight_C : public UPointLightComponent
{
public:
	uint8                                        Pad_24FE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         InitWithShadows;                                   // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_IcarusPointLight_C* GetDefaultObj();

	void InitLightSettings();
	void ShadowSettingUpdated(bool Value);
	void UpdateShadowSetting(bool bNewValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_IcarusPointLight(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_Value, bool K2Node_CustomEvent_bNewValue, bool CallFunc_BooleanAND_ReturnValue, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool CallFunc_GetLightShadows_ReturnValue);
};

}


