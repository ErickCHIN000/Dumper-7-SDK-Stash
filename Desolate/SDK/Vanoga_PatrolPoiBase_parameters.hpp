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
// Function Vanoga_PatrolPoiBase.Vanoga_PatrolPoiBase_C.IsReady
struct AVanoga_PatrolPoiBase_C_IsReady_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function Vanoga_PatrolPoiBase.Vanoga_PatrolPoiBase_C.Use
struct AVanoga_PatrolPoiBase_C_Use_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Vanoga_PatrolPoiBase.Vanoga_PatrolPoiBase_C.ExecuteUbergraph_Vanoga_PatrolPoiBase
struct AVanoga_PatrolPoiBase_C_ExecuteUbergraph_Vanoga_PatrolPoiBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


