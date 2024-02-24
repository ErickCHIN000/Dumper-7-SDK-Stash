#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x278 - 0x220)
// BlueprintGeneratedClass ba_rad_RadioactiveZone_01.ba_rad_RadioactiveZone_01_C
class Aba_rad_RadioactiveZone_01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       Scene;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        MaximumRadiation;                                  // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InnerShapeScale;                                   // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsRadiationDispersionZone;                        // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_189A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RadiationDispersionStrength;                       // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RadiationOscilationAmount;                         // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_189E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class Aba_rad_RadioactiveZoneAttractor_01_C*> Attractors;                                        // 0x248(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                               ZonePositionBeforeAttract;                         // 0x258(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsReturningToPositionBeforeAttract;               // 0x264(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttractSpeed;                                      // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           IncrementCurve;                                    // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_rad_RadioactiveZone_01_C* GetDefaultObj();

	void GetMaxRadiationWithOscilationRandomOffset(float* Rads, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void InternalOnEndMovingTowardAttractor();
	void InternalOnStartMovingTowardAttractor();
	void UpdateAttractors(float DeltaSeconds, class Aba_rad_RadioactiveZoneAttractor_01_C* ClosestAttractor, float MinDistanceToAttractor, int32 Temp_int_Array_Index_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorWorldOffset_SweepHitResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorWorldOffset_SweepHitResult_1, float CallFunc_VSize_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, class Aba_rad_RadioactiveZoneAttractor_01_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, float CallFunc_VSize_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue);
	void SetEnabled(bool Enable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_IsOverlappingActor_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2);
	void GetRadiationForWorldPos(const struct FVector& World_Position, float* Radiation);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_ba_rad_RadioactiveZone_01(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, float K2Node_Event_DeltaSeconds, class Aba_rad_RadioactiveZoneAttractor_01_C* K2Node_DynamicCast_AsBa_Rad_Radioactive_Zone_Attractor_01, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_Event_OtherActor_1, class Aba_rad_RadioactiveZoneAttractor_01_C* K2Node_DynamicCast_AsBa_Rad_Radioactive_Zone_Attractor_01_1, bool K2Node_DynamicCast_bSuccess_2, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00_1, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class Aba_rad_MoveableRadiationZoneSphere_01_C* K2Node_DynamicCast_AsBa_Rad_Moveable_Radiation_Zone_Sphere_01, bool K2Node_DynamicCast_bSuccess_4, class Aba_rad_MoveableRadiationZoneSphere_01_C* K2Node_DynamicCast_AsBa_Rad_Moveable_Radiation_Zone_Sphere_01_1, bool K2Node_DynamicCast_bSuccess_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_IsOverlappingActor_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1);
};

}


