#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// WidgetBlueprintGeneratedClass CF_TeleportToProspect.CF_TeleportToProspect_C
class UCF_TeleportToProspect_C : public UCF_BaseCombo_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_TeleportToProspect_C* GetDefaultObj();

	void GetTeleportLocation(const struct FProspectListRowHandle& RowHandle, struct FVector* Location, bool* FoundValidLocation, const TArray<class AIcarusRocketSpawnBase*>& ValidSpawns, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, TArray<class AIcarusRocketSpawnBase*>& CallFunc_GetAllActorsOfClass_OutActors, class AIcarusRocketSpawnBase* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetGroupIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class AActor*>& Temp_object_Variable, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class AIcarusRocketSpawnBase* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_SelectVector_ReturnValue);
	void GetValidProspectStarts(TArray<struct FProspectListRowHandle>* ProspectRowHandles, const TArray<struct FProspectListRowHandle>& ValidProspects, class FName CurrentLevelName, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FProspectListEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FProspectListRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, int32 CallFunc_NumRows_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnConstruction(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UProspectRow_C* CallFunc_Create_ReturnValue, TArray<struct FProspectListRowHandle>& CallFunc_GetValidProspectStarts_ProspectRowHandles, const struct FProspectListRowHandle& CallFunc_Array_Get_Item, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Execute();
	void Construct();
	void ExecuteUbergraph_CF_TeleportToProspect(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UProspectRow_C* K2Node_DynamicCast_AsProspect_Row, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetTeleportLocation_Location, bool CallFunc_GetTeleportLocation_FoundValidLocation);
};

}


