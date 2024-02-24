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

// 0x8 (0x8 - 0x0)
// Function bp_FlashlightModifier_01.bp_FlashlightModifier_01_C.ReceiveActorBeginOverlap
struct Abp_FlashlightModifier_01_C_ReceiveActorBeginOverlap_Params
{
public:
	class AActor*                                OtherActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function bp_FlashlightModifier_01.bp_FlashlightModifier_01_C.ReceiveActorEndOverlap
struct Abp_FlashlightModifier_01_C_ReceiveActorEndOverlap_Params
{
public:
	class AActor*                                OtherActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function bp_FlashlightModifier_01.bp_FlashlightModifier_01_C.ExecuteUbergraph_bp_FlashlightModifier_01
struct Abp_FlashlightModifier_01_C_ExecuteUbergraph_bp_FlashlightModifier_01_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_FlashlightModifier_01_C*           Temp_object_Variable;                              // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_OtherActor_1;                         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OtherActor;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1206[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


