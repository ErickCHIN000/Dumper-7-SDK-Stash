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

// 0xA3 (0xA3 - 0x0)
// Function wid_pda_NotesList_Categories.wid_pda_NotesList_Categories_C.SetContent
struct UWid_pda_NotesList_Categories_C_SetContent_Params
{
public:
	class FText                                  SkillName;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  SkillDesc;                                         // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                            Texture;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B1C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x40(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x58(0x18)(None)
	class FText                                  CallFunc_FormatText_Output;                        // 0x70(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x88(0x18)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


