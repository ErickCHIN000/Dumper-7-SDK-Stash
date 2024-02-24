#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// WidgetBlueprintGeneratedClass CF_FLODSelectTile.CF_FLODSelectTile_C
class UCF_FLODSelectTile_C : public UCF_BaseCombo_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_FLODSelectTile_C* GetDefaultObj();

	void HandleArg(int32 Index, const class FString& Arg);
	void HandleExecute(class UUserWidget* Widget, int32 Amount);
	void Construct();
	void HandleArgsConstructLol();
	void ExecuteUbergraph_CF_FLODSelectTile(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool Temp_bool_IsClosed_Variable, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, class UFLODTileRow_C* CallFunc_Create_ReturnValue, class UFLODTileRow_C* K2Node_DynamicCast_AsFLODTile_Row, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFLOD* CallFunc_GetFLOD_ReturnValue, class AFLOD* CallFunc_GetFLOD_ReturnValue_1, TArray<class AFLODTile*>& CallFunc_GetWithinBoundsFLODTiles_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class AFLODTile* K2Node_DynamicCast_AsFLODTile, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, class AFLODTile* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue_1, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component_1, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


