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

// 0x118 (0x118 - 0x0)
// Function UI_UpgradeUnlocked.UI_UpgradeUnlocked_C.GetGamePadConfirmButton
struct UUI_UpgradeUnlocked_C_GetGamePadConfirmButton_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x88)(Parm, OutParm, ReturnParm)
	class UTexture2D*                            CallFunc_GetButtonIcon_Texture;                    // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x90(0x88)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_UpgradeUnlocked.UI_UpgradeUnlocked_C.PreConstruct
struct UUI_UpgradeUnlocked_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UI_UpgradeUnlocked.UI_UpgradeUnlocked_C.DisplayUpgradeUnlocked
struct UUI_UpgradeUnlocked_C_DisplayUpgradeUnlocked_Params
{
public:
	class FName                                  Upgrade;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromUI;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_258A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            DataTable;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E1 (0x1E1 - 0x0)
// Function UI_UpgradeUnlocked.UI_UpgradeUnlocked_C.ExecuteUbergraph_UI_UpgradeUnlocked
struct UUI_UpgradeUnlocked_C_ExecuteUbergraph_UI_UpgradeUnlocked_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetGamePaused_ReturnValue;                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2601[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FUpgradeDisplayInfo                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x18(0xC9)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_260B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2613[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_Upgrade;                        // 0xEC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bFromUI;                        // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2623[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            K2Node_CustomEvent_DataTable;                      // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUpgradeDisplayInfo                   CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x100(0xC9)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_262E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2633[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetGamePaused_ReturnValue_1;              // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UI_UpgradeUnlocked.UI_UpgradeUnlocked_C.UnlockFancyNotificationShowing__DelegateSignature
struct UUI_UpgradeUnlocked_C_UnlockFancyNotificationShowing__DelegateSignature_Params
{
public:
	class FName                                  UnlockName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


