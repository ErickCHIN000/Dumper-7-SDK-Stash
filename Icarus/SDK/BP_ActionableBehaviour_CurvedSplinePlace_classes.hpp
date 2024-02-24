#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x540 - 0x468)
// BlueprintGeneratedClass BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C
class UBP_ActionableBehaviour_CurvedSplinePlace_C : public UBP_ActionableBehaviour_SimplePlace_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_IcarusSplineActor_C*               WorkingSpline;                                     // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, enum class ESplineTypes>         ToolTypeMap;                                       // 0x478(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        ToolInt;                                           // 0x4C8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESplineTypes                      SplineType;                                        // 0x4CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class ESplineTypes, float>         SplineTypeMaxDistance;                             // 0x4D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Snapping;                                          // 0x520(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_46ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            FMODEvent_SplinePlaced_Anchorable;                 // 0x528(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FMODEvent_SplinePlaced_Spline;                     // 0x530(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FMODEvent_SplinePlaced_Deployable;                 // 0x538(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_CurvedSplinePlace_C* GetDefaultObj();

	void GetSplineConnectionPointFromActor(class AActor* Actor, enum class ESplineTypes SplineType, struct FTransform* Transform, class UBP_IcarusSplineConnectionComponent_Electric_C* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UBP_IcarusSplineConnectionComponent_Fuel_C* CallFunc_GetComponentByClass_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, class UBP_IcarusSplineConnectionComponent_Water_C* CallFunc_GetComponentByClass_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2);
	void WorldSpaceTooCloseToAnySpline(const struct FVector& WorldSpaceLocation, bool* bLocked, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, TArray<struct FHitResult>& CallFunc_SphereTraceMulti_OutHits, bool CallFunc_SphereTraceMulti_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABP_IcarusSplineActor_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Actor, bool K2Node_DynamicCast_bSuccess, class UBP_IcarusSplineSegment_C* CallFunc_FindSegmentFromComponent_SplineSegment, int32 CallFunc_FindSegmentFromComponent_SegmentIndex, bool CallFunc_FindSegmentFromComponent_Success, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ActorIsLinkable(class ABP_DeployableBase_C* Deployable, bool* Linkable, enum class EValid CallFunc_GetTrait_Paths, class UFuelComponent* CallFunc_GetTrait_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UEnergyComponent* CallFunc_GetTrait_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EValid CallFunc_GetTrait_Paths_2, class UWaterComponent* CallFunc_GetTrait_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABP_IcarusSplineActor_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PlayNegativeFeedback(class UPlayerFeedbackSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void PlaySplinePointPlacedAudio(enum class ECurvedSplinePlaceContext Context, struct FHitResult& Hit, enum class ECurvedSplinePlaceContext Temp_byte_Variable, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class EPhysicalSurface Temp_wildcard_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFMODEvent* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1);
	void SplineAnchorableHitCheck(class AActor* HitActor, bool* CanPlacePoint, class FName Temp_name_Variable, class ABuildingBase* K2Node_DynamicCast_AsBuilding_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, class ALandscapeProxy* K2Node_DynamicCast_AsLandscape_Proxy, bool K2Node_DynamicCast_bSuccess_1);
	void OnRep_Snapping(bool CallFunc_IsValid_ReturnValue);
	void FindSegmentFromComponent(class ABP_IcarusSplineActor_C* SplineActor, class UPrimitiveComponent* HitComponent, class UBP_IcarusSplineSegment_C** SplineSegment, int32* SegmentIndex, bool* Success, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, class UBP_IcarusSplineSegment_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void ShouldActionCameraTrace(enum class EActionableEventType ActionableType, enum class EActionableTrigger ActionableTrigger, bool* ShouldTrace, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void ValidPlacementCheck(const struct FHitResult& Hit, bool* Valid);
	void OnActionHit(class AActor* InvokingActor, class UPrimitiveComponent* OverlappedComponent, struct FHitResult& SweepResult);
	void TickCameraTraceHit(const struct FHitResult& Hit, bool DidHit);
	void OnActionCameraTraceHit(const struct FHitResult& Hit);
	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void MULTI_PlaySplinePointPlacedAudio(class UFMODEvent* FMODEvent, const struct FVector& Location, enum class EPhysicalSurface Surface);
	void ExecuteUbergraph_BP_ActionableBehaviour_CurvedSplinePlace(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPrimitiveComponent* Temp_wildcard_Variable, class UBP_IcarusSplineSegment_C* Temp_wildcard_Variable_1, class AActor* K2Node_Event_InvokingActor_1, class UPrimitiveComponent* K2Node_Event_OverlappedComponent, const struct FHitResult& K2Node_Event_SweepResult, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, const struct FHitResult& K2Node_Event_Hit_1, bool K2Node_Event_DidHit, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FHitResult& K2Node_Event_Hit, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_ActorIsLinkable_Linkable, class UBP_IcarusSplinePoint_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Point, bool K2Node_DynamicCast_bSuccess_1, class UBP_IcarusSplineMesh_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Mesh, bool K2Node_DynamicCast_bSuccess_2, class ABP_IcarusSplineActor_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Actor, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UBP_IcarusSplineSegment_C* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UBP_IcarusSplineSegment_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UBP_IcarusSplineSegment_C* CallFunc_FindSegmentFromComponent_SplineSegment, int32 CallFunc_FindSegmentFromComponent_SegmentIndex, bool CallFunc_FindSegmentFromComponent_Success, int32 CallFunc_Subtract_IntInt_ReturnValue_2, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UBP_IcarusSplineSegment_C* CallFunc_FindSegmentFromComponent_SplineSegment_1, int32 CallFunc_FindSegmentFromComponent_SegmentIndex_1, bool CallFunc_FindSegmentFromComponent_Success_1, const struct FVector& CallFunc_FindLocationClosestToWorldLocation_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, float CallFunc_FindInputKeyClosestToWorldLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Round_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue_1, class USceneComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, const struct FTransform& CallFunc_GetTransformAtSplinePoint_ReturnValue, int32 CallFunc_Clamp_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UBP_IcarusSplineSegment_C* CallFunc_Array_Get_Item_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_IcarusSplineActor_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_IsPointCloserToStart_CloserToStart, class UClass* CallFunc_ConfigureSegmentFromType_RepresentitiveClass, class UStaticMesh* CallFunc_ConfigureSegmentFromType_RepSegmentMesh, class UMaterialInterface* CallFunc_ConfigureSegmentFromType_RepSegmentFinalMaterial, int32 CallFunc_ConfigureSegmentFromType_Materialndex, bool CallFunc_ConfigureSegmentFromType_UseNodeMeshes, const struct FVector& CallFunc_ConfigureSegmentFromType_SegmentOffset, class UStaticMesh* CallFunc_ConfigureSegmentFromType_NodeMesh, class UMaterialInterface* CallFunc_ConfigureSegmentFromType_NodeMaterial, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_ElementIndex_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, bool CallFunc_SplineAnchorableHitCheck_CanPlacePoint, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_ActorIsLinkable_Linkable_1, class ABP_IcarusSplineActor_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Actor_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_SplineAnchorableHitCheck_CanPlacePoint_1, class UBP_IcarusSplineSegment_C* CallFunc_FindSegmentFromComponent_SplineSegment_2, int32 CallFunc_FindSegmentFromComponent_SegmentIndex_2, bool CallFunc_FindSegmentFromComponent_Success_2, bool CallFunc_IsValid_ReturnValue_4, class ABP_IcarusSplineActor_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Actor_2, bool K2Node_DynamicCast_bSuccess_6, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class ABP_IcarusSplineActor_C* CallFunc_FinishSpawningActor_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, class ABP_IcarusSplineActor_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Actor_3, bool K2Node_DynamicCast_bSuccess_7, class UBP_IcarusSplineSegment_C* CallFunc_FindSegmentFromComponent_SplineSegment_3, int32 CallFunc_FindSegmentFromComponent_SegmentIndex_3, bool CallFunc_FindSegmentFromComponent_Success_3, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, const struct FVector& CallFunc_GetSecondLastPointWorldLocation_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_Remove_Last_Point_and_Segment_Error, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FTransform& Temp_wildcard_Variable_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const class FString& CallFunc_Conv_TransformToString_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_Update_Spline_To_Another_Spline_Segment_Success, bool CallFunc_Update_Spline_To_Another_Spline_Segment_Success_1, const struct FSplineIndexStructArray& Temp_wildcard_Variable_3, bool CallFunc_IsValid_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESplineTypes CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsServer_ReturnValue_4, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const struct FVector& Temp_wildcard_Variable_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSecondLastPointWorldLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Update_Spline_Start_to_Spline_Segment_end_Success, const struct FVector& CallFunc_FindLocationClosestToWorldLocation_ReturnValue_1, const struct FVector& CallFunc_FindLocationClosestToWorldLocation_ReturnValue_2, bool CallFunc_Update_Spline_Start_to_Spline_Segment_end_Success_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_11, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_5, const struct FVector& Temp_wildcard_Variable_5, const struct FVector& CallFunc_FindLocationClosestToWorldLocation_ReturnValue_3, const struct FVector& CallFunc_FindLocationClosestToWorldLocation_ReturnValue_4, const struct FActorArrayStruct& K2Node_MakeStruct_ActorArrayStruct, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_6, class USceneComponent* CallFunc_Array_Get_Item_4, class UBP_IcarusSplineSegment_C* CallFunc_Array_Get_Item_5, class UBP_IcarusSplinePoint_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Point_1, bool K2Node_DynamicCast_bSuccess_8, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FRotator& CallFunc_TransformRotation_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_5, const struct FSplineIndexStructArray& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, const struct FVector& Temp_wildcard_Variable_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_6, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABP_IcarusSplineActor_C* CallFunc_FinishSpawningActor_ReturnValue_2, const struct FActorArrayStruct& Temp_wildcard_Variable_7, const struct FVector& Temp_wildcard_Variable_8, const struct FTransform& CallFunc_MakeTransform_ReturnValue_7, class AActor* CallFunc_Array_Get_Item_6, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base_2, bool K2Node_DynamicCast_bSuccess_9, class ABP_IcarusSplineActor_C* CallFunc_FinishSpawningActor_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_1, class UBP_IcarusSplineSegment_C* Temp_wildcard_Variable_9, class ABP_IcarusSplineActor_C* CallFunc_SplitSplineAtSegment_NewSplitSpline, class UBP_IcarusSplineSegment_C* CallFunc_Array_Get_Item_7, bool CallFunc_Update_Spline_To_Another_Spline_Segment_Success_2, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_7, class ABP_IcarusSplineActor_C* CallFunc_SplitSplineAtSegment_NewSplitSpline_1, bool CallFunc_IsValid_ReturnValue_12, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, const struct FVector& Temp_wildcard_Variable_10, float CallFunc_Vector_Distance_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue_2, const struct FSplineIndexStructArray& CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FSplineIndexStruct>& CallFunc_BufferSplineConnectionStructs_Buffered, const struct FSplineIndexStruct& CallFunc_Array_Get_Item_8, bool CallFunc_Remove_Last_Point_and_Segment_Error_1, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_RemoveConnectionTwoWay_Error, bool CallFunc_Less_IntInt_ReturnValue_2, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class ABP_IcarusSplineActor_C* Temp_wildcard_Variable_11, bool Temp_wildcard_Variable_12, class UFMODEvent* K2Node_CustomEvent_FMODEvent, const struct FVector& K2Node_CustomEvent_Location, enum class EPhysicalSurface K2Node_CustomEvent_Surface, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, enum class ESurfaceFMODParam CallFunc_GetSurfaceFMODParam_SurfaceFMODParam, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_13, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_EventInstanceIsValid_ReturnValue, class USceneComponent* Temp_wildcard_Variable_13, class UBP_IcarusSplinePoint_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Point_2, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsAlreadyConnectedToSpline_Connected, bool CallFunc_Update_Spline_Start_to_Spline_Segment_end_Success_2, const struct FSplineIndexStructArray& K2Node_MakeStruct_SplineIndexStructArray, bool CallFunc_IsAlreadyConnectedToSpline_Connected_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_8, int32 Temp_int_Variable, const struct FVector& Temp_wildcard_Variable_14, const class FString& CallFunc_Conv_VectorToString_ReturnValue, int32 Temp_int_Array_Index_Variable_3, const struct FSplineIndexStruct& CallFunc_Array_Get_Item_9, bool CallFunc_AddConnection_Success, const struct FTransform& CallFunc_GetSplineConnectionPointFromActor_Transform, const struct FTransform& CallFunc_GetSplineConnectionPointFromActor_Transform_1, const struct FVector& CallFunc_BreakTransform_Location_4, const struct FRotator& CallFunc_BreakTransform_Rotation_4, const struct FVector& CallFunc_BreakTransform_Scale_4, const struct FVector& CallFunc_BreakTransform_Location_5, const struct FRotator& CallFunc_BreakTransform_Rotation_5, const struct FVector& CallFunc_BreakTransform_Scale_5, const struct FVector& CallFunc_BreakTransform_Location_6, const struct FRotator& CallFunc_BreakTransform_Rotation_6, const struct FVector& CallFunc_BreakTransform_Scale_6, const struct FHitResult& CallFunc_DoTrace_OutHit, bool CallFunc_DoTrace_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_9, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, bool CallFunc_BreakHitResult_bBlockingHit_3, bool CallFunc_BreakHitResult_bInitialOverlap_3, float CallFunc_BreakHitResult_Time_3, float CallFunc_BreakHitResult_Distance_3, const struct FVector& CallFunc_BreakHitResult_Location_3, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_3, const struct FVector& CallFunc_BreakHitResult_Normal_3, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_3, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_3, class AActor* CallFunc_BreakHitResult_HitActor_3, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_3, class FName CallFunc_BreakHitResult_HitBoneName_3, int32 CallFunc_BreakHitResult_HitItem_3, int32 CallFunc_BreakHitResult_ElementIndex_3, int32 CallFunc_BreakHitResult_FaceIndex_3, const struct FVector& CallFunc_BreakHitResult_TraceStart_3, const struct FVector& CallFunc_BreakHitResult_TraceEnd_3, class UBP_IcarusSplinePoint_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Point_3, bool K2Node_DynamicCast_bSuccess_11, class UCableComponent* K2Node_DynamicCast_AsCable_Component, bool K2Node_DynamicCast_bSuccess_12, class USplineMeshComponent* K2Node_DynamicCast_AsSpline_Mesh_Component, bool K2Node_DynamicCast_bSuccess_13, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base_3, bool K2Node_DynamicCast_bSuccess_14, class ABP_IcarusSplineActor_C* K2Node_DynamicCast_AsBP_Icarus_Spline_Actor_4, bool K2Node_DynamicCast_bSuccess_15, class ABP_IcarusSplineActor_C* CallFunc_Array_Get_Item_10, class ABP_IcarusSplineActor_C* CallFunc_SplitSplineAtSegment_NewSplitSpline_2, class UBP_IcarusSplineSegment_C* CallFunc_FindSegmentFromComponent_SplineSegment_4, int32 CallFunc_FindSegmentFromComponent_SegmentIndex_4, bool CallFunc_FindSegmentFromComponent_Success_4, class UBP_IcarusSplineSegment_C* CallFunc_GetSplineSegmentFromRepresentation_SplineSegment, bool CallFunc_GetSplineSegmentFromRepresentation_Success, int32 CallFunc_Array_Length_ReturnValue_8, class ABP_IcarusSplineActor_C* CallFunc_FinishSpawningActor_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3);
};

}


