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

// 0x1F0 (0x1F0 - 0x0)
// Function UMG_DeviceInfo.UMG_DeviceInfo_C.Initialise
struct UUMG_DeviceInfo_C_Initialise_Params
{
public:
	struct FItemData                             Item;                                              // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function UMG_DeviceInfo.UMG_DeviceInfo_C.PreConstruct
struct UUMG_DeviceInfo_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4DB (0x4DB - 0x0)
// Function UMG_DeviceInfo.UMG_DeviceInfo_C.ExecuteUbergraph_UMG_DeviceInfo
struct UUMG_DeviceInfo_C_ExecuteUbergraph_UMG_DeviceInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItemTemplateStruct_ItemTemplate;       // 0x8(0x1F0)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetItemTemplateStruct_Paths;              // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A7F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             K2Node_CustomEvent_Item;                           // 0x200(0x1F0)(ContainsInstancedReference)
	struct FItemableData                         CallFunc_GetItemableData_ItemableData;             // 0x3F0(0xE8)(None)
	enum class EDataValid                        CallFunc_GetItemableData_Paths;                    // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x4D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


