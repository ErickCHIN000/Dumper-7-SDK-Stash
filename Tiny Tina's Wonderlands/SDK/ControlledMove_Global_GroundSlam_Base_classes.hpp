#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x8C8 - 0x8A8)
// BlueprintGeneratedClass ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C
class UControlledMove_Global_GroundSlam_Base_C : public UOakControlledMove
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A8(0x8)(Transient, DuplicateTransient)
	class APlayerController*                     PlayerController;                                  // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StartLocation;                                     // 0x8B8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HighGroundSlamThreshold;                           // 0x8C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UControlledMove_Global_GroundSlam_Base_C* GetDefaultObj();

	void DoMelee();
	void RandomEncounterTransition(bool IsEncountering);
	void ReturnToOverworldTransition(bool IsReturning);
	void UseBanner();
	void Ow_camera_zoom();
	void Ow_camera_reset();
	void Ow_Player_RE_Stun();
	void MeleeStop();
	void GroundSlam_End(float Distance);
	void OnStart(float MoveDuration, class AActor* TargetActor);
	void OnStop(bool bInterrupted);
	void ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base(int32 EntryPoint, bool K2Node_Event_IsEncountering, bool K2Node_Event_IsReturning, float K2Node_Event_Distance, float K2Node_Event_MoveDuration, class AActor* K2Node_Event_TargetActor, bool K2Node_Event_bInterrupted, TScriptInterface<class IBPInterface_PlayerInputActions_C> K2Node_DynamicCast_AsBPInterface_Player_Input_Actions, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z);
};

}


