#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x3E0 - 0x3D1)
// BlueprintGeneratedClass Buildable_ModularMaster.Buildable_ModularMaster_C
class ABuildable_ModularMaster_C : public ABuildable_MASTER_C
{
public:
	uint8                                        Pad_23EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABuildable_ModularMaster_C* GetDefaultObj();

	void GetSnappedObjects(TArray<class ABuildable_ModularMaster_C*>* OverlappingObjects, const TArray<class ABuildable_ModularMaster_C*>& LocalOverlappingObjects, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, TArray<struct FHitResult>& CallFunc_BoxTraceMultiForObjects_OutHits, bool CallFunc_BoxTraceMultiForObjects_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, class ABuildable_ModularMaster_C* K2Node_DynamicCast_AsBuildable_Modular_Master, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnServerExecuteInteract(int32 OptionIndex, class AActor* ByActor);
	void RemoveModularBuilds();
	void ExecuteUbergraph_Buildable_ModularMaster(int32 EntryPoint, TArray<class ABuildable_ModularMaster_C*>& CallFunc_GetSnappedObjects_OverlappingObjects, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IBPI_Buildables_C> K2Node_DynamicCast_AsBPI_Buildables, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Event_OptionIndex, class AActor* K2Node_Event_ByActor, bool K2Node_SwitchInteger_CmpSuccess, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AHUD_Game_C* CallFunc_GetHUD_HUD);
};

}


