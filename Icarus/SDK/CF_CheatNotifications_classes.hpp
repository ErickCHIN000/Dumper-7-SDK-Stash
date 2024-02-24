#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x308 - 0x2F9)
// WidgetBlueprintGeneratedClass CF_CheatNotifications.CF_CheatNotifications_C
class UCF_CheatNotifications_C : public UCF_BaseBool_C
{
public:
	uint8                                        Pad_246F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_CheatNotifications_C* GetDefaultObj();

	bool GetCheckboxState(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AIcarusGameStateBase* K2Node_DynamicCast_AsIcarus_Game_State_Base, bool K2Node_DynamicCast_bSuccess);
	void OnCheckboxStateChanged(bool NewState);
	void ExecuteUbergraph_CF_CheatNotifications(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_NewState);
};

}


