#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2388 (0x26D0 - 0x348)
// AnimBlueprintGeneratedClass AICharacter_AnimBP.AICharacter_AnimBP_C
class UAICharacter_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_2CDD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x8D)(HasGetValueTypeHash)
	uint8                                        Pad_2CE2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x3E8(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x3F0(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x3F8(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x418(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x440(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x468(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x490(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x4B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x4E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x508(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x530(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x558(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x580(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x5A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x5D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x5F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x620(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x648(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x670(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_28;                  // 0x6B8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x700(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x748(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_27;                  // 0x790(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_26;                  // 0x7D8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x820(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x868(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_25;                  // 0x8B0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x8F8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x918(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_24;                  // 0x960(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x9A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x9F0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_23;                  // 0xA38(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_22;                  // 0xA80(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0xAC8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0xB10(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_21;                  // 0xB58(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0xBA0(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_9;                  // 0xBC0(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_20;                  // 0xC30(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8;                  // 0xC78(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_19;                  // 0xCE8(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7;                  // 0xD30(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_18;                  // 0xDA0(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0xDE8(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0xE58(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_17;                  // 0xEC8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0xF10(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_16;                  // 0xF30(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0xF78(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0xFC0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x1008(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_15;                  // 0x1050(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_14;                  // 0x1098(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x10E0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x1128(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_13;                  // 0x1170(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x11B8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x11D8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_12;                  // 0x1220(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x1268(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x12B0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_11;                  // 0x12F8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10;                  // 0x1340(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x1388(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x13D0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x1418(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x1460(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x1480(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x14C8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x1510(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1558(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x15A0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x15E8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1630(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1678(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x16C0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x1708(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x1728(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x1798(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x17E0(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x1850(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x1898(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x1908(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x1950(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x19C0(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x1A30(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1A78(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1A98(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4;                              // 0x1B60(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x1BA8(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x1BF0(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x1C70(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x1C98(0xF0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x1D88(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x1E08(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x1E88(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x1EB0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x1ED8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x1F00(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x1F28(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x1F70(0xF0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x2060(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x20E0(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x2128(0xF0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x2218(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x2298(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x22C0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x22E8(0x28)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x2310(0x118)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x2428(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x2470(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2498(0x48)(None)
	double                                       Speed;                                             // 0x24E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Direction;                                         // 0x24E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Crouching;                                      // 0x24F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Falling;                                        // 0x24F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E6D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterAICharacter_C*               AI_Character;                                      // 0x24F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_SmartAIComponent_C*                AI_Component;                                      // 0x2500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class E_AIBehaviour                     One_Behaviour;                                     // 0x2508(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Combat_Stance;                                     // 0x2509(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Holdable;                                          // 0x250A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Anims_1;                                           // 0x250B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_MovementSpeed                   Current_Behaviour;                                 // 0x250C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIAnims                            Smart_AI_Anims_1;                                  // 0x2510(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_AIAnims                            Smart_AI_Anims_2;                                  // 0x2560(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class E_AIBehaviour                     Two_Behaviour;                                     // 0x25B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_AIWeapon_Master_C*                 Holdable_Actor;                                    // 0x25B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FS_AIAnims                            Holdable_Anims_2;                                  // 0x25C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_AIAnims                            Holdable_Anims_1;                                  // 0x2610(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Moving;                                            // 0x2660(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Jump_Land_End;                                     // 0x2661(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Jump_Start_End;                                    // 0x2662(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Aim_Offset;                                    // 0x2663(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Aim_Yaw;                                           // 0x2668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_AIAnims                            Combat_Stance_Anims;                               // 0x2670(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Allow_Combat_Stance;                               // 0x26C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EAB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAimOffsetBlendSpace1D*                Aim_Offset;                                        // 0x26C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAICharacter_AnimBP_C* GetDefaultObj();

	void AI_Is_Dead_(bool* Dead);
	void AI_Can_Interact_(bool* Can_Interact);
	void Actor_Attack_Target(class AActor** Attack_Target);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void Return_Combat_Stance_Anims(bool* Use_Combat_Stance, struct FS_AIAnims* AI_Animation, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3);
	void Return_Behaviour_Anims(const struct FS_AllAIAnims& All_Anims, enum class E_AIBehaviour Behaviour, struct FS_AIAnims* Anims, bool K2Node_SwitchEnum_CmpSuccess);
	void Return_Current_Behaviour(enum class E_AIBehaviour* New_Behaviour, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_30FADA244979E1A4DEC151ACA5A1529D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_1800AA594D0A851E6968AD905AA5CB7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_E7F5323B4BF7CB5F21896D91D6D0F8AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AICharacter_AnimBP_AnimGraphNode_TransitionResult_B9E29D514B97005E25051F8C9049A590();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_IdleStart();
	void AnimNotify_JogStart();
	void AnimNotify_ActiveMeleeDetect();
	void AnimNotify_DeactiveMeleeDetect();
	void BlueprintInitializeAnimation();
	void AnimNotify_Equip();
	void AnimNotify_Unequip();
	void AnimNotify_Block_Attack();
	void AnimNotify_Unblock_Attack();
	void AnimNotify_AI_Reload();
	void Reinitialize_Animation();
	void AnimNotify_Begin_Jump_End();
	void AnimNotify_Jump_End();
	void AI_Animation_Switch(enum class E_AIBehaviour Behaviour);
	void AI_Block(enum class E_BlockType Block_Type, class AActor* Block_Attacker);
	void AI_Camera_Activate(bool Activate);
	void AI_End_Alert();
	void AI_Alert(class AActor* Alert_Actor);
	void Turret_End_Reload();
	void Turret_Start_Reload();
	void Turret_Idle_Stop();
	void Turret_Idle_Start();
	void Turret_Destroyed_Effect();
	void Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker);
	void Actor_Aim_Focus(class AActor* Instigator);
	void AI_Dead();
	void ExecuteUbergraph_AICharacter_AnimBP(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_17, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_18, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_IsValid_ReturnValue_20, class ABP_MasterAICharacter_C* K2Node_DynamicCast_AsBP_Master_AICharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, float CallFunc_CalculateDirection_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_21, bool CallFunc_IsValid_ReturnValue_22, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_5, bool Temp_bool_Variable, bool CallFunc_IsServer_ReturnValue_6, enum class E_AIBehaviour CallFunc_Return_Current_Behaviour_New_Behaviour, enum class E_AIBehaviour CallFunc_Return_Current_Behaviour_New_Behaviour_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims, bool CallFunc_BooleanOR_ReturnValue, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims_1, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims_2, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims_3, enum class E_AIBehaviour CallFunc_Return_Current_Behaviour_New_Behaviour_2, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims_4, bool CallFunc_IsValid_ReturnValue_23, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims_5, bool CallFunc_IsValid_ReturnValue_24, bool CallFunc_IsServer_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_25, bool CallFunc_IsValid_ReturnValue_26, enum class E_AIBehaviour K2Node_Event_Behaviour, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_IsCrouching_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class E_BlockType K2Node_Event_Block_Type, class AActor* K2Node_Event_Block_Attacker, bool K2Node_Event_Activate, class AActor* K2Node_Event_Alert_Actor, class AActor* K2Node_Event_Attacked, class AActor* K2Node_Event_Attacker, class AActor* K2Node_Event_Instigator, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Return_Combat_Stance_Anims_Use_Combat_Stance, const struct FS_AIAnims& CallFunc_Return_Combat_Stance_Anims_AI_Animation, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, enum class E_AIBehaviour K2Node_Select_Default, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims_6, const struct FS_AIAnims& CallFunc_Return_Behaviour_Anims_Anims_7, double K2Node_VariableSet_Direction_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_3);
};

}


