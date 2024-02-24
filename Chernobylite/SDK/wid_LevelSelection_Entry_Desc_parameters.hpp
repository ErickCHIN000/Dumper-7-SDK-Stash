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

// 0x2 (0x2 - 0x0)
// Function wid_LevelSelection_Entry_Desc.wid_LevelSelection_Entry_Desc_C.ChangeType
struct UWid_LevelSelection_Entry_Desc_C_ChangeType_Params
{
public:
	enum class Enum_LevelSelection_Desc_Type     NewType;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_LevelSelection_Entry_Desc.wid_LevelSelection_Entry_Desc_C.ShowDesc
struct UWid_LevelSelection_Entry_Desc_C_ShowDesc_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function wid_LevelSelection_Entry_Desc.wid_LevelSelection_Entry_Desc_C.SetTitle
struct UWid_LevelSelection_Entry_Desc_C_SetTitle_Params
{
public:
	class FText                                  Map;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function wid_LevelSelection_Entry_Desc.wid_LevelSelection_Entry_Desc_C.PreConstruct
struct UWid_LevelSelection_Entry_Desc_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function wid_LevelSelection_Entry_Desc.wid_LevelSelection_Entry_Desc_C.ExecuteUbergraph_wid_LevelSelection_Entry_Desc
struct UWid_LevelSelection_Entry_Desc_C_ExecuteUbergraph_wid_LevelSelection_Entry_Desc_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


