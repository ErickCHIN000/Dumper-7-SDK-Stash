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

// 0x31 (0x31 - 0x0)
// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.Are All Goats On Trigger
struct ABP_ThroneRoom_Scanner_C_Are_All_Goats_On_Trigger_Params
{
public:
	bool                                         All_Goats_On_Trigger;                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B2C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AGGPlayerController*>           CallFunc_GetAllGGPlayerControllers_ReturnValue;    // 0x8(0x10)(ReferenceParm)
	TArray<class AActor*>                        CallFunc_GetOverlappingActors_OverlappingActors;   // 0x18(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.OnRep_GoatIsStandingOnPlate
struct ABP_ThroneRoom_Scanner_C_OnRep_GoatIsStandingOnPlate_Params
{
public:
	bool                                         CallFunc_GetIsLoaded_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B78[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     CallFunc_GetLoadedAsset_ReturnValue;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLoaded_ReturnValue_1;                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B7E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     CallFunc_GetLoadedAsset_ReturnValue_1;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.BndEvt__BP_ThroneRoom_Scanner_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ThroneRoom_Scanner_C_BndEvt__BP_ThroneRoom_Scanner_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BF5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x1C (0x1C - 0x0)
// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.BndEvt__BP_ThroneRoom_Scanner_Capsule_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_ThroneRoom_Scanner_C_BndEvt__BP_ThroneRoom_Scanner_Capsule_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.BndEvt__BP_ThroneRoom_Scanner_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnDynamicLoadingFinished__DelegateSignature
struct ABP_ThroneRoom_Scanner_C_BndEvt__BP_ThroneRoom_Scanner_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnDynamicLoadingFinished__DelegateSignature_Params
{
public:
	class UGGDynamicAssetHoldingComponent*       DynAssetComp;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.BndEvt__BP_ThroneRoom_Scanner_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_3_OnLostSignificance__DelegateSignature
struct ABP_ThroneRoom_Scanner_C_BndEvt__BP_ThroneRoom_Scanner_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_3_OnLostSignificance__DelegateSignature_Params
{
public:
	class UGGDynamicAssetHoldingComponent*       DynAssetComp;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.FadeIn
struct ABP_ThroneRoom_Scanner_C_FadeIn_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.FadeOut
struct ABP_ThroneRoom_Scanner_C_FadeOut_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.OnAllGoatsGathered
struct ABP_ThroneRoom_Scanner_C_OnAllGoatsGathered_Params
{
public:
	class FString                                GatherID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.PlayersOnScannerUpdated
struct ABP_ThroneRoom_Scanner_C_PlayersOnScannerUpdated_Params
{
public:
	bool                                         NewPlayer;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.GatherTheGoats
struct ABP_ThroneRoom_Scanner_C_GatherTheGoats_Params
{
public:
	class AGGPlayerState*                        InitialPlayer;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.OnCinematicStarted
struct ABP_ThroneRoom_Scanner_C_OnCinematicStarted_Params
{
public:
	class ULevelSequencePlayer*                  Sequence;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x730 (0x730 - 0x0)
// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.ExecuteUbergraph_BP_ThroneRoom_Scanner
struct ABP_ThroneRoom_Scanner_C_ExecuteUbergraph_BP_ThroneRoom_Scanner_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EE4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGlobalEventHandler*                 CallFunc_GetGlobalEventHandler_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EE9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGatherGoatsSubsystem*               CallFunc_GetWorldSubsystem_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue_2;               // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue_3;               // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue_4;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EF4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EFA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGatherGoatsSubsystem*               CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGGatherGoatsSubsystem*               CallFunc_GetWorldSubsystem_ReturnValue_2;          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor_1;           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp_1;            // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bFromSweep;             // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F05[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            K2Node_ComponentBoundEvent_SweepResult;            // 0x68(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class AActor*>                        CallFunc_GetOverlappingActors_OverlappingActors;   // 0xF0(0x10)(ReferenceParm)
	bool                                         CallFunc_IsCompGoat_IsGoat;                        // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompGoat_IsCapsuleComponent;            // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompGoat_IsMeshComponent;               // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F0A[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               CallFunc_IsCompGoat_ReturnValue;                   // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerState*                        CallFunc_GetGGPlayerState_ReturnValue;             // 0x118(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerState*                        CallFunc_GetPlayerStateFromActor_ReturnValue;      // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_DynamicCast_AsGGGoat;                       // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F17[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F1E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x140(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x170(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x17C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x188(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLoaded_ReturnValue;                  // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F2B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue;               // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F32[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x1A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsLoaded_ReturnValue_1;                // 0x1B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F48[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue_1;             // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F51[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x1D0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x200(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x20C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x218(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F5C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_1;     // 0x228(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue_2;             // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue_3;             // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue_4;             // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLoaded_ReturnValue_2;                // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F63[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x250(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor;             // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp;              // 0x260(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCompGoat_IsGoat_1;                      // 0x26C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompGoat_IsCapsuleComponent_1;          // 0x26D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompGoat_IsMeshComponent_1;             // 0x26E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F7C[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               CallFunc_IsCompGoat_ReturnValue_1;                 // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerState*                        CallFunc_GetGGPlayerState_ReturnValue_1;           // 0x278(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue_5;             // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLoaded_ReturnValue_3;                // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F82[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGDynamicAssetHoldingComponent*       K2Node_ComponentBoundEvent_DynAssetComp_1;         // 0x290(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGDynamicAssetHoldingComponent*       K2Node_ComponentBoundEvent_DynAssetComp;           // 0x298(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue_6;             // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue_7;             // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2B0(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x2C0(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x2D8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FCountNotificationParameters          K2Node_MakeStruct_CountNotificationParameters;     // 0x2E0(0x38)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x318(0x10)(ZeroConstructor, NoDestructor)
	class AGGLevelSequenceActor*                 CallFunc_CreateGGLevelSequencePlayer_OutActor;     // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequencePlayer*                  CallFunc_CreateGGLevelSequencePlayer_ReturnValue;  // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Duration_1;                     // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FA2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetPrimaryGGPlayerController_ReturnValue; // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Duration;                       // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FA9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetPrimaryGGPlayerController_ReturnValue_1; // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             CallFunc_GetLoadedAsset_ReturnValue_8;             // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             CallFunc_GetLoadedAsset_ReturnValue_9;             // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FB2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             CallFunc_GetLoadedAsset_ReturnValue_10;            // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsLoaded_ReturnValue_4;                // 0x379(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x37A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x37B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FB7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             CallFunc_GetLoadedAsset_ReturnValue_11;            // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLoaded_ReturnValue_5;                // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x389(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FCD[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x390(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Are_All_Goats_On_Trigger_All_Goats_On_Trigger; // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FD4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     CallFunc_GetLoadedAsset_ReturnValue_12;            // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsLoaded_ReturnValue_6;                // 0x3A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FDD[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             CallFunc_GetLoadedAsset_ReturnValue_13;            // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FE2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     CallFunc_GetLoadedAsset_ReturnValue_14;            // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FE7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x3CC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_FEA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x3E0(0x8)(NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_GatherID;                       // 0x3E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x3F8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HasGatherEventWithID_ReturnValue;         // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FF2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x410(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x428(0x10)(ZeroConstructor, NoDestructor)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x438(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FFB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x47C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_NewPlayer;                      // 0x48C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1000[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x499(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_100A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetOverlappingActors_OverlappingActors_1; // 0x4A0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1010[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGatherGoatsSubsystem*               CallFunc_GetWorldSubsystem_ReturnValue_3;          // 0x4B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x4C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1016[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGatherGoatParameters                 K2Node_MakeStruct_GatherGoatParameters;            // 0x4C8(0x20)(None)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x4E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_GetOverlappingActors_OverlappingActors_2; // 0x4F0(0x10)(ReferenceParm)
	class UGGGatherGoatsSubsystem*               CallFunc_GetWorldSubsystem_ReturnValue_4;          // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_1;                         // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerState*                        CallFunc_GetPlayerStateFromActor_ReturnValue_1;    // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x518(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x51C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1029[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerState*                        K2Node_CustomEvent_InitialPlayer;                  // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x528(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPlayerColorIndex_ReturnValue;          // 0x538(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_102D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x540(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x558(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x598(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x5D8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x618(0x10)(ReferenceParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x628(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x640(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x658(0x40)(HasGetValueTypeHash)
	class UGGGatherGoatsSubsystem*               CallFunc_GetWorldSubsystem_ReturnValue_5;          // 0x698(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x6A0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x6B0(0x18)(None)
	struct FInviteNotificationParameters         K2Node_MakeStruct_InviteNotificationParameters;    // 0x6C8(0x40)(None)
	bool                                         CallFunc_GatherAllGoats_ReturnValue;               // 0x708(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x709(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1053[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequencePlayer*                  K2Node_CustomEvent_Sequence;                       // 0x710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x718(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x719(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1058[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGlobalEventHandler*                 CallFunc_GetGlobalEventHandler_ReturnValue_1;      // 0x720(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGGlobalEventHandler*                 CallFunc_GetGlobalEventHandler_ReturnValue_2;      // 0x728(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.ThroneRoomOpenedDispatcher__DelegateSignature
struct ABP_ThroneRoom_Scanner_C_ThroneRoomOpenedDispatcher__DelegateSignature_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


