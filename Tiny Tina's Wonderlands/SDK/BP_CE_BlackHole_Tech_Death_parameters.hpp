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

// 0x160 (0x160 - 0x0)
// Function BP_CE_BlackHole_Tech_Death.BP_CE_BlackHole_Tech_Death_C.PlayBlackholeAudio
struct UBP_CE_BlackHole_Tech_Death_C_PlayBlackholeAudio_Params
{
public:
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x0(0x10)(ZeroConstructor, ReferenceParm)
	struct FSingularityInitializationInfo        K2Node_MakeStruct_SingularityInitializationInfo;   // 0x10(0xC8)(None)
	struct FVector                               CallFunc_GetActorBounds_Origin;                    // 0xD8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorBounds_BoxExtent;                 // 0xE4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxStaticMeshComponent*               CallFunc_GetComponentByClass_ReturnValue;          // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxElement_ReturnValue;                // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_214F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USingularityComponent*                 CallFunc_CreateSingularity_ReturnValue;            // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             CallFunc_GetComponentByClass_ReturnValue1;         // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                CallFunc_PostEventAtLocation_ReturnValue;          // 0x110(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2159[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWwisePlaybackInstance                CallFunc_PostAttachedEvent_ReturnValue;            // 0x130(0x18)(None)
	struct FWwisePlaybackInstance                CallFunc_PostAttachedEvent_ReturnValue1;           // 0x148(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function BP_CE_BlackHole_Tech_Death.BP_CE_BlackHole_Tech_Death_C.OnBegin
struct UBP_CE_BlackHole_Tech_Death_C_OnBegin_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_CE_BlackHole_Tech_Death.BP_CE_BlackHole_Tech_Death_C.ExecuteUbergraph_BP_CE_BlackHole_Tech_Death
struct UBP_CE_BlackHole_Tech_Death_C_ExecuteUbergraph_BP_CE_BlackHole_Tech_Death_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_Actor;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


