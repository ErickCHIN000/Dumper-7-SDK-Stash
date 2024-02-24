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
// Function FireSourceBaseInterface.FireSourceBaseInterface_C.Barbarous_RemoveFireSource
struct IFireSourceBaseInterface_C_Barbarous_RemoveFireSource_Params
{
public:
	class AActor*                                FireSource;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FireSourceBaseInterface.FireSourceBaseInterface_C.Barbarous_AddFireSource
struct IFireSourceBaseInterface_C_Barbarous_AddFireSource_Params
{
public:
	class AActor*                                FireSource;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function FireSourceBaseInterface.FireSourceBaseInterface_C.NeedsUpdates
struct IFireSourceBaseInterface_C_NeedsUpdates_Params
{
public:
	bool                                         bNeeds;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function FireSourceBaseInterface.FireSourceBaseInterface_C.ClearEffect
struct IFireSourceBaseInterface_C_ClearEffect_Params
{
public:
	class ACharacter*                            Char;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SlotIndex;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function FireSourceBaseInterface.FireSourceBaseInterface_C.ApplyEffect
struct IFireSourceBaseInterface_C_ApplyEffect_Params
{
public:
	class ACharacter*                            Char;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


