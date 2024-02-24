#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass HabFunctionLibrary.HabFunctionLibrary_C
class UHabFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHabFunctionLibrary_C* GetDefaultObj();

	class FString HandStateToString(const struct FHabHandStateStruct& HandState, class UObject* __WorldContext, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_JoinStringArray_ReturnValue);
	struct FVector ConditionallyFilterUpDirection(const struct FVector& Vector, const struct FVector& UpAxis, bool IgnoreUp, class UObject* __WorldContext, const struct FVector& CallFunc_ProjectVectorOnToVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue);
	bool HasEnoughMassToBeRelevant(class UPrimitiveComponent* Component, class UObject* __WorldContext, float CallFunc_GetMass_ReturnValue, bool CallFunc_IsSimulatingPhysics_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HitToHandState(enum class ESpaceHandGripMode HandMode, bool Reaching, const struct FHitResult& Hit, float Distance, class UObject* __WorldContext, struct FHabHandStateStruct* HandState, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_InverseTransformDirection_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FHabHandStateStruct& K2Node_MakeStruct_HabHandStateStruct);
	struct FVector GetHandStateWorldNormal(const struct FHabHandStateStruct& State, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_TransformDirection_ReturnValue);
	struct FVector GetHandStateWorldLocation(const struct FHabHandStateStruct& State, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue);
	class FName GetHabCharacterShoulderName(bool ForLeftHand, class UObject* __WorldContext, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName K2Node_Select_Default);
	class FName GetHabCharacterWristName(bool ForLeftHand, class UObject* __WorldContext, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName K2Node_Select_Default);
	bool IsTouchOrStableGrip(const struct FHabHandStateStruct& HandState, class UObject* __WorldContext, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetAutoOrientUpAxis(class AIcarusPlayerCharacter* Character, const struct FHabHandStateStruct& HandState, bool ForLeftHand, struct FVector& UpAxis, class UObject* __WorldContext, bool* Success, const struct FVector& CallFunc_GetHandStateWorldLocation_ReturnValue, const struct FVector& CallFunc_GetHandStateWorldNormal_ReturnValue, bool CallFunc_IsTouchOrStableGrip_ReturnValue, bool CallFunc_IsStableGrip_ReturnValue, TScriptInterface<class IIGripTargetInterface_C> K2Node_DynamicCast_AsIGrip_Target_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_FindBestCharacterUpAxisDirection_Success, const struct FVector& CallFunc_FindBestCharacterUpAxisDirection_UpAxisDirection, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void GetAutoOrientLocationAndDirection(class AIcarusPlayerCharacter* Character, const struct FHabHandStateStruct& HandState, bool ForLeftHand, struct FVector& DesiredHeadLocation, struct FVector& DesiredFacingDirection, class UObject* __WorldContext, bool* FoundLocationSuccessfully, const struct FVector& CallFunc_GetHandStateWorldLocation_ReturnValue, bool CallFunc_IsStableGrip_ReturnValue, TScriptInterface<class IIGripTargetInterface_C> K2Node_DynamicCast_AsIGrip_Target_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_FindBestCharacterDirection_Success, const struct FVector& CallFunc_FindBestCharacterDirection_BestDirection, bool CallFunc_FindBestCharacterLocation_Success, const struct FVector& CallFunc_FindBestCharacterLocation_BestLocation, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1);
	bool IsStableGrip(const struct FHabHandStateStruct& HandState, class UObject* __WorldContext);
	void FindBestGripTransform(class UPrimitiveComponent* GripTargetComponent, bool ForLeftHand, const struct FVector& TargetLocation, const struct FRotator& TargetRotation, class UObject* __WorldContext, struct FTransform* BestTransform, TScriptInterface<class IIGripTargetInterface_C> K2Node_DynamicCast_AsIGrip_Target_Interface, bool K2Node_DynamicCast_bSuccess, class USplineComponent* K2Node_DynamicCast_AsSpline_Component, bool K2Node_DynamicCast_bSuccess_1, const struct FTransform& CallFunc_FindBestGripTransform_BestTransform, const struct FTransform& CallFunc_FindTransformClosestToWorldLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue);
	struct FHabHandStateStruct MakeHandStateFromGripTarget(class UPrimitiveComponent* GripTarget, const struct FVector& TargetLocation, const struct FRotator& TargetRotation, bool Reaching, float HandDistance, float Created, class UObject* __WorldContext, const struct FTransform& CallFunc_FindBestGripTransform_BestTransform, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_InverseTransformDirection_ReturnValue, const struct FHabHandStateStruct& K2Node_MakeStruct_HabHandStateStruct);
};

}


