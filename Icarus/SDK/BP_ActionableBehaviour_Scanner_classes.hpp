#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA2 (0x3AC - 0x30A)
// BlueprintGeneratedClass BP_ActionableBehaviour_Scanner.BP_ActionableBehaviour_Scanner_C
class UBP_ActionableBehaviour_Scanner_C : public UBP_ActionableBehaviour_Base_C
{
public:
	uint8                                        Pad_1F4E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusPlayerCharacterSurvival*        BehaviourOwner;                                    // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusItem*                           IcarusItem;                                        // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScanningIntensity;                                 // 0x328(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        NearbyActors;                                      // 0x330(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	float                                        MaxScanningRange;                                  // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDistance;                                       // 0x344(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           ProximityItensityCurve;                            // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDirection;                                      // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F6E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           DirectionIntensityCurve;                           // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          NearbyActorsHandle;                                // 0x360(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        NearbyActorsFrequency;                             // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F77[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ClassToScan;                                       // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDirectionAngle;                                 // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowClosestAngle;                                  // 0x37C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F7E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           ClosestAngleOffsetCurve;                           // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClosestAngle;                                      // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxExtraNoiseMultiplier;                           // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClosestAngleNoise;                                 // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxAngleOffset;                                    // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             AngleOffsetDelayFrequency;                         // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           BeepingCurve;                                      // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BeepingIntensity;                                  // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Scanner_C* GetDefaultObj();

	TArray<class AActor*> ExtraNearbyFilter(TArray<class AActor*>& InNearbyActors);
	void LocalOrServer(bool* Local, bool* Server, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue);
	void UpdateScanningIntensity(class AActor* ClosestActor, class AActor* DirectionActor, float MinimumDotProduct, float DotProduct, float DirectionIntensity, float ProximityIntensity, int32 Temp_int_Array_Index_Variable, float CallFunc_GetFloatValue_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_GetHorizontalDistanceTo_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_1, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_FMax_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue_1, float CallFunc_GetHorizontalDistanceTo_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
	void UpdateNearbyActors(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsValidClass_ReturnValue, TArray<class AActor*>& CallFunc_FilterActorsByBiome_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, TArray<class AActor*>& CallFunc_ExtraNearbyFilter_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void ExecuteUbergraph_BP_ActionableBehaviour_Scanner(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


