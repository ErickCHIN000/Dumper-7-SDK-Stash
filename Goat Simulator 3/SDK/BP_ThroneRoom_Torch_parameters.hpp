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

// 0x19 (0x19 - 0x0)
// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.ActivateTorchFX
struct ABP_ThroneRoom_Torch_C_ActivateTorchFX_Params
{
public:
	class USoundCue*                             CallFunc_GetLoadedAsset_ReturnValue;               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLoaded_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AF2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue_1;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.Set Torch Active
struct ABP_ThroneRoom_Torch_C_Set_Torch_Active_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.BndEvt__BP_ThroneRoom_Torch_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature
struct ABP_ThroneRoom_Torch_C_BndEvt__BP_ThroneRoom_Torch_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature_Params
{
public:
	class UGGDynamicAssetHoldingComponent*       DynAssetComp;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.BndEvt__BP_ThroneRoom_Torch_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature
struct ABP_ThroneRoom_Torch_C_BndEvt__BP_ThroneRoom_Torch_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature_Params
{
public:
	class UGGDynamicAssetHoldingComponent*       DynAssetComp;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.ExecuteUbergraph_BP_ThroneRoom_Torch
struct ABP_ThroneRoom_Torch_C_ExecuteUbergraph_BP_ThroneRoom_Torch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetLightColor_ReturnValue;                // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BAF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGDynamicAssetHoldingComponent*       K2Node_ComponentBoundEvent_DynAssetComp_1;         // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGDynamicAssetHoldingComponent*       K2Node_ComponentBoundEvent_DynAssetComp;           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


