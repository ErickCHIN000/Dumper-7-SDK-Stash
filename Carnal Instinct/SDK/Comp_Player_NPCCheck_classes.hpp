#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x100 - 0xB0)
// BlueprintGeneratedClass Comp_Player_NPCCheck.Comp_Player_NPCCheck_C
class UComp_Player_NPCCheck_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                         Active;                                            // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseProximitySystem;                                // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C95[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_NPC_Manager_C*                     NPCManager;                                        // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TraceFreq;                                         // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TraceHandler;                                      // 0xD0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        ActivationRadius;                                  // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TraceZOffset;                                      // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugAreaTrace;                                    // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DebugVisibilityTraces;                             // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CCB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        RelevantNPCs;                                      // 0xE8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class APawn*                                 Owner;                                             // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UComp_Player_NPCCheck_C* GetDefaultObj();

	void FnTraceForNPCs(TArray<class AActor*>* Nearby_NPCs, const TArray<class AActor*>& NearbyNPCs, class AActor* HitActor, enum class EDrawDebugTrace Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, enum class EDrawDebugTrace Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Variable, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UComp_NPC_Controller_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EDrawDebugTrace K2Node_Select_Default, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void FnCheckNPCVisibility(const TArray<class AActor*>& AllNPCs, const TArray<class AActor*>& IgnoreActors, const TArray<class AActor*>& VisibleNPCs, class AActor* HitActor, class AActor* NPC, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UComp_NPC_Controller_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, class AActor* CallFunc_Array_Get_Item_3, class UComp_NPC_Controller_C* CallFunc_GetComponentByClass_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, TScriptInterface<class IBPI_NPC_Controller_C> K2Node_DynamicCast_AsBPI_NPC_Controller, bool K2Node_DynamicCast_bSuccess, class UComp_NPC_Controller_C* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TScriptInterface<class IBPI_NPC_Controller_C> K2Node_DynamicCast_AsBPI_NPC_Controller_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, TArray<class AActor*>& CallFunc_fnTraceForNPCs_Nearby_NPCs, enum class EDrawDebugTrace Temp_byte_Variable, enum class EDrawDebugTrace Temp_byte_Variable_1, class UComp_NPC_Controller_C* CallFunc_GetComponentByClass_ReturnValue_3, TScriptInterface<class IBPI_NPC_Controller_C> K2Node_DynamicCast_AsBPI_NPC_Controller_2, bool K2Node_DynamicCast_bSuccess_2, class UComp_NPC_Controller_C* CallFunc_GetComponentByClass_ReturnValue_4, TScriptInterface<class IBPI_NPC_Controller_C> K2Node_DynamicCast_AsBPI_NPC_Controller_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_4, bool Temp_bool_Variable, bool CallFunc_Array_Contains_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class EDrawDebugTrace K2Node_Select_Default, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void FnGetNPCManager(bool* Found, TArray<class ABP_NPC_Manager_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_NPC_Manager_C* CallFunc_Array_Get_Item);
	void EventTraceForNPCs();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Comp_Player_NPCCheck(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_fnGetNPCManager_Found, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess);
};

}


