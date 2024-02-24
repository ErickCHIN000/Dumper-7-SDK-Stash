#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// WidgetBlueprintGeneratedClass CF_UpdateForecast.CF_UpdateForecast_C
class UCF_UpdateForecast_C : public UCF_BaseCombo_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_UpdateForecast_C* GetDefaultObj();

	void OnConstruction(int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FProspectForecastEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FProspectForecastRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FProspectForecastEnum& CallFunc_RowHandleToStruct_ReturnValue, const struct FProspectForecast& CallFunc_GetProspectForecastStruct_ProspectForecast, enum class EValid CallFunc_GetProspectForecastStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_NumRows_ReturnValue, class UProspectForecastRow_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void HandleExecute(class UUserWidget* Widget, int32 Amount);
	void ExecuteUbergraph_CF_UpdateForecast(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, class UProspectForecastRow_C* K2Node_DynamicCast_AsProspect_Forecast_Row, bool K2Node_DynamicCast_bSuccess_1, const struct FProspectForecastRowHandle& CallFunc_StructToRowHandle_ReturnValue);
};

}


