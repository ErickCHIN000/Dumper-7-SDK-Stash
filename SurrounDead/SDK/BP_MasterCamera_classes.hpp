#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x330 - 0x311)
// BlueprintGeneratedClass BP_MasterCamera.BP_MasterCamera_C
class ABP_MasterCamera_C : public ABP_MasterTurret_C
{
public:
	uint8                                        Pad_99[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Rotate_Camera_Rotate_Alpha_1FCEDB2D4D69EF795AB31D9899FEACD6; // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Rotate_Camera__Direction_1FCEDB2D4D69EF795AB31D9899FEACD6; // 0x324(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Rotate_Camera;                                     // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterCamera_C* GetDefaultObj();

	void AI_Is_Dead_(bool* Dead);
	void AI_Can_Interact_(bool* Can_Interact);
	void Actor_Attack_Target(class AActor** Attack_Target);
	void UserConstructionScript(double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_3, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast_1, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast_1);
	void Rotate_Camera__FinishedFunc();
	void Rotate_Camera__UpdateFunc();
	void ReceiveBeginPlay();
	void Multicast_Turret_Idle_Stop();
	void Multicast_Turret_Idle_Start();
	void Turret_Idle_Stop();
	void Turret_Idle_Start();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void Turret_Destroyed_Effect();
	void ExecuteUbergraph_BP_MasterCamera(int32 EntryPoint, double CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast_1, double CallFunc_Server_Turret_Damaged_Damage_ImplicitCast);
};

}


