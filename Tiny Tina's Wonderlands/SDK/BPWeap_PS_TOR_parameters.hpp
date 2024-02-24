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

// 0x2 (0x2 - 0x0)
// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.Notify_ReloadEnded
struct ABPWeap_PS_TOR_C_Notify_ReloadEnded_Params
{
public:
	bool                                         bCompleted;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAmmoGiven;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.Weapon_NotifyPutDown
struct ABPWeap_PS_TOR_C_Weapon_NotifyPutDown_Params
{
public:
	class AWeapon*                               EventWeapon;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function BPWeap_PS_TOR.BPWeap_PS_TOR_C.ExecuteUbergraph_BPWeap_PS_TOR
struct ABPWeap_PS_TOR_C_ExecuteUbergraph_BPWeap_PS_TOR_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3706[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeapon*                               K2Node_Event_EventWeapon;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bCompleted;                           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bAmmoGiven;                           // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


