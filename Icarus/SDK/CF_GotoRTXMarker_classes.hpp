#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// WidgetBlueprintGeneratedClass CF_GotoRTXMarker.CF_GotoRTXMarker_C
class UCF_GotoRTXMarker_C : public UCF_BaseCombo_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_GotoRTXMarker_C* GetDefaultObj();

	void HandleExecute(class UUserWidget* Widget, int32 Amount);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_CF_GotoRTXMarker(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, class UActorRow_C* K2Node_DynamicCast_AsActor_Row, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, TArray<class ABP_RTXCheatMarker_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UActorRow_C* CallFunc_Create_ReturnValue, class ABP_RTXCheatMarker_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


