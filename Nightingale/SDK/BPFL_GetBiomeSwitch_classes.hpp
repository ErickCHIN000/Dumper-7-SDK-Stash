#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_GetBiomeSwitch.BPFL_GetBiomeSwitch_C
class UBPFL_GetBiomeSwitch_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_GetBiomeSwitch_C* GetDefaultObj();

	void GetBiomeAudioSwitch(class UObject* __WorldContext, bool* Success, class UAkSwitchValue** SWITCH, class UAkSwitchValue* BiomeSwitch, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


