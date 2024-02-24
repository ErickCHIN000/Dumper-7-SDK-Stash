#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// WidgetBlueprintGeneratedClass CF_PlayDialogue.CF_PlayDialogue_C
class UCF_PlayDialogue_C : public UCF_BaseCombo_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_PlayDialogue_C* GetDefaultObj();

	void OnConstruction(class UDialogueCFRow_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FDialogueEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDialogueRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FRowMetadata& CallFunc_GetMetadata_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void HandleExecute(class UUserWidget* Widget, int32 Amount);
	void ExecuteUbergraph_CF_PlayDialogue(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, class UDialogueCFRow_C* K2Node_DynamicCast_AsDialogue_CFRow, bool K2Node_DynamicCast_bSuccess_1, const struct FDialogueRowHandle& CallFunc_MakeDialogue_ReturnValue);
};

}


