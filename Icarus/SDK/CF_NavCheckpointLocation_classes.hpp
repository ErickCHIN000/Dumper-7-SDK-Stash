#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// WidgetBlueprintGeneratedClass CF_NavCheckpointLocation.CF_NavCheckpointLocation_C
class UCF_NavCheckpointLocation_C : public UCF_BaseCombo_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_NavCheckpointLocation_C* GetDefaultObj();

	void HandleExecute(class UUserWidget* Widget, int32 Amount);
	void Construct();
	void ExecuteUbergraph_CF_NavCheckpointLocation(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, class UActorRow_C* K2Node_DynamicCast_AsActor_Row, bool K2Node_DynamicCast_bSuccess_1, TArray<class ABP_NavigationCheckpoint_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_NavigationCheckpoint_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class UActorRow_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const class FString& CallFunc_Conv_TextToString_ReturnValue);
};

}


