#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x340 - 0x310)
// BlueprintGeneratedClass GC_Projectile_Flight_FaeReturningBlade.GC_Projectile_Flight_FaeReturningBlade_C
class AGC_Projectile_Flight_FaeReturningBlade_C : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     BladeTrails;                                       // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileBase_C*                  OwningProjectile;                                  // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           TiltCurve;                                         // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           SpinCurve;                                         // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_Projectile_Flight_FaeReturningBlade_C* GetDefaultObj();

	void UpdateVisuals(double ReturnProgress, double OutboundProgress, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_GetFloatValue_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_HasExceededMaxFlightDistance_ReturnValue, const struct FVector& CallFunc_GetMaxFlightLocation_MaxFlightLocation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, double CallFunc_Vector_Distance_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_2, double CallFunc_FClamp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_3, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_GetMaxFlightDistance_MaxFlightDistance, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FVector& CallFunc_GetStartingLocation_StartingLocation, double CallFunc_Vector_Distance_ReturnValue_2, double CallFunc_SafeDivide_ReturnValue_1, double CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_3);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GC_Projectile_Flight_FaeReturningBlade(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


