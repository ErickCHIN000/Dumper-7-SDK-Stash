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

// 0x10 (0x10 - 0x0)
// Function BP_PlayerMarker.BP_PlayerMarker_C.ComponentsToSave
struct ABP_PlayerMarker_C_ComponentsToSave_Params
{
public:
	TArray<class UActorComponent*>               Components;                                        // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x138 (0x138 - 0x0)
// Function BP_PlayerMarker.BP_PlayerMarker_C.ExecuteUbergraph_BP_PlayerMarker
struct ABP_PlayerMarker_C_ExecuteUbergraph_BP_PlayerMarker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3267[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBPC_MinimapSystem_C*                  CallFunc_Get_Minimap_Component_ReturnValue;        // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBPC_MinimapSystem_C*                  CallFunc_Get_Minimap_Component_ReturnValue_1;      // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_PlayerMarker_C*>             CallFunc_Add_Saved_Player_Marker_Markers;          // 0x28(0x10)(ReferenceParm, ContainsInstancedReference)
	uint8                                        Pad_3279[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x40(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CompassMarker_C*                   CallFunc_FinishSpawningActor_ReturnValue;          // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue_1;               // 0xB0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CompassMarker_C*                   CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3290[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_PlayerMarker_C*>             CallFunc_Add_Player_Marker_Markers;                // 0x128(0x10)(ReferenceParm, ContainsInstancedReference)
};

}
}


