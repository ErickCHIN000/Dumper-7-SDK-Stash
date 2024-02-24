#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x318 - 0x30C)
// WidgetBlueprintGeneratedClass CF_SetLivingItemUpgrade.CF_SetLivingItemUpgrade_C
class UCF_SetLivingItemUpgrade_C : public UCF_BaseIntegerCombo_C
{
public:
	uint8                                        Pad_25DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_SetLivingItemUpgrade_C* GetDefaultObj();

	void Handle_Execute(class UUserWidget* Widget, int32 Amount);
	void Construct();
	void ExecuteUbergraph_CF_SetLivingItemUpgrade(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FLivingItemUpgradesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLivingItemUpgradesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class ULivingItemUpgradeRow_C* K2Node_DynamicCast_AsLiving_Item_Upgrade_Row, bool K2Node_DynamicCast_bSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ULivingItemUpgradeRow_C* CallFunc_Create_ReturnValue);
};

}


