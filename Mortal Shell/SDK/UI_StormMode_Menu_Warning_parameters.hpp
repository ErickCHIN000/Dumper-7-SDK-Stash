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
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.GetSelectedCharacter
struct UUI_StormMode_Menu_Warning_C_GetSelectedCharacter_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.GetVerticalIndex
struct UUI_StormMode_Menu_Warning_C_GetVerticalIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.Nav_Confirm
struct UUI_StormMode_Menu_Warning_C_Nav_Confirm_Params
{
public:
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_SelectButton_self_CastInput;              // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_SelectButton_self_CastInput_1;            // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.Nav_LeftRight
struct UUI_StormMode_Menu_Warning_C_Nav_LeftRight_Params
{
public:
	bool                                         CheckIndex;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Custom;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1004[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_CustomIndex;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_CheckIndex;                                  // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1017[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput;           // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_1;         // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_2;         // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_3;         // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1029[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_4;         // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_5;         // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_6;         // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_7;         // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnCharacterHighlighted
struct UUI_StormMode_Menu_Warning_C_OnCharacterHighlighted_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnWeaponHighlighted
struct UUI_StormMode_Menu_Warning_C_OnWeaponHighlighted_Params
{
public:
	enum class EComboTypes                       Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.SetParentWidget
struct UUI_StormMode_Menu_Warning_C_SetParentWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.SetSeedManager
struct UUI_StormMode_Menu_Warning_C_SetSeedManager_Params
{
public:
	class ABP_SeedManager_C*                     SeedManager;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnCharacterSelected
struct UUI_StormMode_Menu_Warning_C_OnCharacterSelected_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnSettingConfirmed
struct UUI_StormMode_Menu_Warning_C_OnSettingConfirmed_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnWeaponSelected
struct UUI_StormMode_Menu_Warning_C_OnWeaponSelected_Params
{
public:
	enum class EComboTypes                       Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.SetSaveGameRef
struct UUI_StormMode_Menu_Warning_C_SetSaveGameRef_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1123[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerSaveGame_C*                     SaveGame;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UMapState_C*                           MapStateSaveGame;                                  // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName_MapState;                                 // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnRiposteHighlighted
struct UUI_StormMode_Menu_Warning_C_OnRiposteHighlighted_Params
{
public:
	enum class ERiposteTypes                     Riposte;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnRiposteSelected
struct UUI_StormMode_Menu_Warning_C_OnRiposteSelected_Params
{
public:
	enum class ERiposteTypes                     Riposte;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnButtonHovered
struct UUI_StormMode_Menu_Warning_C_OnButtonHovered_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
struct UUI_StormMode_Menu_Warning_C_BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
struct UUI_StormMode_Menu_Warning_C_BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.ExecuteUbergraph_UI_StormMode_Menu_Warning
struct UUI_StormMode_Menu_Warning_C_ExecuteUbergraph_UI_StormMode_Menu_Warning_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       K2Node_Event_Character_1;                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       K2Node_Event_Weapon_1;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1293[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Event_Widget_1;                             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SeedManager_C*                     K2Node_Event_SeedManager;                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       K2Node_Event_Character;                            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1298[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_Value;                                // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       K2Node_Event_Weapon;                               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_129B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_Slot;                                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UServerSaveGame_C*                     K2Node_Event_SaveGame;                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_SlotName;                             // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UMapState_C*                           K2Node_Event_MapStateSaveGame;                     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_SlotName_MapState;                    // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ERiposteTypes                     K2Node_Event_Riposte_1;                            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERiposteTypes                     K2Node_Event_Riposte;                              // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12A8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           K2Node_Event_Widget;                               // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_1;                // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


