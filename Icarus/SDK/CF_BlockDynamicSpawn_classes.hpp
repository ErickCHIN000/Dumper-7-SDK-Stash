#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x310 - 0x308)
// WidgetBlueprintGeneratedClass CF_BlockDynamicSpawn.CF_BlockDynamicSpawn_C
class UCF_BlockDynamicSpawn_C : public UCF_BaseComboBool_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_BlockDynamicSpawn_C* GetDefaultObj();

	void Construct();
	void HandleOnCheckboxStateChanged(class UUserWidget* SelectedWidget, bool IsChecked);
	void HandleOnItemSet(class UUserWidget* Widget);
	void ExecuteUbergraph_CF_BlockDynamicSpawn(int32 EntryPoint, bool Temp_bool_Variable, class UBiomeRow_C* CallFunc_Create_ReturnValue, enum class ECheckBoxState Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FBiomesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FBiomesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, const struct FBiomesRowHandle& CallFunc_MakeBiomes_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UUserWidget* K2Node_Event_SelectedWidget, bool K2Node_Event_IsChecked, class UUserWidget* K2Node_Event_Widget, class UBiomeRow_C* K2Node_DynamicCast_AsBiome_Row, bool K2Node_DynamicCast_bSuccess, class UBiomeRow_C* K2Node_DynamicCast_AsBiome_Row_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class AAISpawner*>& CallFunc_GetAllActorsOfClass_OutActors, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AAISpawner* CallFunc_Array_Get_Item, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool CallFunc_IsBiomeDynamicSpawnBlocked_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue, enum class ECheckBoxState Temp_byte_Variable_1, int32 CallFunc_NumRows_ReturnValue, enum class ECheckBoxState K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue);
};

}


