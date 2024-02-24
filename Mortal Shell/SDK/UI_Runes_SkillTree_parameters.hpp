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

// 0x24 (0x24 - 0x0)
// Function UI_Runes_SkillTree.UI_Runes_SkillTree_C.IsDarkFormRun
struct UUI_Runes_SkillTree_C_IsDarkFormRun_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9D4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StormMode_GetSelectedShell_HasSelected;   // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_StormMode_GetSelectedShell_Shell;         // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x214 (0x214 - 0x0)
// Function UI_Runes_SkillTree.UI_Runes_SkillTree_C.HandleDarkFormSkillTree
struct UUI_Runes_SkillTree_C_HandleDarkFormSkillTree_Params
{
public:
	struct FStruct_Rune                          Local_DarkFormRune;                                // 0x0(0xD0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_ShellDye                     CallFunc_StormMode_GetCurrentShadeForCharacter_Shade; // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A49[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A56[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A61[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A66[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A69[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_Rune_Slot_C*>               K2Node_MakeArray_Array;                            // 0x118(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0x128(0xD0)(HasGetValueTypeHash)
	class UUI_Rune_Slot_C*                       CallFunc_Array_Get_Item_1;                         // 0x1F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x204(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A79[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x20C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A7D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x208 (0x208 - 0x0)
// Function UI_Runes_SkillTree.UI_Runes_SkillTree_C.UpdateSpecialRunes
struct UUI_Runes_SkillTree_C_UpdateSpecialRunes_Params
{
public:
	TArray<struct FStruct_Rune>                  Array;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UUI_Rune_Slot_C*                       Slot_1;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Rune_Slot_C*                       Slot_2;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Rune_Slot_C*                       Slot_3;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Rune_Slot_C*                       Local_Slot;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          Local_Rune;                                        // 0x30(0xD0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AF2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_Rune_Slot_C*>               K2Node_MakeArray_Array;                            // 0x108(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x125(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B06[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B0A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0x130(0xD0)(HasGetValueTypeHash)
	class UUI_Rune_Slot_C*                       CallFunc_Array_Get_Item_1;                         // 0x200(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x399 (0x399 - 0x0)
// Function UI_Runes_SkillTree.UI_Runes_SkillTree_C.UpdateMiscRunes
struct UUI_Runes_SkillTree_C_UpdateMiscRunes_Params
{
public:
	TArray<struct FStruct_Rune>                  Local_MiscRunes;                                   // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FStruct_Rune>                  Local_GlandTakenRunes;                             // 0x10(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FStruct_Rune>                  Local_BossDefeatedRunes;                           // 0x20(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FStruct_Rune>                  Local_ChaliceRunes;                                // 0x30(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FStruct_Rune>                  Local_OpenAreaRunes;                               // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Local_Index;                                       // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B95[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          Local_Rune;                                        // 0x58(0xD0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BA1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BA8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_Rune_Slot_C*>               K2Node_MakeArray_Array;                            // 0x150(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetBossDefeatedRunesIDs_IDs;              // 0x160(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x174(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BAE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetGlandTakenRunesIDs_IDs;                // 0x180(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BB5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetChaliceRunesIDs_IDs;                   // 0x198(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_2;             // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BB9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BC4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Array_Get_Item;                           // 0x1B8(0xD0)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BD2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Rune_Slot_C*                       CallFunc_Array_Get_Item_1;                         // 0x290(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetOpenAreasRuneIDs_IDs;                  // 0x298(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_3;             // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BD7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStruct_Rune>                  CallFunc_Map_Values_Values;                        // 0x2B0(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BDE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CallFunc_Array_Get_Item_2;                         // 0x2C8(0xD0)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function UI_Runes_SkillTree.UI_Runes_SkillTree_C.Get All Slots
struct UUI_Runes_SkillTree_C_Get_All_Slots_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C63[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_Rune_Slot_C*>               K2Node_MakeArray_Array;                            // 0x30(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UUI_Rune_Slot_C*                       CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C6F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_Rune_Slot_C*>               K2Node_MakeArray_Array_1;                          // 0x58(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UUI_Rune_Slot_C*                       CallFunc_Array_Get_Item_1;                         // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C7D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_Rune_Slot_C*>               K2Node_MakeArray_Array_2;                          // 0x80(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UUI_Rune_Slot_C*                       CallFunc_Array_Get_Item_2;                         // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C8C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_Rune_Slot_C*>               K2Node_MakeArray_Array_3;                          // 0xA8(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C91[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Rune_Slot_C*                       CallFunc_Array_Get_Item_3;                         // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C97[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x33 (0x33 - 0x0)
// Function UI_Runes_SkillTree.UI_Runes_SkillTree_C.ExecuteUbergraph_UI_Runes_SkillTree
struct UUI_Runes_SkillTree_C_ExecuteUbergraph_UI_Runes_SkillTree_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDarkFormRun_ReturnValue;                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CF4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Rune_Slot_C*                       CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CFF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D02[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class URuneInventoryComponent_C*             CallFunc_GetRuneInventory_ReturnValue;             // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


