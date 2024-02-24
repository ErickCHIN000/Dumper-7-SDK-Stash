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
// Function BP_QuestMarker.BP_QuestMarker_C.ExecuteUbergraph_BP_QuestMarker
struct ABP_QuestMarker_C_ExecuteUbergraph_BP_QuestMarker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2961[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<enum class E_MarkerType>              K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
	class UBPC_MinimapSystem_C*                  CallFunc_Get_Minimap_Component_ReturnValue;        // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2969[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x30(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CompassMarker_C*                   CallFunc_FinishSpawningActor_ReturnValue;          // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_MarkerData                         K2Node_MakeStruct_S_MarkerData;                    // 0xA0(0x89)(HasGetValueTypeHash)
	uint8                                        Pad_2974[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_QuestMarker_C*>              CallFunc_Add_Quest_Marker_Markers;                 // 0x138(0x10)(ReferenceParm, ContainsInstancedReference)
	class UBPC_MinimapSystem_C*                  CallFunc_Get_Minimap_Component_ReturnValue_1;      // 0x148(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_QuestMarker_C*                      CallFunc_Array_Get_Item;                           // 0x150(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


