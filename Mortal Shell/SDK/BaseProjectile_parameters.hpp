#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x158 - 0x0)
// Function BaseProjectile.BaseProjectile_C.DualSense_Impact
struct ABaseProjectile_C_DualSense_Impact_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A5[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x94(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0xA0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0xAC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0xB8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0xF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0xFC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x110(0x30)(IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6D5[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ControllerAudio_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BaseProjectile.BaseProjectile_C.PlayVibrationAudioForDualSense
struct ABaseProjectile_C_PlayVibrationAudioForDualSense_Params
{
public:
	bool                                         Local_Debug;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_76E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetDebugDualSenseAudio_ReturnValue;       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPlatform                         CallFunc_GetPlatform_ReturnValue;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3B4 (0x3B4 - 0x0)
// Function BaseProjectile.BaseProjectile_C.DebugVibrationData
struct ABaseProjectile_C_DebugVibrationData_Params
{
public:
	struct FSoundAttenuationSettings             CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings; // 0x0(0x3A0)(None)
	bool                                         CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue; // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7C1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector_X;                            // 0x3A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x3AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function BaseProjectile.BaseProjectile_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
struct ABaseProjectile_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params
{
public:
	struct FHitResult                            ImpactResult;                                      // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x94 (0x94 - 0x0)
// Function BaseProjectile.BaseProjectile_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature
struct ABaseProjectile_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature_Params
{
public:
	struct FHitResult                            ImpactResult;                                      // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               ImpactVelocity;                                    // 0x88(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function BaseProjectile.BaseProjectile_C.ExecuteUbergraph_BaseProjectile
struct ABaseProjectile_C_ExecuteUbergraph_BaseProjectile_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_ComponentBoundEvent_ImpactResult;           // 0x4(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               K2Node_ComponentBoundEvent_ImpactVelocity;         // 0x8C(0xC)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_ComponentBoundEvent_ImpactResult_1;         // 0x98(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}
}


