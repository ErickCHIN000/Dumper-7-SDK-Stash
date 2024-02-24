#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x548 - 0x540)
// BlueprintGeneratedClass BP_ActionableBehaviour_CurvedSplinePlace_Water.BP_ActionableBehaviour_CurvedSplinePlace_Water_C
class UBP_ActionableBehaviour_CurvedSplinePlace_Water_C : public UBP_ActionableBehaviour_CurvedSplinePlace_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x540(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_CurvedSplinePlace_Water_C* GetDefaultObj();

	void SetHighlight(bool bValue, int32 Value, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, TArray<class ABP_IcarusSplineActor_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_IcarusSplineActor_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class USceneComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	void HighlightPrimitive(class UObject* Object, bool Highlight, int32 StencilValue, bool Temp_bool_Variable, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool K2Node_Select_Default);
	void Event_Highlight(bool Highlight);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ActionableBehaviour_CurvedSplinePlace_Water(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool K2Node_CustomEvent_Highlight, int32 CallFunc_SelectInt_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, float K2Node_Event_DeltaSeconds);
};

}


