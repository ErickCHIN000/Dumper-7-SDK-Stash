#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x408 (0x440 - 0x38)
// BlueprintGeneratedClass AnimB_Base.AnimB_Base_C
class UAnimB_Base_C : public UAnimB
{
public:
	class UAnimSequence*                         AlertStandIdle;                                    // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           AlertStandLoco;                                    // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         AlertCrouchIdle;                                   // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         AlertCrouchLoco;                                   // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         AimedStandIdle;                                    // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           AimedStandLoco;                                    // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         ReadyStandIdle;                                    // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           ReadyStandLoco;                                    // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         ReadyCrouchIdle;                                   // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         ReadyCrouchLoco;                                   // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         AimedCrouchIdle;                                   // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         AimedCrouchLoco;                                   // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          AlertStandFire;                                    // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          AlertStandReload;                                  // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          AlertCrouchFire;                                   // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          AlertCrouchReload;                                 // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          AimedStandFire;                                    // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          AimedStandReload;                                  // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          AimedCrouchFire;                                   // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          AimedCrouchReload;                                 // 0xD0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ReadyStandFire;                                    // 0xD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ReadyStandReload;                                  // 0xE0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ReadyCrouchFire;                                   // 0xE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ReadyCrouchReload;                                 // 0xF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         RelaxedStandIdle;                                  // 0xF8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           RelaxedStandLoco;                                  // 0x100(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          RelaxedStandFire;                                  // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          RelaxedStandReload;                                // 0x110(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         RelaxedCrouchIdle;                                 // 0x118(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         RelaxedCrouchLoco;                                 // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          RelaxedCrouchFire;                                 // 0x128(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          RelaxedCrouchReload;                               // 0x130(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         InAirFallLoop;                                     // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         JumpStart;                                         // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         BlockingStandIdle;                                 // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         InAirAscending;                                    // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         InAirDescending;                                   // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Idle_Pose;                                         // 0x160(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class UAnimSequence*, double>           Idle_Anims;                                        // 0x168(0x50)(Edit, BlueprintVisible, BlueprintReadOnly)
	class UAnimSequence*                         Idle_Pose_C;                                       // 0x1B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class UAnimSequence*, double>           Idle_Anims_C;                                      // 0x1C0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly)
	class UBlendSpace1D*                         WalkRun_F;                                         // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         WalkRun_LF;                                        // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         WalkRun_LB;                                        // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         WalkRun_RF;                                        // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         WalkRun_RB;                                        // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         WalkRun_B;                                         // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         WalkRun_F_C;                                       // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         WalkRun_L_C;                                       // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         WalkRun_R_C;                                       // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         WalkRun_B_C;                                       // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         StandToCrouch;                                     // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         CrouchToStand_C;                                   // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAimOffsetBlendSpace*                  AimOffset;                                         // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAimOffsetBlendSpace*                  AimOffset_C;                                       // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         Start_F;                                           // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         Start_LF;                                          // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         Start_LB;                                          // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         Start_RF;                                          // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         Start_RB;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         Start_B;                                           // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         TurnOnSpot_90L;                                    // 0x2B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         TurnOnSpot_90R;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         TurnOnSpot_90L_C;                                  // 0x2C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         TurnOnSpot_90R_C;                                  // 0x2C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EFootStanceType, class UAnimSequence*> StanceTransitions;                                 // 0x2D0(0x50)(Edit, BlueprintVisible)
	TMap<enum class EFootStanceType, class UAnimSequence*> StanceTransitions_C;                               // 0x320(0x50)(Edit, BlueprintVisible)
	class UBlendSpace*                           Land_Forward;                                      // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           Land_Backward;                                     // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_F_LFC;                                        // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_F_LFP;                                        // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_F_RFC;                                        // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_F_RFP;                                        // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_LF_LFC;                                       // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_LF_LFP;                                       // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_LF_RFC;                                       // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_LF_RFP;                                       // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_RF_LFC;                                       // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_RF_LFP;                                       // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_RF_RFC;                                       // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_RF_RFP;                                       // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_B_LFC;                                        // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_B_LFP;                                        // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_B_RFC;                                        // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_B_RFP;                                        // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_LB_LFC;                                       // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_LB_LFP;                                       // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_LB_RFC;                                       // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_LB_RFP;                                       // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_RB_LFC;                                       // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_RB_LFP;                                       // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_RB_RFC;                                       // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Stop_RB_RFP;                                       // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimB_Base_C* GetDefaultObj();

};

}


