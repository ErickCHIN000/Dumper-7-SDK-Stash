#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// WidgetBlueprintGeneratedClass CF_GenerateWorldBosses.CF_GenerateWorldBosses_C
class UCF_GenerateWorldBosses_C : public UCF_BaseCombo_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_GenerateWorldBosses_C* GetDefaultObj();

	void Construct();
	void HandleExecute(class UUserWidget* Widget, int32 Amount);
	void ExecuteUbergraph_CF_GenerateWorldBosses(int32 EntryPoint, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, class UStringRow_C* CallFunc_Create_ReturnValue, class UStringRow_C* K2Node_DynamicCast_AsString_Row, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FProspectListEnum& CallFunc_IntToStruct_ReturnValue, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, class FName CallFunc_BreakProspectListEnum_Name, int32 CallFunc_BreakProspectListEnum_Index, const struct FProspectListEnum& CallFunc_RowHandleToStruct_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_1);
};

}


