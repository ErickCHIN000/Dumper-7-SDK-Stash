#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x308 - 0x300)
// WidgetBlueprintGeneratedClass CF_WeatherEvent.CF_WeatherEvent_C
class UCF_WeatherEvent_C : public UCF_BaseCombo2_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_WeatherEvent_C* GetDefaultObj();

	void OnConstruction(int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FBiomesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FBiomesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, const struct FBiomesRowHandle& CallFunc_MakeBiomes_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, const struct FWeatherEventsEnum& CallFunc_IntToStruct_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FWeatherEventsRowHandle& CallFunc_StructToRowHandle_ReturnValue_1, const struct FIcarusWeatherEvent& CallFunc_GetWeatherEventsStruct_WeatherEvents, enum class EValid CallFunc_GetWeatherEventsStruct_Paths, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class FName CallFunc_Conv_StringToName_ReturnValue, class UBiomeRow_C* CallFunc_Create_ReturnValue, class UWeatherRow_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_NumRows_ReturnValue, int32 CallFunc_NumRows_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Construct();
	void HandleExecute(class UUserWidget* Widget1, class UUserWidget* Widget2);
	void ExecuteUbergraph_CF_WeatherEvent(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, class UUserWidget* K2Node_Event_Widget1, class UUserWidget* K2Node_Event_Widget2, class UWeatherRow_C* K2Node_DynamicCast_AsWeather_Row, bool K2Node_DynamicCast_bSuccess_1, class UBiomeRow_C* K2Node_DynamicCast_AsBiome_Row, bool K2Node_DynamicCast_bSuccess_2);
};

}


