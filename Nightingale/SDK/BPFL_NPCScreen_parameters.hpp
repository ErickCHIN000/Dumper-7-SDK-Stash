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

// 0x81 (0x81 - 0x0)
// Function BPFL_NPCScreen.BPFL_NPCScreen_C.GetNPCMenu
struct UBPFL_NPCScreen_C_GetNPCMenu_Params
{
public:
	struct FDataTableRowHandle                   NPC_Row;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_ui_NPCMenus                     Menu_Type;                                         // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Optional_Minus_Menu_Name_;                         // 0x20(0x18)(Parm, OutParm)
	TArray<struct FDataTableRowHandle>           Available_Content;                                 // 0x38(0x10)(Parm, OutParm)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NPCMenu_Content                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x50(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


