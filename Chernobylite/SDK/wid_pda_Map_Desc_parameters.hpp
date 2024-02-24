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

// 0x38 (0x38 - 0x0)
// Function wid_pda_Map_Desc.wid_pda_Map_Desc_C.Update
struct UWid_pda_Map_Desc_C_Update_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Text;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                            Texture;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_pda_Map_Desc.wid_pda_Map_Desc_C.PreConstruct
struct UWid_pda_Map_Desc_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function wid_pda_Map_Desc.wid_pda_Map_Desc_C.ExecuteUbergraph_wid_pda_Map_Desc
struct UWid_pda_Map_Desc_C_ExecuteUbergraph_wid_pda_Map_Desc_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


