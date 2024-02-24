#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// WidgetBlueprintGeneratedClass CF_GetAccountFlag.CF_GetAccountFlag_C
class UCF_GetAccountFlag_C : public UCF_BaseCombo_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_GetAccountFlag_C* GetDefaultObj();

	void GetAccountFlags(TArray<struct FAccountFlagsRowHandle>* FlagRowHandles, const TArray<struct FAccountFlagsRowHandle>& AccountFlags, int32 CallFunc_NumRows_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FAccountFlagsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FAccountFlagsRowHandle& CallFunc_StructToRowHandle_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void OnConstruction(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UAccountFlagRow_C* CallFunc_Create_ReturnValue, TArray<struct FAccountFlagsRowHandle>& CallFunc_GetAccountFlags_FlagRowHandles, const struct FAccountFlagsRowHandle& CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Execute();
	void Construct();
	void ExecuteUbergraph_CF_GetAccountFlag(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UAccountFlagRow_C* K2Node_DynamicCast_AsAccount_Flag_Row, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsRowHandleValid_ReturnValue);
};

}


