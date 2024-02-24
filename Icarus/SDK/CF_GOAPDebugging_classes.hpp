#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x308 - 0x2F9)
// WidgetBlueprintGeneratedClass CF_GOAPDebugging.CF_GOAPDebugging_C
class UCF_GOAPDebugging_C : public UCF_BaseBool_C
{
public:
	uint8                                        Pad_2708[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_GOAPDebugging_C* GetDefaultObj();

	bool GetCheckboxState(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess);
	void OnCheckboxStateChanged(bool NewState);
	void ExecuteUbergraph_CF_GOAPDebugging(int32 EntryPoint, bool K2Node_Event_NewState, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess);
};

}


