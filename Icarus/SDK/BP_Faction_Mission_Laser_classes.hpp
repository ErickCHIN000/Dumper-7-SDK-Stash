#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x7C8 - 0x774)
// BlueprintGeneratedClass BP_Faction_Mission_Laser.BP_Faction_Mission_Laser_C
class ABP_Faction_Mission_Laser_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_1018[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                       Decal;                                             // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_LaserBeam;                                      // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_LaserImpact;                                    // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       LaserSource;                                       // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   DestructionAudio;                                  // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   LaserAudio;                                        // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         LaserActive;                                       // 0x7B8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_102F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusActor*                          Target;                                            // 0x7C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Faction_Mission_Laser_C* GetDefaultObj();

	void GetLaserSourceLocation(struct FVector* Location, struct FVector* ForwardVector, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue);
	void SetPoweredMaterial(bool On, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default);
	TArray<class UDecalComponent*> GetLaserDecals(TArray<class UDecalComponent*>& K2Node_MakeArray_Array);
	TArray<class UNiagaraComponent*> GetLaserImpacts(TArray<class UNiagaraComponent*>& K2Node_MakeArray_Array);
	TArray<class UNiagaraComponent*> GetLaserBeams(TArray<class UNiagaraComponent*>& K2Node_MakeArray_Array);
	void TraceForImpactLocation(bool* Found, struct FVector* End_Location, TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Array_Index_Variable, class FName Temp_name_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_GetLaserSourceLocation_Location, const struct FVector& CallFunc_GetLaserSourceLocation_ForwardVector, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<struct FHitResult>& CallFunc_LineTraceMultiForObjects_OutHits, bool CallFunc_LineTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Array_Contains_ReturnValue);
	void OnRep_LaserActive(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UDecalComponent*>& CallFunc_GetLaserDecals_ReturnValue, TArray<class UNiagaraComponent*>& CallFunc_GetLaserImpacts_ReturnValue, class UDecalComponent* CallFunc_Array_Get_Item, class UNiagaraComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UNiagaraComponent* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, class UDecalComponent* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, TArray<class UNiagaraComponent*>& CallFunc_GetLaserBeams_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_4, class UNiagaraComponent* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, class UNiagaraComponent* CallFunc_Array_Get_Item_6, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_6, TArray<class UNiagaraComponent*>& CallFunc_GetLaserBeams_ReturnValue_1, bool CallFunc_TraceForImpactLocation_Found, const struct FVector& CallFunc_TraceForImpactLocation_End_Location, class UNiagaraComponent* CallFunc_Array_Get_Item_7, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_7, bool CallFunc_TraceForImpactLocation_Found_1, const struct FVector& CallFunc_TraceForImpactLocation_End_Location_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_2);
	void IcarusBeginPlay();
	void OnNetworkComponentActive(bool IsActive);
	void ExecuteUbergraph_BP_Faction_Mission_Laser(int32 EntryPoint, enum class EValid CallFunc_GetTrait_Paths, class UEnergyComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_IsActive);
};

}


