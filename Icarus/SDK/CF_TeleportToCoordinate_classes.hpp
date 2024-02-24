#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x320 - 0x314)
// WidgetBlueprintGeneratedClass CF_TeleportToCoordinate.CF_TeleportToCoordinate_C
class UCF_TeleportToCoordinate_C : public UCF_BaseFloat3_C
{
public:
	uint8                                        Pad_393[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_TeleportToCoordinate_C* GetDefaultObj();

	void Execute();
	void ExecuteUbergraph_CF_TeleportToCoordinate(int32 EntryPoint, float CallFunc_GetValue_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, float CallFunc_GetValue_ReturnValue_1, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetValue_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


