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

// 0xE8 (0xE8 - 0x0)
// Function wid_pda_NotesList_Skills.wid_pda_NotesList_Skills_C.SetContent
struct UWid_pda_NotesList_Skills_C_SetContent_Params
{
public:
	class FText                                  SkillName;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  SkillDesc;                                         // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                            Texture;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B5[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_FormatText_Output;                        // 0x40(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable;                              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue_1;                    // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_Select_Default;                             // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x98(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0xB0(0x18)(None)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xD0(0x18)(None)
};

}
}


