#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x318 - 0x30C)
// WidgetBlueprintGeneratedClass CF_SetGOAPMotivation.CF_SetGOAPMotivation_C
class UCF_SetGOAPMotivation_C : public UCF_BaseComboInteger_C
{
public:
	uint8                                        Pad_2641[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_SetGOAPMotivation_C* GetDefaultObj();

	void Construct();
	void Handle_Execute(class UUserWidget* Widget, int32 Amount);
	void ExecuteUbergraph_CF_SetGOAPMotivation(int32 EntryPoint, class UStringRow_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FGOAPMotivationsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_BreakGOAPMotivationsEnum_Name, int32 CallFunc_BreakGOAPMotivationsEnum_Index, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, class UStringRow_C* K2Node_DynamicCast_AsString_Row, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_1, const struct FGOAPMotivationsRowHandle& CallFunc_MakeGOAPMotivations_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FGOAPMotivationsEnum& CallFunc_RowHandleToStruct_ReturnValue);
};

}


