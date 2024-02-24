#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x118 - 0xA0)
// BlueprintGeneratedClass BP_TargetInfoComponent.BP_TargetInfoComponent_C
class UBP_TargetInfoComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class ABP_CreatureBase_C*, int32>       VisibleCreatures;                                  // 0xA8(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UNWXAbilitySystemComponent*            CachedAbilitySystem;                               // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         NameplatesDisabled;                                // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_CreatureBase_C*                    Previous_Raycast_Creature;                         // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                               BuildingObject;                                    // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_TargetInfoComponent_C* GetDefaultObj();

	void DisplayPlayerNameplates(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_Character_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Character_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateCreatureNameplatesTracker(class AActor* RaycastObject, class ABP_CreatureBase_C* PreviousCreature, class ABP_CreatureBase_C** Prev_Creature, bool Looked_At_Same_Creature_After_Looking_Away, class ABP_CreatureBase_C* Current, class ABP_CreatureBase_C* Previous, int32 Temp_int_Variable, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, int32 CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_3, bool CallFunc_Map_Contains_ReturnValue_1, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetRaycastEndpoints(double TraceRange, struct FVector* Start, struct FVector* End, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void GetRaycastCreature(TArray<class AActor*>& Temp_object_Variable, bool Temp_bool_Variable, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlacing_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetRaycastEndpoints_Start, const struct FVector& CallFunc_GetRaycastEndpoints_End, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABP_CreatureBase_C* CallFunc_UpdateCreatureNameplatesTracker_Prev_Creature);
	void DisplayNameplates();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void EnableNameplates();
	void ExecuteUbergraph_BP_TargetInfoComponent(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TSubclassOf<class IInterface> Temp_class_Variable, class AActor* CallFunc_GetOwner_ReturnValue, float K2Node_Event_DeltaSeconds, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TArray<class ABP_Character_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable, class ABP_Character_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


