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
// Function BP_SE_Disgusting_Default.BP_SE_Disgusting_Default_C.BPInitializeStatus
struct ABP_SE_Disgusting_Default_C_BPInitializeStatus_Params
{
public:
	class UGGStatusEffectManager*                Manager;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EApplicationMethod                ApplicationMethod;                                 // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A8B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SpreadFrom;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMovedBetweenActors;                               // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_SE_Disgusting_Default.BP_SE_Disgusting_Default_C.ReceiveEndPlay
struct ABP_SE_Disgusting_Default_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SE_Disgusting_Default.BP_SE_Disgusting_Default_C.BPClientInitializeStatus
struct ABP_SE_Disgusting_Default_C_BPClientInitializeStatus_Params
{
public:
	class UGGStatusEffectManager*                Manager;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function BP_SE_Disgusting_Default.BP_SE_Disgusting_Default_C.ExecuteUbergraph_BP_SE_Disgusting_Default
struct ABP_SE_Disgusting_Default_C_ExecuteUbergraph_BP_SE_Disgusting_Default_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B16[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGStatusEffectManager*                K2Node_Event_Manager_1;                            // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EApplicationMethod                K2Node_Event_ApplicationMethod;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B1A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_SpreadFrom;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bMovedBetweenActors;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B29[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGStatusEffectManager*                K2Node_Event_Manager;                              // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


