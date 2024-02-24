#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7C (0x274 - 0x1F8)
// BlueprintGeneratedClass BP_LakeAudioComponent.BP_LakeAudioComponent_C
class UBP_LakeAudioComponent_C : public USceneComponent
{
public:
	uint8                                        Pad_408E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x200(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusPlayerController*               PlayerController;                                  // 0x208(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMODAudioComponent;                                // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InterpSpeed;                                       // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEdgeSplineComponent*                  EdgeSpline;                                        // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FMODEvent;                                         // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           UpdateDistanceCurve;                               // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESplineLoopDirection              SplineDirection;                                   // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LakeLocation;                                      // 0x23C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UEdgeSplineComponent*>          IslandSplines;                                     // 0x248(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector                               BoundingSphereOrigin;                              // 0x258(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BoundingSphereRadius;                              // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxUpdateRadiusSquared;                            // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxUpdateRadiusBuffer;                             // 0x26C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxUpdateFrequency;                                // 0x270(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_LakeAudioComponent_C* GetDefaultObj();

	void CacheMaxUpdateRadius(class UEdgeSplineComponent* EdgeSpline, float Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSplinePointsBoundingSphere_OutOrigin, float CallFunc_GetSplinePointsBoundingSphere_OutRadius, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Square_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetTimeRange_MinTime, float CallFunc_GetTimeRange_MaxTime);
	void IsWithinUpdateBounds(const struct FVector& ListenerLocation, bool* Result, float CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void GetDistanceWithinIslands(const struct FVector& PlayerLocation, float* Distance, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UActorComponent*>& CallFunc_SortActorComponentsByDistanceFromOrigin_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UEdgeSplineComponent* K2Node_DynamicCast_AsEdge_Spline_Component, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetSplineInfoFromLocation_OutClosestPointOnEdge, bool CallFunc_GetSplineInfoFromLocation_OutIsLocationWithinSpline, float CallFunc_Vector_Distance_ReturnValue);
	void RegisterIslands(TArray<class UEdgeSplineComponent*>& IslandSplines, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UEdgeSplineComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValidEdgeSpline_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void InitialiseInternal(const struct FVector& Location, const struct FWaterSetupRowHandle& WaterSetup, class UEdgeSplineComponent* EdgeSpline, bool* WasSuccessful, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidEdgeSpline_ReturnValue, const struct FWaterSetup& CallFunc_GetWaterSetupStruct_WaterSetup, enum class EValid CallFunc_GetWaterSetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void Initialise(const struct FVector& Location, const struct FWaterSetupRowHandle& WaterSetup, class UEdgeSplineComponent* EdgeSpline, bool CallFunc_InitialiseInternal_WasSuccessful, bool CallFunc_IsDedicatedServer_ReturnValue);
	void SetAudioActive(bool Active, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetTimeToNextUpdate(const struct FVector& ListenerLocation, float* Time, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_GetFloatValue_ReturnValue);
	void UpdateAudio(bool Smooth, float* TimeToNextUpdate, const struct FTransform& ListenerTransform, bool WithinLakeEdge, const struct FVector& Location, float InputKey, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_GetTimeToNextUpdate_Time, const struct FVector& CallFunc_GetSplineInfoFromLocation_OutClosestPointOnEdge, bool CallFunc_GetSplineInfoFromLocation_OutIsLocationWithinSpline, bool CallFunc_IsWithinUpdateBounds_Result, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_GetDistanceWithinIslands_Distance, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_LocationIsInAudibleRangeOfEvent_ReturnValue, float Temp_wildcard_Variable, float Temp_wildcard_Variable_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetAudioListenerTransform_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FVector& K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void AudioTick();
	void StartAudioTick();
	void ExecuteUbergraph_BP_LakeAudioComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, float CallFunc_UpdateAudio_TimeToNextUpdate, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


