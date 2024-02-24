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

// 0x1 (0x1 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.ShouldShowInteractHintOnMobile
struct ABP_GoatTower_PersistentEffectsToggler_C_ShouldShowInteractHintOnMobile_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.CanBeInteractedWith
struct ABP_GoatTower_PersistentEffectsToggler_C_CanBeInteractedWith_Params
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_872[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetTimeSince_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.EndHold
struct ABP_GoatTower_PersistentEffectsToggler_C_EndHold_Params
{
public:
	float                                        HeldFor;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetAutoInteractPastDuration
struct ABP_GoatTower_PersistentEffectsToggler_C_GetAutoInteractPastDuration_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetInteractNotificationID
struct ABP_GoatTower_PersistentEffectsToggler_C_GetInteractNotificationID_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetInteractNotificationTag
struct ABP_GoatTower_PersistentEffectsToggler_C_GetInteractNotificationTag_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetInteractTextBody
struct ABP_GoatTower_PersistentEffectsToggler_C_GetInteractTextBody_Params
{
public:
	class AGGPlayerController*                   InteractingPlayerController;                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm)
};

// 0xD8 (0xD8 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetInteractTextTitle
struct ABP_GoatTower_PersistentEffectsToggler_C_GetInteractTextTitle_Params
{
public:
	class AGGPlayerController*                   InteractingPlayerController;                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm)
	enum class E_Events_PersistentEffects        Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8DD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x28(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x40(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Events_PersistentEffects        Temp_byte_Variable_1;                              // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E6[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_2;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x78(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x90(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0xA8(0x18)(None)
	class FText                                  K2Node_Select_Default_2;                           // 0xC0(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetNPCInteractionChance
struct ABP_GoatTower_PersistentEffectsToggler_C_GetNPCInteractionChance_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetNPCRecentInteractDelay
struct ABP_GoatTower_PersistentEffectsToggler_C_GetNPCRecentInteractDelay_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetRequiredHoldDuration
struct ABP_GoatTower_PersistentEffectsToggler_C_GetRequiredHoldDuration_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.Interact
struct ABP_GoatTower_PersistentEffectsToggler_C_Interact_Params
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeldFor;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.InteractClient
struct ABP_GoatTower_PersistentEffectsToggler_C_InteractClient_Params
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeldFor;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.StartHold
struct ABP_GoatTower_PersistentEffectsToggler_C_StartHold_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.OnRep_bPersistentEffectActive
struct ABP_GoatTower_PersistentEffectsToggler_C_OnRep_bPersistentEffectActive_Params
{
public:
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9BD[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             CallFunc_GetLoadedAsset_ReturnValue;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLoaded_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9C4[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             CallFunc_GetLoadedAsset_ReturnValue_1;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLoaded_ReturnValue_1;                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9CC[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAtLocation_ReturnValue_1;       // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B1 (0x1B1 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.UserConstructionScript
struct ABP_GoatTower_PersistentEffectsToggler_C_UserConstructionScript_Params
{
public:
	enum class E_Events_PersistentEffects        Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Temp_struct_Variable;                              // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable_1;                            // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Events_PersistentEffects        Temp_byte_Variable_1;                              // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A30[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Temp_struct_Variable_2;                            // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Temp_struct_Variable_3;                            // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Events_PersistentEffects        Temp_byte_Variable_2;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A37[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Temp_struct_Variable_4;                            // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable_5;                            // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Events_PersistentEffects        Temp_byte_Variable_3;                              // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A40[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Temp_object_Variable;                              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           Temp_object_Variable_1;                            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default;                             // 0x70(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x7C(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              K2Node_Select_Default_1;                           // 0x104(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x110(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               K2Node_Select_Default_2;                           // 0x198(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A54[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           K2Node_Select_Default_3;                           // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.BndEvt__BP_GoatTower_PersistentEffectsToggler_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature
struct ABP_GoatTower_PersistentEffectsToggler_C_BndEvt__BP_GoatTower_PersistentEffectsToggler_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature_Params
{
public:
	class UGGDynamicAssetHoldingComponent*       DynAssetComp;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.BndEvt__BP_GoatTower_PersistentEffectsToggler_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnGainedSignificance__DelegateSignature
struct ABP_GoatTower_PersistentEffectsToggler_C_BndEvt__BP_GoatTower_PersistentEffectsToggler_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnGainedSignificance__DelegateSignature_Params
{
public:
	class UGGDynamicAssetHoldingComponent*       DynAssetComp;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1BA (0x1BA - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.ExecuteUbergraph_BP_GoatTower_PersistentEffectsToggler
struct ABP_GoatTower_PersistentEffectsToggler_C_ExecuteUbergraph_BP_GoatTower_PersistentEffectsToggler_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B0A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGDynamicAssetHoldingComponent*       K2Node_ComponentBoundEvent_DynAssetComp_1;         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B14[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_RLerp_ReturnValue;                        // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x20(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B1D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGDynamicAssetHoldingComponent*       K2Node_ComponentBoundEvent_DynAssetComp;           // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0xB8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B28[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0xC8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class ABP_Event_TheButterflyEffect_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x150(0x10)(ReferenceParm)
	TArray<class ABP_Event_LazyWorkers_C*>       CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x160(0x10)(ReferenceParm)
	class ABP_Event_TheButterflyEffect_C*        CallFunc_Array_Get_Item;                           // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Event_LazyWorkers_C*               CallFunc_Array_Get_Item_1;                         // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Event_TheButterflyEffect_C*> CallFunc_GetAllActorsOfClass_OutActors_2;          // 0x180(0x10)(ReferenceParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B3F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Event_TheButterflyEffect_C*        CallFunc_Array_Get_Item_2;                         // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Event_LazyWorkers_C*>       CallFunc_GetAllActorsOfClass_OutActors_3;          // 0x1A0(0x10)(ReferenceParm)
	class ABP_Event_LazyWorkers_C*               CallFunc_Array_Get_Item_3;                         // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.OnPersistentEffectToggled__DelegateSignature
struct ABP_GoatTower_PersistentEffectsToggler_C_OnPersistentEffectToggled__DelegateSignature_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


