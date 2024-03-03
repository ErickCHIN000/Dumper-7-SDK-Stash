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

// 0x38 (0x38 - 0x0)
// Function BPI_NPC_Interaction.BPI_NPC_Interaction_C.fnAddRemoveDialogue
struct IBPI_NPC_Interaction_C_FnAddRemoveDialogue_Params
{
public:
	bool                                         Add_Dialogue;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_NPC_DialogueIntroOutro        GreetingsGoodbyes;                                 // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<struct FStruct_NPC_AllowedDialogue>   Dialogue;                                          // 0x28(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x30 (0x30 - 0x0)
// Function BPI_NPC_Interaction.BPI_NPC_Interaction_C.fnSetAllowedDialogue
struct IBPI_NPC_Interaction_C_FnSetAllowedDialogue_Params
{
public:
	struct FStruct_NPC_DialogueIntroOutro        GreetingsGoodbyes;                                 // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<struct FStruct_NPC_AllowedDialogue>   New_Allowed_Dialogue;                              // 0x20(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function BPI_NPC_Interaction.BPI_NPC_Interaction_C.fnNextLine
struct IBPI_NPC_Interaction_C_FnNextLine_Params
{
public:
	class AActor*                                Actor_Reference;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_Dialogue_State           Dialogue_State;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_DialogueType                 Dialogue_Type;                                     // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1254[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DT_NPC_Dialogue               Current_Line;                                      // 0x10(0x68)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function BPI_NPC_Interaction.BPI_NPC_Interaction_C.fnConfirmInteraction
struct IBPI_NPC_Interaction_C_FnConfirmInteraction_Params
{
public:
	class AActor*                                Actor_Reference;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_DT_NPC_Dialogue               Selected_Line;                                     // 0x8(0x68)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FStruct_NPC_DialogueIntroOutro        Intro_and_Outro;                                   // 0x70(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<struct FStruct_NPC_AllowedDialogue>   Allowed_Dialogue;                                  // 0x90(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function BPI_NPC_Interaction.BPI_NPC_Interaction_C.fnInitInteraction
struct IBPI_NPC_Interaction_C_FnInitInteraction_Params
{
public:
	class AActor*                                Actor_Reference;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_NPC_Interaction.BPI_NPC_Interaction_C.fnInteract
struct IBPI_NPC_Interaction_C_FnInteract_Params
{
public:
	class AActor*                                Actor_Reference;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


