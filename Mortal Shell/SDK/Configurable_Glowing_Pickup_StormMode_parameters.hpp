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

// 0xD0 (0xD0 - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.AskRandomDarkFormUpgrade
struct AConfigurable_Glowing_Pickup_StormMode_C_AskRandomDarkFormUpgrade_Params
{
public:
	struct FStruct_Rune                          Rune;                                              // 0x0(0xD0)(Parm, OutParm, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.AskRandomWeaponUpgrade
struct AConfigurable_Glowing_Pickup_StormMode_C_AskRandomWeaponUpgrade_Params
{
public:
	enum class Enum_Rune_Tier                    Tier;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          Upgrade;                                           // 0x8(0xD0)(Parm, OutParm, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.AskRandomUpgrade
struct AConfigurable_Glowing_Pickup_StormMode_C_AskRandomUpgrade_Params
{
public:
	struct FStruct_Rune                          Upgrade;                                           // 0x0(0xD0)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.CheckForPermanentUpgrades
struct AConfigurable_Glowing_Pickup_StormMode_C_CheckForPermanentUpgrades_Params
{
public:
	enum class EArmorTypes                       Local_SelectedShell;                               // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_HasSelectedShell;                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2932[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2942[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_1;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2958[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_2;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StormMode_GetSelectedShell_HasSelected;   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_StormMode_GetSelectedShell_Shell;         // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_1;            // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_298B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Select_Default;                             // 0x48(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPermanentUpgradeRankLevel_Level;       // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_1;                           // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_2;                           // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.GetUnidentifiedText
struct AConfigurable_Glowing_Pickup_StormMode_C_GetUnidentifiedText_Params
{
public:
	class FText                                  UnidentifiedText;                                  // 0x0(0x18)(Parm, OutParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x18(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x70(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC0(0x18)(None)
};

// 0xD8 (0xD8 - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.GetUseActionText
struct AConfigurable_Glowing_Pickup_StormMode_C_GetUseActionText_Params
{
public:
	class FText                                  ActionText;                                        // 0x0(0x18)(Parm, OutParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x18(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x70(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC0(0x18)(None)
};

// 0x2B4 (0x2B4 - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.AddRandomItemToInventory
struct AConfigurable_Glowing_Pickup_StormMode_C_AddRandomItemToInventory_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AE4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_Slot;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItem                        Local_Item;                                        // 0x10(0x132)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_2AEB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Local_Success;                                     // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         Local_GameplayPC;                                  // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     Local_Controller;                                  // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AF7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         K2Node_DynamicCast_AsGameplay_PC;                  // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryToAddItemToInventory_Success;          // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AFD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_TryToAddItemToInventory_OutItem;          // 0x178(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_2B04[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_TryToAddItemToInventory_AddedToSlot;      // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x75 (0x75 - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.OnActorUsed
struct AConfigurable_Glowing_Pickup_StormMode_C_OnActorUsed_Params
{
public:
	class APlayerController*                     Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_ItemIndex;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     Local_Controller;                                  // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetInventoryItemSimple_Success;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AddRandomItemToInventory_Success;         // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B70[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class Enum_StormModeItemList>    CallFunc_Map_Keys_Keys;                            // 0x28(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<float>                                CallFunc_Map_Values_Values;                        // 0x38(0x10)(ReferenceParm, HasGetValueTypeHash)
	enum class Enum_StormModeItemList            CallFunc_Array_Get_Item;                           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B7C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Randomizer_FloatToInt_Result;             // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<float>                                K2Node_MakeArray_Array;                            // 0x60(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Randomizer_FloatToInt_Result_1;           // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x141 (0x141 - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.GetInventoryItemSimple
struct AConfigurable_Glowing_Pickup_StormMode_C_GetInventoryItemSimple_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BCD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x8(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_2BD2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.SetPillarType
struct AConfigurable_Glowing_Pickup_StormMode_C_SetPillarType_Params
{
public:
	enum class Enum_PillarType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.ReRandomizeEnemy
struct AConfigurable_Glowing_Pickup_StormMode_C_ReRandomizeEnemy_Params
{
public:
	int32                                        NewSeed;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delay;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.InitiliazeSeed
struct AConfigurable_Glowing_Pickup_StormMode_C_InitiliazeSeed_Params
{
public:
	int32                                        SeedID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InitialSeed;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_0_OnUpgradesSelected__DelegateSignature
struct AConfigurable_Glowing_Pickup_StormMode_C_BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_0_OnUpgradesSelected__DelegateSignature_Params
{
public:
	enum class Enum_Rune_Category_Randomizer     Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CD2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ID;                                                // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.SetObjectMainChance%
struct AConfigurable_Glowing_Pickup_StormMode_C_SetObjectMainChance__Params
{
public:
	float                                        Rune_Chance;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Item_Chance;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x66 (0x66 - 0x0)
// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.ExecuteUbergraph_Configurable_Glowing_Pickup_StormMode
struct AConfigurable_Glowing_Pickup_StormMode_C_ExecuteUbergraph_Configurable_Glowing_Pickup_StormMode_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DDC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface;        // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_PillarType                   K2Node_Event_Type;                                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DF7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_NewSeed;                              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_SeedID;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InitialSeed;                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMyNameInChangedSet_ReturnValue;         // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Rune_Category_Randomizer     K2Node_ComponentBoundEvent_Category;               // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E1D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_ComponentBoundEvent_ID;                     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Rune_Chance;                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Item_Chance;                          // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character;     // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


