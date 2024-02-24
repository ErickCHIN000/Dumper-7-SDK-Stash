#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x318 - 0x30C)
// WidgetBlueprintGeneratedClass CF_BestiaryKills.CF_BestiaryKills_C
class UCF_BestiaryKills_C : public UCF_BaseComboInteger_C
{
public:
	uint8                                        Pad_26C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_BestiaryKills_C* GetDefaultObj();

	void OnConstruction(int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FBestiaryDataEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FBestiaryDataRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FBestiaryData& CallFunc_GetBestiaryDataStruct_BestiaryData, enum class EValid CallFunc_GetBestiaryDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UBestiaryGroupRow_C* CallFunc_Create_ReturnValue, class UBestiaryGroupRow_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void Handle_Execute(class UUserWidget* Widget, int32 Amount);
	void Handle_On_Item_Set(class UUserWidget* Widget);
	void ExecuteUbergraph_CF_BestiaryKills(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FBestiaryDataEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FBestiaryDataRowHandle& CallFunc_StructToRowHandle_ReturnValue, class UUserWidget* K2Node_Event_Widget_1, int32 K2Node_Event_Amount, class UUserWidget* K2Node_Event_Widget, class UBestiaryGroupRow_C* K2Node_DynamicCast_AsBestiary_Group_Row, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_1);
};

}


