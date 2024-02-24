#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x310 - 0x308)
// WidgetBlueprintGeneratedClass CF_SetAccountFlag.CF_SetAccountFlag_C
class UCF_SetAccountFlag_C : public UCF_BaseComboBoolExec_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_SetAccountFlag_C* GetDefaultObj();

	void GetAllAccountFlagRowHandles(TArray<struct FAccountFlagsRowHandle>* Rows, const TArray<struct FAccountFlagsRowHandle>& AccountFlags, int32 CallFunc_NumRows_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FAccountFlagsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FAccountFlagsRowHandle& CallFunc_StructToRowHandle_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Construct();
	void HandleOnItemSet(class UUserWidget* Widget);
	void Execute();
	void ExecuteUbergraph_CF_SetAccountFlag(int32 EntryPoint, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState Temp_byte_Variable_1, enum class ECheckBoxState Temp_byte_Variable_2, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* K2Node_Event_Widget, class UAccountFlagRow_C* K2Node_DynamicCast_AsAccount_Flag_Row, bool K2Node_DynamicCast_bSuccess, TArray<struct FAccountFlagsRowHandle>& CallFunc_GetAllAccountFlagRowHandles_Rows, const struct FAccountFlagsRowHandle& CallFunc_Array_Get_Item, bool CallFunc_IsRowHandleValid_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UAccountFlagRow_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable_3, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByPlayerCharacter_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByPlayerCharacter_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_HasAccountFlagPlayer_ReturnValue, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue, enum class ECheckBoxState K2Node_Select_Default, class UAccountFlagRow_C* K2Node_DynamicCast_AsAccount_Flag_Row_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsRowHandleValid_ReturnValue_1, enum class ECheckBoxState CallFunc_GetCheckedState_ReturnValue, bool K2Node_Select_Default_1);
};

}


