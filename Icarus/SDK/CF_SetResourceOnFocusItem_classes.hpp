#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x318 - 0x30C)
// WidgetBlueprintGeneratedClass CF_SetResourceOnFocusItem.CF_SetResourceOnFocusItem_C
class UCF_SetResourceOnFocusItem_C : public UCF_BaseComboInteger_C
{
public:
	uint8                                        Pad_25E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_SetResourceOnFocusItem_C* GetDefaultObj();

	void Construct();
	void Handle_Execute(class UUserWidget* Widget, int32 Amount);
	void ExecuteUbergraph_CF_SetResourceOnFocusItem(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, class FName CallFunc_GetEnumeratorName_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UResourceRow_C* CallFunc_Create_ReturnValue, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, int32 CallFunc_MakeLiteralInt_ReturnValue, class UResourceRow_C* K2Node_DynamicCast_AsResource_Row, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue);
};

}


