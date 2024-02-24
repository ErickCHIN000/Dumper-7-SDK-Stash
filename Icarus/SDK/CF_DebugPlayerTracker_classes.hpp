#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x320 - 0x2F0)
// WidgetBlueprintGeneratedClass CF_DebugPlayerTracker.CF_DebugPlayerTracker_C
class UCF_DebugPlayerTracker_C : public UCF_BaseButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftClassPtr<class UUserWidget>             PlayerTrackerClass;                                // 0x2F8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_DebugPlayerTracker_C* GetDefaultObj();

	void OnLoaded_93C6CF1F4DFDAC01C83D819E2D247DD3(TSubclassOf<class UObject> Loaded);
	void Execute();
	void ExecuteUbergraph_CF_DebugPlayerTracker(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class UUserWidget* CallFunc_Create_ReturnValue);
};

}


