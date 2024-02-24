#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x318 - 0x30C)
// WidgetBlueprintGeneratedClass CF_AddMetaCurrency.CF_AddMetaCurrency_C
class UCF_AddMetaCurrency_C : public UCF_BaseComboInteger_C
{
public:
	uint8                                        Pad_2A6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_AddMetaCurrency_C* GetDefaultObj();

	void OnConstruction(int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FMetaCurrencyEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMetaCurrencyRowHandle& CallFunc_StructToRowHandle_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UMetaResourceRow_C* CallFunc_Create_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void Handle_Execute(class UUserWidget* Widget, int32 Amount);
	void ExecuteUbergraph_CF_AddMetaCurrency(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, class UMetaResourceRow_C* K2Node_DynamicCast_AsMeta_Resource_Row, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FMetaResource& K2Node_MakeStruct_MetaResource);
};

}


