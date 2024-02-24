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

// 0x1 (0x1 - 0x0)
// Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.ClearOptions
struct UUMG_CharacterSetting_Voice_C_ClearOptions_Params
{
public:
	bool                                         ClearIndex;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA9 (0xA9 - 0x0)
// Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.IsValidVoice
struct UUMG_CharacterSetting_Voice_C_IsValidVoice_Params
{
public:
	struct FCharacterVoicesRowHandle             RowHandle;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         IsValid;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3202[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRowMetadata                          CallFunc_GetMetadata_ReturnValue;                  // 0x20(0x88)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.GenerateOptions
struct UUMG_CharacterSetting_Voice_C_GenerateOptions_Params
{
public:
	struct FCharacterVoicesRowHandle             DefaultSelection;                                  // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectionIndex;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NumRows_ReturnValue;                      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterVoicesEnum                  CallFunc_IntToStruct_ReturnValue;                  // 0x28(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterVoicesRowHandle             CallFunc_StructToRowHandle_ReturnValue;            // 0x3C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidVoice_IsValid;                     // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddOption_Index;                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FCharacterVoicesRowHandleFCharacterVoicesRowHandle_ReturnValue; // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x72 (0x72 - 0x0)
// Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.SetVoiceParameter
struct UUMG_CharacterSetting_Voice_C_SetVoiceParameter_Params
{
public:
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow;            // 0x0(0x18)(NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_CastToCharacterVoicesRowHandle_Paths;     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3314[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterVoicesRowHandle             CallFunc_CastToCharacterVoicesRowHandle_ReturnValue; // 0x1C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_331F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterVoiceData                   CallFunc_GetCharacterVoicesStruct_CharacterVoices; // 0x38(0x38)(None)
	enum class EValid                            CallFunc_GetCharacterVoicesStruct_Paths;           // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.PlayAuditionEvent
struct UUMG_CharacterSetting_Voice_C_PlayAuditionEvent_Params
{
public:
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.ChangeSelection
struct UUMG_CharacterSetting_Voice_C_ChangeSelection_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TempIndex;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8A (0x8A - 0x0)
// Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.GetSelectionDisplayName
struct UUMG_CharacterSetting_Voice_C_GetSelectionDisplayName_Params
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Parm, OutParm)
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow;            // 0x18(0x18)(NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_CastToCharacterVoicesRowHandle_Paths;     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterVoicesRowHandle             CallFunc_CastToCharacterVoicesRowHandle_ReturnValue; // 0x34(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterVoiceData                   CallFunc_GetCharacterVoicesStruct_CharacterVoices; // 0x50(0x38)(None)
	enum class EValid                            CallFunc_GetCharacterVoicesStruct_Paths;           // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


