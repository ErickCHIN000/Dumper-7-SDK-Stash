#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// WidgetBlueprintGeneratedClass CF_SetCharacterVoice.CF_SetCharacterVoice_C
class UCF_SetCharacterVoice_C : public UCF_BaseCombo_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_SetCharacterVoice_C* GetDefaultObj();

	void OnConstruction(class UCharacterVoiceRow_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FCharacterVoicesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCharacterVoicesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FRowMetadata& CallFunc_GetMetadata_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void HandleExecute(class UUserWidget* Widget, int32 Amount);
	void ExecuteUbergraph_CF_SetCharacterVoice(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, class UCharacterVoiceRow_C* K2Node_DynamicCast_AsCharacter_Voice_Row, bool K2Node_DynamicCast_bSuccess_1, const struct FCharacterVoicesRowHandle& CallFunc_MakeCharacterVoices_ReturnValue);
};

}


