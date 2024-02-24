#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// WidgetBlueprintGeneratedClass CF_FLODSelectRecord1.CF_FLODSelectRecord1_C
class UCF_FLODSelectRecord1_C : public UCF_BaseCombo_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_FLODSelectRecord1_C* GetDefaultObj();

	void HandleArg(int32 Index, const class FString& Arg);
	void OnHandleExecute(class UFLODRecordRow_C* Row, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetSelectedRecord(class UFLODRecord** SelectedRecord, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess);
	void HandleExecute(class UUserWidget* Widget, int32 Amount);
	void Construct();
	void HandleArgsConstructLol();
	void SelectedFLODTileChanged();
	void ExecuteUbergraph_CF_FLODSelectRecord1(int32 EntryPoint, class UFLODRecordRow_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, class UFLODRecordRow_C* K2Node_DynamicCast_AsFLODRecord_Row, bool K2Node_DynamicCast_bSuccess, class UFLODRecord* CallFunc_GetSelectedRecord_SelectedRecord, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, TArray<class UFLODRecord*>& CallFunc_Map_Values_Values, class UFLODRecord* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue);
};

}


