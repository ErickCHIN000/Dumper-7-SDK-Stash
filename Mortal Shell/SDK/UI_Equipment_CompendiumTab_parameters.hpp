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

// 0x21 (0x21 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.Tutorial_FirstTempleUnlockState
struct UUI_Equipment_CompendiumTab_C_Tutorial_FirstTempleUnlockState_Params
{
public:
	enum class Enum_StormModeTutType             Tut;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_1;            // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTutorialUnlocked_Unlocked_;             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsTutorialUnlocked_Unlocked__1;           // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B22[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_2;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTutorialUnlocked_Unlocked__2;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.Tutorial_FirstGlandUnlockState
struct UUI_Equipment_CompendiumTab_C_Tutorial_FirstGlandUnlockState_Params
{
public:
	enum class Enum_StormModeTutType             Tut;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_1;            // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTutorialUnlocked_Unlocked_;             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsTutorialUnlocked_Unlocked__1;           // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B73[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_2;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTutorialUnlocked_Unlocked__2;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x404 (0x404 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.PopulateStormModeTut
struct UUI_Equipment_CompendiumTab_C_PopulateStormModeTut_Params
{
public:
	int32                                        Local_IndexButton;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Local_TutID;                                       // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C52[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUpgradeDisplayInfo                   Local_Row;                                         // 0x10(0xC9)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_1C6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Compendium_Entry_C*                Local_Entry;                                       // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_Index;                                       // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C73[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Local_TutorialTitle;                               // 0xF0(0x18)(Edit, BlueprintVisible)
	class UUI_Compendium_Entry_C*                CallFunc_Create_ReturnValue;                       // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Compendium_Entry_C*                CallFunc_Create_ReturnValue_1;                     // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C96[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTutorialUnlocked_Unlocked_;             // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C9C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUpgradeDisplayInfo                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x130(0xC9)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_1CA2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_StormModeTutType             CallFunc_Tutorial_FirstGlandUnlockState_Tut;       // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormModeTutType             CallFunc_Tutorial_FirstTempleUnlockState_Tut;      // 0x202(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x203(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x204(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTutorialUnlocked_Unlocked__1;           // 0x214(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CC3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUpgradeDisplayInfo                   CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x218(0xC9)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_1CC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CCC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x2EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x2F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTutorialUnlocked_Unlocked__2;           // 0x2FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUpgradeDisplayInfo                   CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x300(0xC9)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_1CDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CE3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x3D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x3D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x3E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CF0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Compendium_Entry_C*                CallFunc_Create_ReturnValue_2;                     // 0x3E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x3F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D0C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_2;      // 0x3F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x271 (0x271 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.HandleNewWeapon
struct UUI_Equipment_CompendiumTab_C_HandleNewWeapon_Params
{
public:
	struct FInventoryItem                        Item;                                              // 0x0(0x132)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	uint8                                        Pad_1D90[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        ReturnValue;                                       // 0x138(0x132)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	uint8                                        Pad_1D98[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.RemoveAxeWeapon
struct UUI_Equipment_CompendiumTab_C_RemoveAxeWeapon_Params
{
public:
	TArray<class FName>                          RowNames;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x10(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x81 (0x81 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.HandleStormModeItems
struct UUI_Equipment_CompendiumTab_C_HandleStormModeItems_Params
{
public:
	TArray<class FName>                          RowNames;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<class FName>                          Local_Remove;                                      // 0x10(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E74[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x30(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E80[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E8A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_MakeArray_Array_1;                          // 0x70(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_StormModeContentIsEnabled_Enabled_;       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.ShouldCheckItemName
struct UUI_Equipment_CompendiumTab_C_ShouldCheckItemName_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  ID;                                                // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text_Out;                                          // 0x20(0x18)(Parm, OutParm)
	class FName                                  Local_ID;                                          // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Local_Text;                                        // 0x40(0x18)(Edit, BlueprintVisible)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F21[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_CheckItemName_ReturnValue;                // 0x60(0x18)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_3;        // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_4;        // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x7E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x7F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x33 (0x33 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.HandleScale
struct UUI_Equipment_CompendiumTab_C_HandleScale_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_HUD_Size                     CallFunc_GetUIScale_ReturnValue;                   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC1 (0xC1 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.Harden_Tut
struct UUI_Equipment_CompendiumTab_C_Harden_Tut_Params
{
public:
	class FText                                  Right;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Left;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Index;                                             // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Upgrade;                                           // 0x34(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FFB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue_Right;                                 // 0x40(0x18)(Parm, OutParm)
	class FText                                  ReturnValue_Left;                                  // 0x58(0x18)(Parm, OutParm)
	int32                                        Local_Index;                                       // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2009[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Local_Left;                                        // 0x78(0x18)(Edit, BlueprintVisible)
	class FText                                  Local_Right;                                       // 0x90(0x18)(Edit, BlueprintVisible)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_201B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentCulture_ReturnValue;            // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.GetTutorialsRowNames
struct UUI_Equipment_CompendiumTab_C_GetTutorialsRowNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2071[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_Select_Default;                             // 0x18(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.SetGameInstance
struct UUI_Equipment_CompendiumTab_C_SetGameInstance_Params
{
public:
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.GetItemEffectVisibility
struct UUI_Equipment_CompendiumTab_C_GetItemEffectVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3E (0x3E - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.RemoveUnusedItems
struct UUI_Equipment_CompendiumTab_C_RemoveUnusedItems_Params
{
public:
	TArray<class FName>                          RowNames;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_217A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x20(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A8 (0x1A8 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.UpdateLoreDetails
struct UUI_Equipment_CompendiumTab_C_UpdateLoreDetails_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Local_ID;                                          // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2258[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Local_Title;                                       // 0x10(0x18)(Edit, BlueprintVisible)
	bool                                         Local_Unlocked;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_225F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_Index;                                       // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_226B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x38(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2274[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x58(0x18)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_227B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item;                           // 0x78(0x18)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface;        // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StormMode_HasLoreEntry_ReturnValue;       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item_1;                         // 0xB8(0x18)(None)
	class FName                                  CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName; // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUpgradeUnlocked_bUnlocked;              // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22AF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLore                                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x100(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x158(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x170(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0x188(0x18)(None)
	class UUI_Compendium_Entry_C*                CallFunc_Array_Get_Item_2;                         // 0x1A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.GetLoreTitle
struct UUI_Equipment_CompendiumTab_C_GetLoreTitle_Params
{
public:
	class FString                                Title;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Info;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm)
	class FString                                Local_Title;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x58(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2393[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_239A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Mid_ReturnValue;                          // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_TrimTrailing_ReturnValue;                 // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_LeftChop_ReturnValue;                     // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Right_ReturnValue;                        // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23BA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xF0(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.RemoveHadernContent
struct UUI_Equipment_CompendiumTab_C_RemoveHadernContent_Params
{
public:
	TArray<class FName>                          RowNames;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsHadernContentEnabled_ReturnValue;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_240D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x14(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.UpdateScrollingTime
struct UUI_Equipment_CompendiumTab_C_UpdateScrollingTime_Params
{
public:
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.SetItemArt
struct UUI_Equipment_CompendiumTab_C_SetItemArt_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Texture;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Local_Texture;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.SetItemDescription
struct UUI_Equipment_CompendiumTab_C_SetItemDescription_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Discovered;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2496[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x38(0x18)(None)
};

// 0x60 (0x60 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.SetItemEffects
struct UUI_Equipment_CompendiumTab_C_SetItemEffects_Params
{
public:
	class FText                                  Effects;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Discovered;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x38(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.SetItemName
struct UUI_Equipment_CompendiumTab_C_SetItemName_Params
{
public:
	bool                                         Discovered;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_251D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  ID;                                                // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_ShouldCheckItemName_Text_Out;             // 0x28(0x18)(None)
};

// 0x34 (0x34 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.SetItemArtColor
struct UUI_Equipment_CompendiumTab_C_SetItemArtColor_Params
{
public:
	bool                                         Discovered;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_255E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.SetItemArtEffect
struct UUI_Equipment_CompendiumTab_C_SetItemArtEffect_Params
{
public:
	bool                                         Discovered;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25A0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D0 (0x2D0 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.UpdateTutorialDetails
struct UUI_Equipment_CompendiumTab_C_UpdateTutorialDetails_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Unlocked;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_ButtonIndex;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Local_Title;                                       // 0x10(0x18)(Edit, BlueprintVisible)
	TArray<struct FStruct_ControllerButton>      Local_Buttons;                                     // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UTexture2D*                            Local_Image;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Local_Tut_Desc;                                    // 0x40(0x18)(Edit, BlueprintVisible)
	bool                                         Local_Unlocked;                                    // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_Index;                                       // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x60(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x80(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                CallFunc_Create_ReturnValue;                       // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26FF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_ControllerButton              CallFunc_Array_Get_Item;                           // 0xC0(0x90)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2707[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x15C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_270B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetTutorialsRowNames_ReturnValue;         // 0x170(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Harden_Tut_ReturnValue_Right;             // 0x188(0x18)(None)
	class FText                                  CallFunc_Harden_Tut_ReturnValue_Left;              // 0x1A0(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0x1B8(0x18)(None)
	class FText                                  K2Node_Select_Default_2;                           // 0x1D0(0x18)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x1EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_272F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x1F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2733[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUpgradeDisplayInfo                   CallFunc_Array_Get_Item_2;                         // 0x200(0xC9)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2736[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.SetGameplayPC
struct UUI_Equipment_CompendiumTab_C_SetGameplayPC_Params
{
public:
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.SetLastItemDiscovered
struct UUI_Equipment_CompendiumTab_C_SetLastItemDiscovered_Params
{
public:
	int32                                        Local_Index;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_ItemFound;                                   // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2894[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Compendium_Entry_C*                Local_Entry;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Compendium_Entry_C*                CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.GetItemDiscovered
struct UUI_Equipment_CompendiumTab_C_GetItemDiscovered_Params
{
public:
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.SetItemDiscovered
struct UUI_Equipment_CompendiumTab_C_SetItemDiscovered_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_298A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2991[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x28(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.NavTabPrevious_Listen
struct UUI_Equipment_CompendiumTab_C_NavTabPrevious_Listen_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.NavTabNext_Listen
struct UUI_Equipment_CompendiumTab_C_NavTabNext_Listen_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.NavClose_Listen
struct UUI_Equipment_CompendiumTab_C_NavClose_Listen_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.Get_HorizontalBox_Items_Discovered_Visibility
struct UUI_Equipment_CompendiumTab_C_Get_HorizontalBox_Items_Discovered_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.NavTopClick
struct UUI_Equipment_CompendiumTab_C_NavTopClick_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.NavTopUnHover
struct UUI_Equipment_CompendiumTab_C_NavTopUnHover_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ADA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_MainMenu_Button_C*>         CallFunc_GetTabButtons_Array;                      // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ADD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.GetTabButtons
struct UUI_Equipment_CompendiumTab_C_GetTabButtons_Params
{
public:
	TArray<class UUI_MainMenu_Button_C*>         Array;                                             // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UUI_MainMenu_Button_C*>         K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.NavTabHover
struct UUI_Equipment_CompendiumTab_C_NavTabHover_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Local_Button;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B34[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_MainMenu_Button_C*>         CallFunc_GetTabButtons_Array;                      // 0x20(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B36[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2C8 (0x2C8 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.PopulateLore
struct UUI_Equipment_CompendiumTab_C_PopulateLore_Params
{
public:
	class FText                                  Local_StormModeEntryText;                          // 0x0(0x18)(Edit, BlueprintVisible)
	class FText                                  Local_StormModeEntryTitle;                         // 0x18(0x18)(Edit, BlueprintVisible)
	bool                                         Local_StormModeEntryUnlocked;                      // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Local_StormModeLoreID;                             // 0x34(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Local_RowName;                                     // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_Counter;                                     // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Compendium_Entry_C*                CallFunc_Create_ReturnValue;                       // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C8E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Array_Get_Item;                           // 0x98(0x18)(None)
	class FText                                  CallFunc_Array_Get_Item_1;                         // 0xB0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLoreTitle_ReturnValue;                 // 0xD8(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface;        // 0x100(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Compendium_Entry_C*                CallFunc_Create_ReturnValue_1;                     // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StormMode_HasLoreEntry_ReturnValue;       // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CAC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName; // 0x124(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CAE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x164(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUpgradeUnlocked_bUnlocked;              // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUpgradeUnlocked_bUnlocked_1;            // 0x16D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CC3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLore                                 CallFunc_Array_Get_Item_2;                         // 0x170(0x30)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CD0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLoreTitle_ReturnValue_1;               // 0x1D0(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item_3;                         // 0x1EC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CEA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Compendium_Entry_C*                CallFunc_Create_ReturnValue_2;                     // 0x208(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_4;                         // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x218(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLore                                 CallFunc_Array_Get_Item_5;                         // 0x228(0x30)(HasGetValueTypeHash)
	class UUI_Compendium_Entry_C*                CallFunc_Array_Get_Item_6;                         // 0x258(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_4;          // 0x260(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_5;          // 0x270(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLoreTitle_ReturnValue_2;               // 0x288(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D0E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x2A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x2B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_2;      // 0x2C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A4 (0x1A4 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.GetLore
struct UUI_Equipment_CompendiumTab_C_GetLore_Params
{
public:
	TArray<class FName>                          Local_Inscription_Demo;                            // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FName>                          Local_Etchings;                                    // 0x10(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FName>                          Local_Inscriptions;                                // 0x20(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLore                                 Local_Row;                                         // 0x30(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                  Local_RowName;                                     // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x68(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class FName>                          K2Node_MakeArray_Array_1;                          // 0x78(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class FName>                          K2Node_MakeArray_Array_2;                          // 0x88(0x10)(ReferenceParm, HasGetValueTypeHash)
	struct FLore                                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x98(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E2E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLore                                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0xD0(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLore                                 CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x120(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x15C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x16C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x174(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item_2;                         // 0x184(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E6C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x26C (0x26C - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.PopulateTutorials
struct UUI_Equipment_CompendiumTab_C_PopulateTutorials_Params
{
public:
	bool                                         Local_AlwaysUnlocked;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Local_TutorialTitle;                               // 0x8(0x18)(Edit, BlueprintVisible)
	struct FUpgradeDisplayInfo                   Local_Row;                                         // 0x20(0xC9)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2F49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Compendium_Entry_C*                Local_Entry;                                       // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F4E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F5A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Compendium_Entry_C*                CallFunc_Create_ReturnValue;                       // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetTutorialsRowNames_ReturnValue;         // 0x130(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_InRange_IntInt_ReturnValue;               // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_InRange_IntInt_ReturnValue_1;             // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F74[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x144(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTutorialUnlocked_Unlocked_;             // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_5;                              // 0x14D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0x14E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F81[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          K2Node_Select_Default_1;                           // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_InRange_IntInt_ReturnValue_2;             // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_InRange_IntInt_ReturnValue_3;             // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F90[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          K2Node_Select_Default_2;                           // 0x160(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          K2Node_Select_Default_3;                           // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUpgradeDisplayInfo                   CallFunc_Array_Get_Item_1;                         // 0x170(0xC9)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2F9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          K2Node_Select_Default_4;                           // 0x240(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x248(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FA6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Compendium_Entry_C*                CallFunc_Array_Get_Item_2;                         // 0x258(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FB0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.GetTutorials
struct UUI_Equipment_CompendiumTab_C_GetTutorials_Params
{
public:
	TArray<class FName>                          Local_StormModeTut;                                // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUpgradeDisplayInfo                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x38(0xC9)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3033[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3038[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x198 (0x198 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.GetItemDescription
struct UUI_Equipment_CompendiumTab_C_GetItemDescription_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Description;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        TimesUsedToUnlockEffectDescription;                // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  EffectDescription;                                 // 0x28(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  ExtendedDescription;                               // 0x40(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  EffectDescriptionWithFamiliarity;                  // 0x58(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  ItemEffects;                                       // 0x70(0x18)(Parm, OutParm)
	class FText                                  ItemDescription;                                   // 0x88(0x18)(Parm, OutParm)
	int32                                        Familiarity;                                       // 0xA0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_Familiarity;                                 // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Local_DescWithFami;                                // 0xA8(0x18)(Edit, BlueprintVisible)
	class FText                                  Local_ExtDesc;                                     // 0xC0(0x18)(Edit, BlueprintVisible)
	class FText                                  Local_EffectDesc;                                  // 0xD8(0x18)(Edit, BlueprintVisible)
	int32                                        Local_TimesUsed;                                   // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Local_Description;                                 // 0xF8(0x18)(Edit, BlueprintVisible)
	class FName                                  Local_ID;                                          // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetItemMaxFamiliarity_MaxFamiliarity;     // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_CreateExtendedDescription_ReturnValue;    // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateExtendedDescription_OutputPin;      // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetItemFamiliarity_Value;                 // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_CreateItemEffectDescription_ReturnValue;  // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_ItemDetailBuildString_ItemEffects;        // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_ItemDetailBuildString_ItemDescription;    // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x168(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x180(0x18)(None)
};

// 0x214 (0x214 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.UpdateItemDetails
struct UUI_Equipment_CompendiumTab_C_UpdateItemDetails_Params
{
public:
	bool                                         Discovered;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_314D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        ID;                                                // 0x8(0x132)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_3151[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Local_IsKeyItem;                                   // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemType                         Local_ItemType;                                    // 0x141(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3155[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_Familiarity;                                 // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Local_ItemDescription;                             // 0x148(0x18)(Edit, BlueprintVisible)
	class FText                                  Local_ItemEffects;                                 // 0x160(0x18)(Edit, BlueprintVisible)
	class FText                                  Local_Name;                                        // 0x178(0x18)(Edit, BlueprintVisible)
	class UTexture2D*                            Local_Texture;                                     // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Local_ID;                                          // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_Discovered;                                  // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_315E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_StartsWith_ReturnValue;                   // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1BB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3165[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetItemMaxFamiliarity_MaxFamiliarity;     // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetItemFamiliarity_Value;                 // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAverageFamiliarity_ReturnValue;        // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_316C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_1;                           // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_316D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetItemDescription_ItemEffects;           // 0x1E0(0x18)(None)
	class FText                                  CallFunc_GetItemDescription_ItemDescription;       // 0x1F8(0x18)(None)
	int32                                        CallFunc_GetItemDescription_Familiarity;           // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.NavUpListen
struct UUI_Equipment_CompendiumTab_C_NavUpListen_Params
{
public:
	FDelegateProperty_                           Pressed;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	FDelegateProperty_                           Released;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.NavDownListen
struct UUI_Equipment_CompendiumTab_C_NavDownListen_Params
{
public:
	FDelegateProperty_                           Pressed;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	FDelegateProperty_                           Released;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.NavUp
struct UUI_Equipment_CompendiumTab_C_NavUp_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_Compendium_Entry_C*>        K2Node_Select_Default_1;                           // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.NavSet
struct UUI_Equipment_CompendiumTab_C_NavSet_Params
{
public:
	bool                                         CustomIndex;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsHovering;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SkipSound;                                         // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_321F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IndexTab;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_Compendium_Entry_C*>        Local_Entries;                                     // 0x8(0x10)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Local_SkipSound;                                   // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_IsHovering;                                  // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3226[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_Index;                                       // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_CustomIndex;                                 // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3227[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Compendium_Entry_C*                CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Compendium_Entry_C*                CallFunc_Array_Get_Item_1;                         // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3233[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Compendium_Entry_C*                CallFunc_Array_Get_Item_2;                         // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3237[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Compendium_Entry_C*                CallFunc_Array_Get_Item_3;                         // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_323C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Compendium_Entry_C*                CallFunc_Array_Get_Item_4;                         // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3244[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Compendium_Entry_C*                CallFunc_Array_Get_Item_5;                         // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.NavDown
struct UUI_Equipment_CompendiumTab_C_NavDown_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3287[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_Compendium_Entry_C*>        K2Node_Select_Default_1;                           // 0x18(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3293[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4F8 (0x4F8 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.PopulateItems
struct UUI_Equipment_CompendiumTab_C_PopulateItems_Params
{
public:
	struct FInventoryItem                        Local_Item;                                        // 0x0(0x132)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_333F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_Counter;                                     // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemType                         Local_Type;                                        // 0x13C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3342[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Local_Name;                                        // 0x140(0x18)(Edit, BlueprintVisible)
	class FName                                  Local_ID;                                          // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       Local_Items_Entries;                               // 0x160(0x10)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Compendium_Entry_C*                CallFunc_Create_ReturnValue;                       // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Compendium_Entry_C*                CallFunc_Array_Get_Item;                           // 0x1A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3356[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_ShouldCheckItemName_Text_Out;             // 0x1B0(0x18)(None)
	enum class EItemType                         Temp_byte_Variable;                                // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3359[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_335E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x1D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3362[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Compendium_Entry_C*                K2Node_DynamicCast_AsUI_Compendium_Entry;          // 0x1E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3369[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x1F8(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0x208(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_2;             // 0x218(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_3;             // 0x228(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_4;             // 0x238(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_5;             // 0x248(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_2;                         // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3373[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x268(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_3374[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x3A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_HandleNewWeapon_ReturnValue;              // 0x3A8(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_3381[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x4E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3385[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          K2Node_Select_Default;                             // 0x4E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x4F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.GetItems
struct UUI_Equipment_CompendiumTab_C_GetItems_Params
{
public:
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.NavTabNext
struct UUI_Equipment_CompendiumTab_C_NavTabNext_Params
{
public:
	int32                                        Local_Index_Temp;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.NavTabPrevious
struct UUI_Equipment_CompendiumTab_C_NavTabPrevious_Params
{
public:
	int32                                        Local_Index_Temp;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3403[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.UpdateTopNav
struct UUI_Equipment_CompendiumTab_C_UpdateTopNav_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_IndexTab;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3438[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_MainMenu_Button_C*>         CallFunc_GetTabButtons_Array;                      // 0x18(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_343E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCheckBox*>                     K2Node_MakeArray_Array;                            // 0x38(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3443[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCheckBox*                             CallFunc_Array_Get_Item_1;                         // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.UpdateSwitcher
struct UUI_Equipment_CompendiumTab_C_UpdateSwitcher_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.OnButtonHovered
struct UUI_Equipment_CompendiumTab_C_OnButtonHovered_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.BndEvt__UI_ControllerButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
struct UUI_Equipment_CompendiumTab_C_BndEvt__UI_ControllerButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
{
public:
	class UUI_ControllerButton_C*                ControllerButton;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.BndEvt__UI_Button_Lore_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
struct UUI_Equipment_CompendiumTab_C_BndEvt__UI_Button_Lore_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.BndEvt__UI_Button_Items_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
struct UUI_Equipment_CompendiumTab_C_BndEvt__UI_Button_Items_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.BndEvt__UI_Button_Tutorials_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
struct UUI_Equipment_CompendiumTab_C_BndEvt__UI_Button_Tutorials_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.BndEvt__UI_Button_Lore_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
struct UUI_Equipment_CompendiumTab_C_BndEvt__UI_Button_Lore_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.BndEvt__UI_Button_Items_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
struct UUI_Equipment_CompendiumTab_C_BndEvt__UI_Button_Items_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.BndEvt__UI_Button_Tutorials_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
struct UUI_Equipment_CompendiumTab_C_BndEvt__UI_Button_Tutorials_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3511[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.BndEvt__UI_Button_Lore_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature
struct UUI_Equipment_CompendiumTab_C_BndEvt__UI_Button_Lore_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3527[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.BndEvt__UI_Button_Items_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature
struct UUI_Equipment_CompendiumTab_C_BndEvt__UI_Button_Items_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3533[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.BndEvt__UI_Button_Tutorials_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature
struct UUI_Equipment_CompendiumTab_C_BndEvt__UI_Button_Tutorials_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3540[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function UI_Equipment_CompendiumTab.UI_Equipment_CompendiumTab_C.ExecuteUbergraph_UI_Equipment_CompendiumTab
struct UUI_Equipment_CompendiumTab_C_ExecuteUbergraph_UI_Equipment_CompendiumTab_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_CustomEvent_Index;                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class UUI_ControllerButton_C*                K2Node_ComponentBoundEvent_ControllerButton;       // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_8;                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3588[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_8;               // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_7;                // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_7;               // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_6;                // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3591[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_6;               // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x70(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_ComponentBoundEvent_Index_5;                // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3593[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_5;               // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_4;                // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3599[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_4;               // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_3;                // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_3;               // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_ComponentBoundEvent_Index_2;                // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_2;               // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_1;                // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_1;               // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget;                 // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0xF0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x100(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_UI_HoldTimer_ReturnValue;                 // 0x110(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x118(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x128(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_UI_HoldTimer_ReturnValue_1;               // 0x138(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


