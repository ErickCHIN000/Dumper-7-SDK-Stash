#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x308 - 0x2FD)
// WidgetBlueprintGeneratedClass CF_SetCHLuckyBuffer.CF_SetCHLuckyBuffer_C
class UCF_SetCHLuckyBuffer_C : public UCF_BaseFloat_C
{
public:
	uint8                                        Pad_17C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_SetCHLuckyBuffer_C* GetDefaultObj();

	void Execute();
	void Construct();
	void ExecuteUbergraph_CF_SetCHLuckyBuffer(int32 EntryPoint, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, class UIcarusCriticalHitComponent* CallFunc_GetCriticalHitComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetLuckyBuffer_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller_1, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival_1, bool K2Node_DynamicCast_bSuccess_1, class UIcarusCriticalHitComponent* CallFunc_GetCriticalHitComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


