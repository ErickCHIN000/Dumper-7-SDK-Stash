#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x308 - 0x2FD)
// WidgetBlueprintGeneratedClass CF_AddTemperature.CF_AddTemperature_C
class UCF_AddTemperature_C : public UCF_BaseInteger_C
{
public:
	uint8                                        Pad_2560[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_AddTemperature_C* GetDefaultObj();

	void Construct();
	void Execute();
	void ExecuteUbergraph_CF_AddTemperature(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Multiply_IntInt_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_GetInternalTemperature_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
};

}


