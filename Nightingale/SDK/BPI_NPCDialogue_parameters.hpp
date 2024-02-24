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

// 0x9 (0x9 - 0x0)
// Function BPI_NPCDialogue.BPI_NPCDialogue_C.SetAmbientDialogue
struct IBPI_NPCDialogue_C_SetAmbientDialogue_Params
{
public:
	class UDialogue*                             AmbientDialogue;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_NPCDialogue.BPI_NPCDialogue_C.SetDialogue
struct IBPI_NPCDialogue_C_SetDialogue_Params
{
public:
	class UDialogue*                             Dialogue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_NPCDialogue.BPI_NPCDialogue_C.SetAssociatedEncounter
struct IBPI_NPCDialogue_C_SetAssociatedEncounter_Params
{
public:
	class AEncounterBase*                        Associated_Encounter;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_NPCDialogue.BPI_NPCDialogue_C.GetAssociatedEncounter
struct IBPI_NPCDialogue_C_GetAssociatedEncounter_Params
{
public:
	class AEncounterBase*                        Associated_Encounter;                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_NPCDialogue.BPI_NPCDialogue_C.ShowMerchant
struct IBPI_NPCDialogue_C_ShowMerchant_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_NPCDialogue.BPI_NPCDialogue_C.RestorePlayer
struct IBPI_NPCDialogue_C_RestorePlayer_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_NPCDialogue.BPI_NPCDialogue_C.CreateDialogueEvent
struct IBPI_NPCDialogue_C_CreateDialogueEvent_Params
{
public:
	class ABP_PlayerController_C*                PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_NPCDialogue.BPI_NPCDialogue_C.RemoveMenus
struct IBPI_NPCDialogue_C_RemoveMenus_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_NPCDialogue.BPI_NPCDialogue_C.SetNPCCamera
struct IBPI_NPCDialogue_C_SetNPCCamera_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


