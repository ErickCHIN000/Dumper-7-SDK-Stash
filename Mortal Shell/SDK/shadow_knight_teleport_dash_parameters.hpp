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

// 0x48 (0x48 - 0x0)
// Function shadow_knight_teleport_dash.shadow_knight_teleport_dash_C.UserConstructionScript
struct AShadow_knight_teleport_dash_C_UserConstructionScript_Params
{
public:
	struct FInterpControlPoint                   K2Node_MakeStruct_InterpControlPoint;              // 0x0(0x1C)(NoDestructor)
	struct FInterpControlPoint                   K2Node_MakeStruct_InterpControlPoint_1;            // 0x1C(0x1C)(NoDestructor)
	TArray<struct FInterpControlPoint>           K2Node_MakeArray_Array;                            // 0x38(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function shadow_knight_teleport_dash.shadow_knight_teleport_dash_C.BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature
struct AShadow_knight_teleport_dash_C_BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature_Params
{
public:
	class UActorComponent*                       Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function shadow_knight_teleport_dash.shadow_knight_teleport_dash_C.BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature
struct AShadow_knight_teleport_dash_C_BndEvt__shadow_knight_dash_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature_Params
{
public:
	class UParticleSystemComponent*              PSystem;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function shadow_knight_teleport_dash.shadow_knight_teleport_dash_C.ExecuteUbergraph_shadow_knight_teleport_dash
struct AShadow_knight_teleport_dash_C_ExecuteUbergraph_shadow_knight_teleport_dash_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_155[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UActorComponent*                       K2Node_ComponentBoundEvent_Component;              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              K2Node_ComponentBoundEvent_PSystem;                // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


