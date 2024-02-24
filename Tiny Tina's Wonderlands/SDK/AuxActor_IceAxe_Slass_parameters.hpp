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
// Function AuxActor_IceAxe_Slass.AuxActor_IceAxe_Slass_C.ReceiveEndPlay
struct AAuxActor_IceAxe_Slass_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function AuxActor_IceAxe_Slass.AuxActor_IceAxe_Slass_C.ExecuteUbergraph_AuxActor_IceAxe_Slass
struct AAuxActor_IceAxe_Slass_C_ExecuteUbergraph_AuxActor_IceAxe_Slass_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_103D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxActionRegister>            Temp_struct_Variable;                              // 0x8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1043[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxAction*                            CallFunc_K2Play_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


