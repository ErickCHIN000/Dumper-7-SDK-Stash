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

// 0x6 (0x6 - 0x0)
// Function PlayerSaveGame.PlayerSaveGame_C.GetNotifications
struct UPlayerSaveGame_C_GetNotifications_Params
{
public:
	enum class Enum_NotifyVisibility             ItemNotify_Visibility;                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyDuration               ItemNotify_Duration;                               // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyVisibility             ShellNotify_Visibility;                            // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyDuration               ShellNotify_Duration;                              // 0x3(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyVisibility             WeaponNotify_Visibility;                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyDuration               WeaponNotify_Duration;                             // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function PlayerSaveGame.PlayerSaveGame_C.SetNotifications
struct UPlayerSaveGame_C_SetNotifications_Params
{
public:
	enum class Enum_NotifyVisibility             ItemNotify_Visibility;                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyDuration               ItemNotify_Duration;                               // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyVisibility             ShellNotify_Visibility;                            // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyDuration               ShellNotify_Duration;                              // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyVisibility             WeaponNotify_Visibility;                           // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyDuration               WeaponNotify_Duration;                             // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


