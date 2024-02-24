#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x318 - 0x30C)
// WidgetBlueprintGeneratedClass CF_BestiaryFishingCatches.CF_BestiaryFishingCatches_C
class UCF_BestiaryFishingCatches_C : public UCF_BaseComboInteger_C
{
public:
	uint8                                        Pad_1DB3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_BestiaryFishingCatches_C* GetDefaultObj();

	void OnConstruction(int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FFishDataEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFishDataRowHandle& CallFunc_StructToRowHandle_ReturnValue, class UFishDataRow_C* CallFunc_Create_ReturnValue, class UFishDataRow_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void Construct();
	void Handle_Execute(class UUserWidget* Widget, int32 Amount);
	void Handle_On_Item_Set(class UUserWidget* Widget);
	void ExecuteUbergraph_CF_BestiaryFishingCatches(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FFishDataEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFishDataRowHandle& CallFunc_StructToRowHandle_ReturnValue, class UUserWidget* K2Node_Event_Widget_1, int32 K2Node_Event_Amount, class UUserWidget* K2Node_Event_Widget, class UFishDataRow_C* K2Node_DynamicCast_AsFish_Data_Row, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_1);
};

}


