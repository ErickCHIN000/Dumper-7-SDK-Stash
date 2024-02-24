#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x318 - 0x30C)
// WidgetBlueprintGeneratedClass CF_SpawnAINew.CF_SpawnAINew_C
class UCF_SpawnAINew_C : public UCF_BaseComboInteger_C
{
public:
	uint8                                        Pad_24EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_SpawnAINew_C* GetDefaultObj();

	void OnConstruction(int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FAISetupEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_StructToName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UAIRow_C* CallFunc_Create_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void Handle_Execute(class UUserWidget* Widget, int32 Amount);
	void ExecuteUbergraph_CF_SpawnAINew(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, int32 CallFunc_Max_ReturnValue, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UAIRow_C* K2Node_DynamicCast_AsAIRow, bool K2Node_DynamicCast_bSuccess_1);
};

}


