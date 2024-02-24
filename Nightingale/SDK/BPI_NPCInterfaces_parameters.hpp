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
// Function BPI_NPCInterfaces.BPI_NPCInterfaces_C.GetNPCInfoForUIInterface
struct IBPI_NPCInterfaces_C_GetNPCInfoForUIInterface_Params
{
public:
	TScriptInterface<class IBPI_NPCInfoForUI_C>  Interface;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_NPCInterfaces.BPI_NPCInterfaces_C.GetNPCFriendshipInterface
struct IBPI_NPCInterfaces_C_GetNPCFriendshipInterface_Params
{
public:
	TScriptInterface<class IBPI_NPCFriendship_C> Interface;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_NPCInterfaces.BPI_NPCInterfaces_C.GetNPCDialogueInterface
struct IBPI_NPCInterfaces_C_GetNPCDialogueInterface_Params
{
public:
	TScriptInterface<class IBPI_NPCDialogue_C>   Interface;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_NPCInterfaces.BPI_NPCInterfaces_C.GetNPCContractInterface
struct IBPI_NPCInterfaces_C_GetNPCContractInterface_Params
{
public:
	TScriptInterface<class IBPI_NPCContract_C>   Interface;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


