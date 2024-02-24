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

// 0x90 (0x90 - 0x0)
// Function wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C.UpdateTypeface
struct UWid_DialogueTimelinePayload_Entry_C_UpdateTypeface_Params
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x0(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class EBasicResultType                  Temp_byte_Variable;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x5C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0x64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x6C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EBB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_3;                              // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Select_Default;                             // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Select_Default_1;                           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C.Update
struct UWid_DialogueTimelinePayload_Entry_C_Update_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EBasicResultType                  ReactionType;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C.GetReactionColor
struct UWid_DialogueTimelinePayload_Entry_C_GetReactionColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C.SetReactionType
struct UWid_DialogueTimelinePayload_Entry_C_SetReactionType_Params
{
public:
	enum class EBasicResultType                  ReactionType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F41[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetReactionColor_Color;                   // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F43[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x18(0x28)(UObjectWrapper)
};

// 0x18 (0x18 - 0x0)
// Function wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C.SetText
struct UWid_DialogueTimelinePayload_Entry_C_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C.PreConstruct
struct UWid_DialogueTimelinePayload_Entry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C.ExecuteUbergraph_wid_DialogueTimelinePayload_Entry
struct UWid_DialogueTimelinePayload_Entry_C_ExecuteUbergraph_wid_DialogueTimelinePayload_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


