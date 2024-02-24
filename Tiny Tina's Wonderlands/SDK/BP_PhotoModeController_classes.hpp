#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1778 - 0x1770)
// BlueprintGeneratedClass BP_PhotoModeController.BP_PhotoModeController_C
class ABP_PhotoModeController_C : public APhotoModeController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1770(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PhotoModeController_C* GetDefaultObj();

	void UserConstructionScript();
	void OnEnterPhotoMode();
	void OnExitPhotoMode();
	void ExecuteUbergraph_BP_PhotoModeController(int32 EntryPoint, const struct FPhotoModeState& CallFunc_GetPhotoModeState_ReturnValue);
};

}


