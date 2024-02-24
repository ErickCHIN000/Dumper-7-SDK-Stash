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

// 0xD0 (0xD0 - 0x0)
// Function BP_Marker_Airdrop.BP_Marker_Airdrop_C.ExecuteUbergraph_BP_Marker_Airdrop
struct ABP_Marker_Airdrop_C_ExecuteUbergraph_BP_Marker_Airdrop_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A86[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<enum class E_MarkerType>              K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
	class UBPC_MinimapSystem_C*                  CallFunc_Get_Minimap_Component_ReturnValue;        // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_MarkerData                         K2Node_MakeStruct_S_MarkerData;                    // 0x28(0x89)(HasGetValueTypeHash)
	uint8                                        Pad_1A9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_POIMarker_C*>                CallFunc_Add_POI_Marker_Markers;                   // 0xB8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_POIMarker_C*                        CallFunc_Array_Get_Item;                           // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


