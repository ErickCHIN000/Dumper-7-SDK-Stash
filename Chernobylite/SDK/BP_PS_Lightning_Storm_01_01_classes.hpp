#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2A8 - 0x220)
// BlueprintGeneratedClass BP_PS_Lightning_Storm_01_01.BP_PS_Lightning_Storm_01_01_C
class ABP_PS_Lightning_Storm_01_01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UParticleSystemComponent*              P_Lightning_Storm_Clouds_01;                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystem*                       LightningParticles;                                // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnLocationOffset;                               // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningDelayMin;                                 // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningDelayMax;                                 // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InitialDelay;                                      // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       LightningHitFireParticles;                         // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsActive;                                         // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B46[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class Aba_PortableLightningStrike_C*> FireArray;                                         // 0x260(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                        IgnoredActors;                                     // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TSoftObjectPtr<class UParticleSystem>        LightningHitParticle;                              // 0x280(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PS_Lightning_Storm_01_01_C* GetDefaultObj();

	void UserConstructionScript(int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void Spawn_Lightning();
	void StormActivate();
	void StormDeactivate();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PS_Lightning_Storm_01_01(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class Aba_PortableLightningStrike_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AProceduralFoliageVolume*>& CallFunc_GetAllActorsOfClass_OutActors, class Aba_PortableLightningStrike_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Aba_PortableLightningStrike_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue);
};

}


