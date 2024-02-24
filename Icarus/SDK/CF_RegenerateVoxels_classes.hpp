#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x308 - 0x2FD)
// WidgetBlueprintGeneratedClass CF_RegenerateVoxels.CF_RegenerateVoxels_C
class UCF_RegenerateVoxels_C : public UCF_BaseInteger_C
{
public:
	uint8                                        Pad_1528[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_RegenerateVoxels_C* GetDefaultObj();

	void Execute();
	void ExecuteUbergraph_CF_RegenerateVoxels(int32 EntryPoint, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess);
};

}


