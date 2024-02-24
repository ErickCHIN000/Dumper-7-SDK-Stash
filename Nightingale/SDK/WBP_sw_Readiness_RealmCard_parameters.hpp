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

// 0xD8 (0xD8 - 0x0)
// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.SetCardFromCardData
struct UWBP_sw_Readiness_RealmCard_C_SetCardFromCardData_Params
{
public:
	struct FItemData                             CardData;                                          // 0x0(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x101 (0x101 - 0x0)
// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.SetCardArtFromCardData
struct UWBP_sw_Readiness_RealmCard_C_SetCardArtFromCardData_Params
{
public:
	struct FItemData                             CardData;                                          // 0x0(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetDefaultItemFullSizeIcon_ReturnValue;   // 0xD8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.UpdatePowerLevelAndUsageCostText
struct UWBP_sw_Readiness_RealmCard_C_UpdatePowerLevelAndUsageCostText_Params
{
public:
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x0(0x18)(None)
};

// 0x109 (0x109 - 0x0)
// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.GetPowerLevelAndUsageCostFromCardData
struct UWBP_sw_Readiness_RealmCard_C_GetPowerLevelAndUsageCostFromCardData_Params
{
public:
	struct FItemData                             CardData;                                          // 0x0(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FItemData_RealmCard                   CallFunc_TryGetItemDataRealmCard_OutData;          // 0xD8(0x28)(None)
	enum class EGetResult                        CallFunc_TryGetItemDataRealmCard_Branches;         // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRealmCardAssetPowerLevel_ReturnValue;  // 0x104(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.PreConstruct
struct UWBP_sw_Readiness_RealmCard_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.OnMouseEnter
struct UWBP_sw_Readiness_RealmCard_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.OnMouseLeave
struct UWBP_sw_Readiness_RealmCard_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x150 (0x150 - 0x0)
// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.ExecuteUbergraph_WBP_sw_Readiness_RealmCard
struct UWBP_sw_Readiness_RealmCard_C_ExecuteUbergraph_WBP_sw_Readiness_RealmCard_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x24(0x38)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x60(0x78)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xD8(0x78)(ConstParm)
};

// 0xD8 (0xD8 - 0x0)
// Function WBP_sw_Readiness_RealmCard.WBP_sw_Readiness_RealmCard_C.OnMouseEnteredRealmCard__DelegateSignature
struct UWBP_sw_Readiness_RealmCard_C_OnMouseEnteredRealmCard__DelegateSignature_Params
{
public:
	struct FItemData                             CardData;                                          // 0x0(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

}
}


