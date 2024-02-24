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

// 0x18 (0x18 - 0x0)
// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.GetEnterButtons
struct UWid_BuildSystem_Main_C_GetEnterButtons_Params
{
public:
	class UWid_MainMenu_Buttons_Entry_C*         EnterBuilding;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         EnterEditing;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         EnterBuildingGamepad;                              // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.GetBackButtons
struct UWid_BuildSystem_Main_C_GetBackButtons_Params
{
public:
	class UWid_MainMenu_Buttons_Entry_C*         BackBuilding;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         BackEditing;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         BackBuildingGamepad;                               // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.SetBuildingButtonState
struct UWid_BuildSystem_Main_C_SetBuildingButtonState_Params
{
public:
	bool                                         bInIsEnabled;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsInit;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PlayAnim;                                          // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1793[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUMGSequencePlayMode              Temp_byte_Variable;                                // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              Temp_byte_Variable_1;                              // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              K2Node_Select_Default;                             // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         CallFunc_GetEnterButtons_EnterBuilding;            // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         CallFunc_GetEnterButtons_EnterEditing;             // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         CallFunc_GetEnterButtons_EnterBuildingGamepad;     // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.SetBackButtonsState
struct UWid_BuildSystem_Main_C_SetBackButtonsState_Params
{
public:
	bool                                         bInIsEnabled;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsInit;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PlayAnim;                                          // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUMGSequencePlayMode              Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_182A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUMGSequencePlayMode              Temp_byte_Variable_1;                              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1834[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MainMenu_Buttons_Entry_C*         CallFunc_GetBackButtons_BackBuilding;              // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         CallFunc_GetBackButtons_BackEditing;               // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         CallFunc_GetBackButtons_BackBuildingGamepad;       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              K2Node_Select_Default;                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.GetIsInItems
struct UWid_BuildSystem_Main_C_GetIsInItems_Params
{
public:
	bool                                         IsInItems;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.ChangeState
struct UWid_BuildSystem_Main_C_ChangeState_Params
{
public:
	TScriptInterface<class Ibi_BuildSystemUIState_C> NewState;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.ShowCatalogs
struct UWid_BuildSystem_Main_C_ShowCatalogs_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.SetBackInputEnabled
struct UWid_BuildSystem_Main_C_SetBackInputEnabled_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.SetEnterActionEnabled
struct UWid_BuildSystem_Main_C_SetEnterActionEnabled_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x180 (0x180 - 0x0)
// Function wid_BuildSystem_Main.wid_BuildSystem_Main_C.ExecuteUbergraph_wid_BuildSystem_Main
struct UWid_BuildSystem_Main_C_ExecuteUbergraph_wid_BuildSystem_Main_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A68[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGHUD_C*                              CallFunc_GetCGHud_AsCGHUD;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x40(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x50(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x60(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x70(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x80(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x90(0x10)(ZeroConstructor, NoDestructor)
	TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_ChangeState_NewState_CastInput;           // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_ChangeState_NewState_CastInput_1;         // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_ChangeState_NewState_CastInput_2;         // 0xC8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Show;                           // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_InputDPadLeft_self_CastInput;             // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_InputDPadRight_self_CastInput;            // 0xF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_InputDPadUp_self_CastInput;               // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class Ibi_BuildSystemUIState_C> CallFunc_InputDPadDown_self_CastInput;             // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4; // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsEnabled_1;                    // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_IsEnabled;                      // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AA9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MainMenu_Buttons_Entry_C*         CallFunc_GetBackButtons_BackBuilding;              // 0x148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         CallFunc_GetBackButtons_BackEditing;               // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         CallFunc_GetBackButtons_BackBuildingGamepad;       // 0x158(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         CallFunc_GetEnterButtons_EnterBuilding;            // 0x160(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         CallFunc_GetEnterButtons_EnterEditing;             // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         CallFunc_GetEnterButtons_EnterBuildingGamepad;     // 0x170(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGHUD_C*                              CallFunc_GetCGHud_AsCGHUD_1;                       // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


