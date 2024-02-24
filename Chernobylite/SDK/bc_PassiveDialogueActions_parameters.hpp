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

// 0x100 (0x100 - 0x0)
// Function bc_PassiveDialogueActions.bc_PassiveDialogueActions_C.IsCompanionInConflict
struct Ubc_PassiveDialogueActions_C_IsCompanionInConflict_Params
{
public:
	struct FPassiveDialogueInfo                  ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
	class FName                                  Conflict_name;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_3;        // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C26[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_1;                     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_2;                     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo;             // 0x48(0x20)(NoDestructor, UObjectWrapper)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_3;                     // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_1;           // 0x70(0x20)(NoDestructor, UObjectWrapper)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_2;           // 0x90(0x20)(NoDestructor, UObjectWrapper)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConflict                             CallFunc_GetConflictForCurrentDay_ReturnValue;     // 0xB8(0x14)(NoDestructor)
	uint8                                        Pad_C50[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_4;                     // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_4;        // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_5;        // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C5E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_3;           // 0xE0(0x20)(NoDestructor, UObjectWrapper)
};

// 0xEA (0xEA - 0x0)
// Function bc_PassiveDialogueActions.bc_PassiveDialogueActions_C.HasCompanionLowMorale
struct Ubc_PassiveDialogueActions_C_HasCompanionLowMorale_Params
{
public:
	struct FPassiveDialogueInfo                  ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_MultiGate_FirstRun;                         // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D29[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_MultiGate_Data;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_MultiGate_ScratchBool;                      // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D31[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_MultiGate_ScratchIndex;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D37[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_1;                     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo;             // 0x48(0x20)(NoDestructor, UObjectWrapper)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_1;           // 0x68(0x20)(NoDestructor, UObjectWrapper)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_2;                     // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D3D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_2;           // 0x98(0x20)(NoDestructor, UObjectWrapper)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_3;                     // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_3;           // 0xC8(0x20)(NoDestructor, UObjectWrapper)
	bool                                         CallFunc_HaveBuffCompanion_ReturnValue;            // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HaveBuffCompanion_ReturnValue_1;          // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x180 (0x180 - 0x0)
// Function bc_PassiveDialogueActions.bc_PassiveDialogueActions_C.IsDislikedBuildEntityInBase
struct Ubc_PassiveDialogueActions_C_IsDislikedBuildEntityInBase_Params
{
public:
	struct FPassiveDialogueInfo                  ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E18[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_1;                     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo;             // 0x38(0x20)(NoDestructor, UObjectWrapper)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_1;           // 0x58(0x20)(NoDestructor, UObjectWrapper)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_2;                     // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_3;                     // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_2;           // 0x88(0x20)(NoDestructor, UObjectWrapper)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_3;           // 0xA8(0x20)(NoDestructor, UObjectWrapper)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_4;                     // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_5;                     // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_4;           // 0xD8(0x20)(NoDestructor, UObjectWrapper)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_5;           // 0xF8(0x20)(NoDestructor, UObjectWrapper)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_6;                     // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_7;                     // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_6;           // 0x128(0x20)(NoDestructor, UObjectWrapper)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_FindDislikedBuildEntities_ReturnValue;    // 0x150(0x10)(ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x164(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E57[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x17D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x17E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x17F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x129 (0x129 - 0x0)
// Function bc_PassiveDialogueActions.bc_PassiveDialogueActions_C.IsCompanionHurt
struct Ubc_PassiveDialogueActions_C_IsCompanionHurt_Params
{
public:
	struct FPassiveDialogueInfo                  ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F58[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_1;                     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo;             // 0x38(0x20)(NoDestructor, UObjectWrapper)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_1;           // 0x58(0x20)(NoDestructor, UObjectWrapper)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_2;                     // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_MultiGate_FirstRun;                         // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F65[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_MultiGate_Data;                             // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_MultiGate_ScratchBool;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F6B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_MultiGate_ScratchIndex;                     // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_2;           // 0x90(0x20)(NoDestructor, UObjectWrapper)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_3;                     // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F8F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_DialogueSystemGetBool_ReturnValue;        // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F97[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_4;                     // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HaveBuffCompanion_ReturnValue;            // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FA4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_3;           // 0x108(0x20)(NoDestructor, UObjectWrapper)
	bool                                         CallFunc_HaveBuffCompanion_ReturnValue_1;          // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x109 (0x109 - 0x0)
// Function bc_PassiveDialogueActions.bc_PassiveDialogueActions_C.HasPlayerDoneTraining
struct Ubc_PassiveDialogueActions_C_HasPlayerDoneTraining_Params
{
public:
	struct FPassiveDialogueInfo                  ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_1;                     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo;             // 0x38(0x20)(NoDestructor, UObjectWrapper)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_1;           // 0x58(0x20)(NoDestructor, UObjectWrapper)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_2;                     // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_MultiGate_FirstRun;                         // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_MultiGate_Data;                             // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_MultiGate_ScratchBool;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_MultiGate_ScratchIndex;                     // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_2;           // 0x98(0x20)(NoDestructor, UObjectWrapper)
	class ACGNPC*                                CallFunc_GetNPC_ReturnValue_3;                     // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FPassiveDialogueInfo                  K2Node_MakeStruct_PassiveDialogueInfo_3;           // 0xD8(0x20)(NoDestructor, UObjectWrapper)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_DialogueSystemGetBool_ReturnValue;        // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function bc_PassiveDialogueActions.bc_PassiveDialogueActions_C.HasPlayerHaveLowPsyche
struct Ubc_PassiveDialogueActions_C_HasPlayerHaveLowPsyche_Params
{
public:
	struct FPassiveDialogueInfo                  ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
	class ACGNPC*                                NewLocalVar_0;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


