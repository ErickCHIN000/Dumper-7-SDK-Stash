#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass EQC_POIActors.EQC_POIActors_C
class UEQC_POIActors_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UEQC_POIActors_C* GetDefaultObj();

	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet, const TArray<struct FVector>& LClaimedLocations, class UNWXAIPOI_Component* Temp_object_Variable, TScriptInterface<class ISquadMemberNativeInterface> K2Node_DynamicCast_AsSquad_Member_Native_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IAIPPOIInteractionInterface> K2Node_DynamicCast_AsAIPPOIInteraction_Interface, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetSpawnerActor_ReturnValue, TSet<class AActor*> CallFunc_GetCurrentActors_CurrentActors, TArray<class AActor*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* Temp_object_Variable_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, TScriptInterface<class IAIPPOIInteractionInterface> K2Node_DynamicCast_AsAIPPOIInteraction_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class UNWXAIPOI_Component* CallFunc_GetCurrentPOIImplementer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet, class UNWXAIPOI_Component* Temp_object_Variable, TScriptInterface<class IAIPPOIInteractionInterface> K2Node_DynamicCast_AsAIPPOIInteraction_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IAIPPOIInteractionInterface> K2Node_DynamicCast_AsAIPPOIInteraction_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UNWXAIPOI_Component* CallFunc_GetCurrentPOIImplementer_ReturnValue, TSet<class AActor*> CallFunc_GetCurrentActors_CurrentActors, TArray<class AActor*>& CallFunc_Set_ToArray_Result);
};

}


