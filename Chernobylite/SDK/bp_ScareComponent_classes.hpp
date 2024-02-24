#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D (0xCD - 0xB0)
// BlueprintGeneratedClass bp_ScareComponent.bp_ScareComponent_C
class Ubp_ScareComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                         InternalIsActive;                                  // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldTrace;                                       // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E9A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDistance;                                   // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldCheckIfInView;                               // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         StartActive;                                       // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EA3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScareFloor;                                        // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FocusSpaceDecimal;                                 // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckIfRecentlyRendered;                           // 0xCC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Ubp_ScareComponent_C* GetDefaultObj();

	void CheckIfActorIsOnScreen(class AActor* ActorToCheck, float FocusDecimal, bool* IsOnScreen, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_GetViewportSize_SizeX, int32 CallFunc_GetViewportSize_SizeY, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void ApplyScareFactor();
	void ReceiveBeginPlay();
	void TurnOff();
	void TurnOn();
	void ExecuteUbergraph_bp_ScareComponent(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_WasRecentlyRendered_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Event_DeltaSeconds, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_CheckIfActorIsOnScreen_IsOnScreen, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, class AActor* CallFunc_GetOwner_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
};

}


