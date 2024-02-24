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

// 0xC (0xC - 0x0)
// Function UsableActorInterface.UsableActorInterface_C.GetInteractionWidgetLocation
struct IUsableActorInterface_C_GetInteractionWidgetLocation_Params
{
public:
	struct FVector                               WidgetLocation;                                    // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UsableActorInterface.UsableActorInterface_C.GetUnidentifiedText
struct IUsableActorInterface_C_GetUnidentifiedText_Params
{
public:
	class FText                                  UnidentifiedText;                                  // 0x0(0x18)(Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function UsableActorInterface.UsableActorInterface_C.GetID
struct IUsableActorInterface_C_GetID_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UsableActorInterface.UsableActorInterface_C.GetUseActionText
struct IUsableActorInterface_C_GetUseActionText_Params
{
public:
	class FText                                  ActionText;                                        // 0x0(0x18)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function UsableActorInterface.UsableActorInterface_C.GetIsActorUsable
struct IUsableActorInterface_C_GetIsActorUsable_Params
{
public:
	bool                                         IsUsable;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UsableActorInterface.UsableActorInterface_C.EndOutlineFocus
struct IUsableActorInterface_C_EndOutlineFocus_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UsableActorInterface.UsableActorInterface_C.BeginOutlineFocus
struct IUsableActorInterface_C_BeginOutlineFocus_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function UsableActorInterface.UsableActorInterface_C.OnActorUsed
struct IUsableActorInterface_C_OnActorUsed_Params
{
public:
	class APlayerController*                     Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


