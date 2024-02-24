#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3079 (0x3331 - 0x2B8)
// AnimBlueprintGeneratedClass abp_heroCamera_00.abp_heroCamera_00_C
class UAbp_heroCamera_00_C : public UAnimInstance
{
public:
	uint8                                        Pad_1819[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x2F8(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x400(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x420(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_6;                              // 0x440(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x488(0x158)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_8;                  // 0x5E0(0xC0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x6A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x6C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x6F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x718(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x740(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x768(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x790(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x7B8(0x28)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_2;                 // 0x7E0(0x50)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x830(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x860(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x8E0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x910(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x990(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x9C0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0xA40(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_4;                      // 0xA70(0xB0)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_4;            // 0xB20(0xD0)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_3;            // 0xBF0(0xD0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0xCC0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0xCE8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0xD10(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0xD38(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0xD60(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0xDE0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0xE10(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_7;                  // 0xE90(0xC0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0xF50(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0xFF0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x1070(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x10F0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x1120(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x11A0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x11D0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_5;                              // 0x1280(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6;                  // 0x12C8(0xC0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x1388(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x14E0(0x28)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_2;            // 0x1508(0xD0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x15D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x1600(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x1628(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x1650(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x1678(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x16F8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x1728(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x17A8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x17D8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x1858(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1888(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x1908(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x1938(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0x19E8(0x50)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x1A38(0x50)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x1A88(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x1BE0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x1C08(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x1D60(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x1D88(0x28)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_1;            // 0x1DB0(0xD0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x1E80(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x1F68(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x1F98(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4;                              // 0x2048(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x2090(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x20B8(0x48)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x2100(0xD0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x21D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x21F8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x2220(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x22A0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x22D0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x2350(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x2380(0xB0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x2430(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x2458(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x2560(0x158)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x26B8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x2700(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x2728(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x2750(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x27F0(0x158)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_5;                  // 0x2948(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x2A08(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x2A30(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2A78(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0x2AC0(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x2B80(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x2BA8(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x2C68(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x2C90(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x2D50(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x2D78(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x2E38(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x2E60(0xC0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x2F20(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x3078(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x30A0(0x28)(None)
	float                                        CameraBendDirection;                               // 0x30C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraBendScale;                                   // 0x30CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReactionScale;                                     // 0x30D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x30D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MappedMaxSpeed;                                    // 0x30D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraIntensity;                                   // 0x30DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraBendScaleSmooth;                             // 0x30E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraRotateInPlaceBendScale;                      // 0x30E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraRotateInPlaceBendDirection;                  // 0x30E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraRotateInPlaceBendScaleSmooth;                // 0x30EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         Owner;                                             // 0x30F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFalling;                                        // 0x30F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHasRecentlyJumped;                                // 0x30F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsAiming;                                         // 0x30FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsGrounded;                                       // 0x30FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsSprinting;                                      // 0x30FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsReloading;                                      // 0x30FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsReloadingFinished;                              // 0x30FE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsClimb;                                          // 0x30FF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsReloadDefaultCamDisabled;                       // 0x3100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_196D[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveItemAnimDatabase               AnimDatabase;                                      // 0x3110(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                              OwnerControlRotation;                              // 0x3300(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              PreviousFrameControlRotation;                      // 0x330C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              RotationDelta;                                     // 0x3318(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              DashLean;                                          // 0x3324(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHeadBobbing;                                      // 0x3330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAbp_heroCamera_00_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_TransitionResult_133C421C4DDF861837205E8DD3A4CDB5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_TransitionResult_82D9E03C4670225A476B738E722B4BE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_TransitionResult_EF0FF2EE41646A60AE4BAE965978F67D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_LayeredBoneBlend_35284AD54C2038BF9100B3993E893A30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_LayeredBoneBlend_C0B2B8EE4A60EDA774A274827326C7A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_LayeredBoneBlend_ECCAA916474A41E571CFF586A6A24E44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_LayeredBoneBlend_FEEB341F4CAD99A924952E8B85CDBF74();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_LayeredBoneBlend_FEF9C9B24D5B979E7767498D56FBF031();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_LayeredBoneBlend_CCD8661D4E7E89FCCBC337A631C7C6F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_ModifyBone_A17EB3434AA78C4C051DDB8B96905DAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_ApplyMeshSpaceAdditive_572832F74E660E8EC9867E88144F5A6E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_LayeredBoneBlend_6D63235740A792AE5002699E6D875438();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_ApplyMeshSpaceAdditive_1769E63A44F0DF35DD962782353F9363();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_TransitionResult_9FD0C3434ED7315908CA50BEEC0A6296();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_TransitionResult_CB0981E24FA85A2EB5D2FBA3F76671EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_TransitionResult_8E8AFAA846D464EB34B0039F88B8C6A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_TransitionResult_08A2336547C2054725607683E13CF5AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_TransitionResult_04C8C92A42777D3E4059FF882406AD9F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_BlendListByBool_9C8274A44D64E142FF358CB387D2C9BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_TransitionResult_431C81E94F4AC986AB8349BDE22CCE7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_TransitionResult_751840CF4ED8D58540941C872453B62D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_TransitionResult_1A4B49ED44CACD4C8F68DF953D6E21A0();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_TransitionResult_DC596D37428DC97F238DD9B02E40F3D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_heroCamera_00_AnimGraphNode_TransitionResult_574E886145A83026CB6DF79545076773();
	void ExecuteUbergraph_abp_heroCamera_00(int32 EntryPoint, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetIsHeadBobbingEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_6, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue, float Temp_float_Variable, bool CallFunc_BooleanAND_ReturnValue_4, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_Less_FloatFloat_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float Temp_float_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable_1, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue_4, float CallFunc_SelectFloat_ReturnValue_5, float K2Node_Event_DeltaTimeX, float CallFunc_SelectFloat_ReturnValue_6, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_3, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_5, float CallFunc_VSize_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_8, float CallFunc_K2_GetModifiedMaxSpeed_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_9, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_6, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_4, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_3, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_7, float CallFunc_SelectFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue_8, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_FMax_ReturnValue_1, float K2Node_Select_Default_1, float CallFunc_FInterpTo_ReturnValue_1, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess_1);
};

}


