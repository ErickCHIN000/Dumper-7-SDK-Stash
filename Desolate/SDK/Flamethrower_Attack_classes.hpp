#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4F (0x160 - 0x111)
// BlueprintGeneratedClass Flamethrower_Attack.Flamethrower_Attack_C
class UFlamethrower_Attack_C : public UBTTask_BaseGNPCAttack_C
{
public:
	uint8                                        Pad_64D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x118(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        AcceptanceMinRadius;                               // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AcceptanceMaxRadius;                               // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFlameOnCooldown;                                  // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_656[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FlameCooldown;                                     // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlameMaxRadius;                                    // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_FlameCooldown;                                  // 0x138(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        MeleeAttackRadius;                                 // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MeleeAttackCooldown;                               // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMeleeOnCooldown;                                  // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_660[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_OnMeleeAttackCooldown;                          // 0x150(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ANewLight_Flamethrower_Character_C*    FlamethowerCharacter;                              // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFlamethrower_Attack_C* GetDefaultObj();

	void OnMeleeAttackCooldown();
	void StartMeleeAttackCooldown(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnFlameCooldown();
	void StartFlameCooldown(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_Flamethrower_Attack(int32 EntryPoint, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_CanMove_Result, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, bool CallFunc_Montage_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, class AActor* K2Node_Event_OwnerActor, bool CallFunc_BooleanAND_ReturnValue, class ANewLight_Flamethrower_Character_C* K2Node_DynamicCast_AsNew_Light_Flamethrower_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_CanJumpBackward_Result, bool CallFunc_StartBackwardJump_Result, bool CallFunc_Not_PreBool_ReturnValue_4);
};

}


