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

// 0x30 (0x30 - 0x0)
// Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.HoveredStyle
struct UUMG_CreateNewCharacterButton_C_HoveredStyle_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default;                             // 0x8(0x28)(None)
};

// 0x90 (0x90 - 0x0)
// Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.Initialize
struct UUMG_CreateNewCharacterButton_C_Initialize_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Level;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Drop_Progress;                                     // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x60(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x78(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.ExecuteUbergraph_UMG_CreateNewCharacterButton
struct UUMG_CreateNewCharacterButton_C_ExecuteUbergraph_UMG_CreateNewCharacterButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5672[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.DeleteCharacter__DelegateSignature
struct UUMG_CreateNewCharacterButton_C_DeleteCharacter__DelegateSignature_Params
{
public:
	class UUMG_CharacterProfileSlot_C*           Delete;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.ButtonClicked__DelegateSignature
struct UUMG_CreateNewCharacterButton_C_ButtonClicked__DelegateSignature_Params
{
public:
	class UUMG_CreateNewCharacterButton_C*       Input;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


