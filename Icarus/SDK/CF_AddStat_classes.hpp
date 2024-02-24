#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x318 - 0x30C)
// WidgetBlueprintGeneratedClass CF_AddStat.CF_AddStat_C
class UCF_AddStat_C : public UCF_BaseComboInteger_C
{
public:
	uint8                                        Pad_2A68[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_AddStat_C* GetDefaultObj();

	void Construct();
	void Handle_Execute(class UUserWidget* Widget, int32 Amount);
	void ExecuteUbergraph_CF_AddStat(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FStatsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsVirtualStat_ReturnValue, class FName CallFunc_BreakStatsEnum_Name, int32 CallFunc_BreakStatsEnum_Index, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UStatRow_C* K2Node_DynamicCast_AsStat_Row, bool K2Node_DynamicCast_bSuccess_1, class UStatRow_C* CallFunc_Create_ReturnValue, const struct FStatsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
};

}


