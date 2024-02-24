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

// 0x10 (0x10 - 0x0)
// Function wid_RoomSkillTreeMain.wid_RoomSkillTreeMain_C.GetUpgrades
struct UWid_RoomSkillTreeMain_C_GetUpgrades_Params
{
public:
	class UVerticalBox*                          NewParam;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          CallFunc_GetUpgrades_NewParam;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_RoomSkillTreeMain.wid_RoomSkillTreeMain_C.PreConstruct
struct UWid_RoomSkillTreeMain_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_RoomSkillTreeMain.wid_RoomSkillTreeMain_C.Start
struct UWid_RoomSkillTreeMain_C_Start_Params
{
public:
	bool                                         ShowColors;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B2 (0x1B2 - 0x0)
// Function wid_RoomSkillTreeMain.wid_RoomSkillTreeMain_C.ExecuteUbergraph_wid_RoomSkillTreeMain
struct UWid_RoomSkillTreeMain_C_ExecuteUbergraph_wid_RoomSkillTreeMain_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2113[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_Dictionary                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x8(0x20)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2121[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetTextFromDictionary_Text;               // 0x30(0x18)(None)
	struct FSt_RoomData                          CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x48(0x150)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_ShowColors;                     // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2130[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDayPart                          CallFunc_GetDayPart_ReturnValue;                   // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


