#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x308 - 0x2F9)
// WidgetBlueprintGeneratedClass CF_DebugCriticalHit.CF_DebugCriticalHit_C
class UCF_DebugCriticalHit_C : public UCF_BaseBool_C
{
public:
	uint8                                        Pad_1D9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_DebugCriticalHit_C* GetDefaultObj();

	bool GetCheckboxState(class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, class UIcarusCriticalHitComponent* CallFunc_GetCriticalHitComponent_ReturnValue, bool CallFunc_GetDebug_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnCheckboxStateChanged(bool NewState);
	void ExecuteUbergraph_CF_DebugCriticalHit(int32 EntryPoint, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_NewState, class UIcarusCriticalHitComponent* CallFunc_GetCriticalHitComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


