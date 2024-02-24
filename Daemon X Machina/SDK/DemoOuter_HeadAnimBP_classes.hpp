#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x818 (0xD18 - 0x500)
// AnimBlueprintGeneratedClass DemoOuter_HeadAnimBP.DemoOuter_HeadAnimBP_C
class UDemoOuter_HeadAnimBP_C : public UTTLOuterHeadAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x500(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_7C403FAE47FA5E6E04D724820F0A0BE7; // 0x508(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2AF334804DEA95D6BB5B1CA5872DB608; // 0x550(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_DC0EEC454C1069E460DAFD9ADDFB9A7F; // 0x600(0x48)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_91E8B31C4977AAA9B704098624EDA93D; // 0x648(0xE0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_49B5BDA64D34BCEF19D992A016B0A4FF; // 0x728(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_DC8EE4344EEF19F4522C2DBE76EF413A; // 0x808(0x50)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_B6A195C34F9205F12BD05083E590ACB2; // 0x858(0x70)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_25C385C44462D71DC13D5A9C27380905; // 0x8C8(0x50)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_CCD5A3B9463DFD89BCDDB5B82480F3F0; // 0x918(0x70)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_74DA53F34AC2A416F38DFC80028BA2B6; // 0x988(0x50)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_98F32FA44B20E92CCEB1309748941997; // 0x9D8(0xE0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2305329E48948AAE448A3E981FC82764; // 0xAB8(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_BCC6AF5141BE0354DB9923AB0822DDDF; // 0xB98(0x50)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_5C9292D94289FAE7CC1405AFF322126D; // 0xBE8(0x70)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_E84EB62F40D15E6127EC82B15A8EC45A; // 0xC58(0x50)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_C39A185B47B23511A0528DB24C75BCE0; // 0xCA8(0x70)(None)

	static class UClass* StaticClass();
	static class UDemoOuter_HeadAnimBP_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_DemoOuter_HeadAnimBP_AnimGraphNode_LayeredBoneBlend_98F32FA44B20E92CCEB1309748941997();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DemoOuter_HeadAnimBP_AnimGraphNode_SequencePlayer_2AF334804DEA95D6BB5B1CA5872DB608();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_DemoOuter_HeadAnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_UpdateParaameters_ReturnValue);
};

}


