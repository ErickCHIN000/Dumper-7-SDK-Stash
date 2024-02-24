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

// 0x17A (0x17A - 0x0)
// Function UMG_CharacterSetting_Visual.UMG_CharacterSetting_Visual_C.GetSelectionDisplayName
struct UUMG_CharacterSetting_Visual_C_GetSelectionDisplayName_Params
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Parm, OutParm)
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow;            // 0x18(0x18)(NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_CastToCharacterCreationDataRowHandle_Paths; // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataRowHandle       CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue; // 0x34(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationData                CallFunc_GetCharacterCreationDataStruct_CharacterCreationData; // 0x50(0x128)(None)
	enum class EValid                            CallFunc_GetCharacterCreationDataStruct_Paths;     // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


