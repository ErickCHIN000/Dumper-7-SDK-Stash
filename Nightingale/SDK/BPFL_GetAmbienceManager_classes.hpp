#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_GetAmbienceManager.BPFL_GetAmbienceManager_C
class UBPFL_GetAmbienceManager_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_GetAmbienceManager_C* GetDefaultObj();

	void GetAmbienceManager(class UObject* __WorldContext, class UAmbienceManager** AmbienceManager, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class ANWXPlayerCameraManager* K2Node_DynamicCast_AsNWXPlayer_Camera_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UAmbienceManager* CallFunc_GetAmbienceManager_ReturnValue);
};

}


