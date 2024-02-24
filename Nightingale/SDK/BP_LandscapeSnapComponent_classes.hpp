#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB0 - 0xA0)
// BlueprintGeneratedClass BP_LandscapeSnapComponent.BP_LandscapeSnapComponent_C
class UBP_LandscapeSnapComponent_C : public UActorComponent
{
public:
	double                                       ZTraceStartOffset;                                 // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ZTraceEndOffset;                                   // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_LandscapeSnapComponent_C* GetDefaultObj();

	void FindLandscapeHit(const struct FVector& Location, bool* FoundHit, struct FVector* OutputPin, const struct FLinearColor& Temp_struct_Variable, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FLinearColor& Temp_struct_Variable_1, class AStructureConstructedBase* CallFunc_GetDefaultObject_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<struct FHitResult>& CallFunc_NWXLineTraceMultiForObjects_OutHits, bool CallFunc_NWXLineTraceMultiForObjects_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue);
	void SnapComponent(class USceneComponent* Component, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_FindLandscapeHit_FoundHit, const struct FVector& CallFunc_FindLandscapeHit_OutputPin, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
	void SnapActor(class AActor* Actor, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_FindLandscapeHit_FoundHit, const struct FVector& CallFunc_FindLandscapeHit_OutputPin, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_GetDisplayName_ReturnValue_3, const class FString& CallFunc_GetDisplayName_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


