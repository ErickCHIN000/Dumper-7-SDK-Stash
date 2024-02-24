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

// 0x301 (0x301 - 0x0)
// Function BP_MenuDataEntry_Item.BP_MenuDataEntry_Item_C.GetItemQuality
struct UBP_MenuDataEntry_Item_C_GetItemQuality_Params
{
public:
	enum class EItemQuality                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AA8[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetInventoryEntry_ReturnValue;            // 0x10(0x2F0)(ConstParm)
	enum class EItemQuality                      CallFunc_GetItemQualityFromEntry_ReturnValue;      // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x300 (0x300 - 0x0)
// Function BP_MenuDataEntry_Item.BP_MenuDataEntry_Item_C.GetTooltipWidget
struct UBP_MenuDataEntry_Item_C_GetTooltipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemTooltip_C*                    CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       CallFunc_GetInventoryEntry_ReturnValue;            // 0x10(0x2F0)(ConstParm)
};

}
}


