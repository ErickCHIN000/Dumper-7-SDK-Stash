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
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.GetSelectedCharacter
struct UUI_StormMode_Statistics_C_GetSelectedCharacter_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.GetVerticalIndex
struct UUI_StormMode_Statistics_C_GetVerticalIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x45 (0x45 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.SaveStormModeToDisk
struct UUI_StormMode_Statistics_C_SaveStormModeToDisk_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPrimaryUserIndex_ReturnValue;          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;      // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.ResetRunData
struct UUI_StormMode_Statistics_C_ResetRunData_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveStormModeToDisk_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50A[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStruct_StormModeRun_Data>     Temp_struct_Variable;                              // 0x8(0x10)(ReferenceParm, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x45 (0x45 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.AddTabs
struct UUI_StormMode_Statistics_C_AddTabs_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_545[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_StormMode_Statistics_PageButton_C* CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE0 (0xE0 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.PopulateData
struct UUI_StormMode_Statistics_C_PopulateData_Params
{
public:
	int32                                        Local_Index;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_592[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_StormMode_Statistics_PageButton_C* Local_PageButton;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_595[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_StormModeRun_Data             CallFunc_Array_Get_Item;                           // 0x20(0x68)(HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_SelectButton_self_CastInput;              // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_SelectButton_self_CastInput_1;            // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_StormMode_StatisticsButton_C*      CallFunc_Array_Get_Item_1;                         // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_StormMode_Statistics_PageButton_C* CallFunc_Array_Get_Item_2;                         // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SetNumber_Index;                          // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.GetRunData
struct UUI_StormMode_Statistics_C_GetRunData_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FCeil_ReturnValue;                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.PlayFadeOutAnim
struct UUI_StormMode_Statistics_C_PlayFadeOutAnim_Params
{
public:
	FDelegateProperty_                           OnAnimEnd;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.PlayFadeInAnim
struct UUI_StormMode_Statistics_C_PlayFadeInAnim_Params
{
public:
	FDelegateProperty_                           OnAnimEnd;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.GetButtonsArray
struct UUI_StormMode_Statistics_C_GetButtonsArray_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5EF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_StormMode_StatisticsButton_C*      K2Node_DynamicCast_AsUI_Storm_Mode_Statistics_Button; // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnCharacterHighlighted
struct UUI_StormMode_Statistics_C_OnCharacterHighlighted_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnWeaponHighlighted
struct UUI_StormMode_Statistics_C_OnWeaponHighlighted_Params
{
public:
	enum class EComboTypes                       Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.SetParentWidget
struct UUI_StormMode_Statistics_C_SetParentWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.SetSeedManager
struct UUI_StormMode_Statistics_C_SetSeedManager_Params
{
public:
	class ABP_SeedManager_C*                     SeedManager;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnCharacterSelected
struct UUI_StormMode_Statistics_C_OnCharacterSelected_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnSettingConfirmed
struct UUI_StormMode_Statistics_C_OnSettingConfirmed_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnWeaponSelected
struct UUI_StormMode_Statistics_C_OnWeaponSelected_Params
{
public:
	enum class EComboTypes                       Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnRiposteHighlighted
struct UUI_StormMode_Statistics_C_OnRiposteHighlighted_Params
{
public:
	enum class ERiposteTypes                     Riposte;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnRiposteSelected
struct UUI_StormMode_Statistics_C_OnRiposteSelected_Params
{
public:
	enum class ERiposteTypes                     Riposte;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnButtonHovered
struct UUI_StormMode_Statistics_C_OnButtonHovered_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.SetSaveGameRef
struct UUI_StormMode_Statistics_C_SetSaveGameRef_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerSaveGame_C*                     SaveGame;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UMapState_C*                           MapStateSaveGame;                                  // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName_MapState;                                 // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x7B (0x7B - 0x0)
// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.ExecuteUbergraph_UI_StormMode_Statistics
struct UUI_StormMode_Statistics_C_ExecuteUbergraph_UI_StormMode_Statistics_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       K2Node_Event_Weapon;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERiposteTypes                     K2Node_Event_Riposte_1;                            // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERiposteTypes                     K2Node_Event_Riposte;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_713[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           K2Node_Event_Widget;                               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_71F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_Value;                                // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       K2Node_Event_Character;                            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_725[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue_1;                      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SeedManager_C*                     K2Node_Event_SeedManager;                          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Event_Widget_1;                             // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_Slot;                                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UServerSaveGame_C*                     K2Node_Event_SaveGame;                             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_SlotName;                             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UMapState_C*                           K2Node_Event_MapStateSaveGame;                     // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_SlotName_MapState;                    // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EComboTypes                       K2Node_Event_Weapon_1;                             // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       K2Node_Event_Character_1;                          // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ResetRunData_Success;                     // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


