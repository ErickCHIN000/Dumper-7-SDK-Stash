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
// Function wid_BuildSystem_Desc_StatList.wid_BuildSystem_Desc_StatList_C.Add
struct UWid_BuildSystem_Desc_StatList_C_Add_Params
{
public:
	struct FBuildStatEntry                       Stat;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_BuildSystem_Desc_StatList_Entry_C* CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_BuildSystem_Desc_StatList.wid_BuildSystem_Desc_StatList_C.PreConstruct
struct UWid_BuildSystem_Desc_StatList_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function wid_BuildSystem_Desc_StatList.wid_BuildSystem_Desc_StatList_C.ExecuteUbergraph_wid_BuildSystem_Desc_StatList
struct UWid_BuildSystem_Desc_StatList_C_ExecuteUbergraph_wid_BuildSystem_Desc_StatList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


