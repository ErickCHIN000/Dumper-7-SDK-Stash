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
// Function AuxActor_Mushroom.AuxActor_Mushroom_C.SetMushroomAttachmentEnabled
struct AAuxActor_Mushroom_C_SetMushroomAttachmentEnabled_Params
{
public:
	bool                                         EnabledState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1850[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGestaltPartData_Mesh*                 GestaltPart;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function AuxActor_Mushroom.AuxActor_Mushroom_C.ExecuteUbergraph_AuxActor_Mushroom
struct AAuxActor_Mushroom_C_ExecuteUbergraph_AuxActor_Mushroom_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayingClass_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1885[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxActionRegister>            Temp_struct_Variable;                              // 0x8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class UGbxAction*                            CallFunc_K2Play_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayingClass_ReturnValue1;              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


