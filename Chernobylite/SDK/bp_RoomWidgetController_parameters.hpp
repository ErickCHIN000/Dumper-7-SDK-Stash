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
// Function bp_RoomWidgetController.bp_RoomWidgetController_C.OnInteractionPressedComponent
struct Abp_RoomWidgetController_C_OnInteractionPressedComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       ComponentHit;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_RoomWidgetController.bp_RoomWidgetController_C.ExecuteUbergraph_bp_RoomWidgetController
struct Abp_RoomWidgetController_C_ExecuteUbergraph_bp_RoomWidgetController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AMainPawnCpp*                          K2Node_Event_PlayerPawn;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       K2Node_Event_ComponentHit;                         // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


