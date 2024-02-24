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
// Function wid_RoomSkillTreeButton.wid_RoomSkillTreeButton_C.SetSelected
struct UWid_RoomSkillTreeButton_C_SetSelected_Params
{
public:
	bool                                         NewSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_RoomSkillTreeButton.wid_RoomSkillTreeButton_C.PreConstruct
struct UWid_RoomSkillTreeButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function wid_RoomSkillTreeButton.wid_RoomSkillTreeButton_C.ExecuteUbergraph_wid_RoomSkillTreeButton
struct UWid_RoomSkillTreeButton_C_ExecuteUbergraph_wid_RoomSkillTreeButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_196F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetTextFromDictionary_Text;               // 0x8(0x18)(None)
};

}
}


