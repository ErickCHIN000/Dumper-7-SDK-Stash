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

// 0x10 (0x10 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetCameraFocus
struct UUMG_CharacterCreation_C_GetCameraFocus_Params
{
public:
	struct FPreviewCameraSettingsEnum            CameraFocus;                                       // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetCosmeticData
struct UUMG_CharacterCreation_C_GetCosmeticData_Params
{
public:
	struct FCharacterCosmetics                   CosmeticData;                                      // 0x0(0x34)(Parm, OutParm, NoDestructor)
	uint8                                        Pad_505E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReqCreateCharacter                   CallFunc_GetCharacterResult_ReturnValue;           // 0x38(0x48)(None)
};

// 0x34 (0x34 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.SetInitialCosmetics
struct UUMG_CharacterCreation_C_SetInitialCosmetics_Params
{
public:
	struct FCharacterCosmetics                   InitialCosmetics;                                  // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x4C (0x4C - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetInitialCosmeticsForCategory
struct UUMG_CharacterCreation_C_GetInitialCosmeticsForCategory_Params
{
public:
	enum class ECharacterOptionCategory          CategoryType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5112[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataRowHandle       CosmeticDataRow;                                   // 0x4(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	enum class ECharacterOptionCategory          Temp_byte_Variable;                                // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_511E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x24(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x28(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_HashToName_ReturnValue;                   // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_MakeCharacterCreationData_ReturnValue;    // 0x34(0x18)(NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetSettingsWidgetForCategory
struct UUMG_CharacterCreation_C_GetSettingsWidgetForCategory_Params
{
public:
	enum class ECharacterOptionCategory          CategoryType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_CharacterSetting_Base_C*          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ECharacterOptionCategory          Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_CharacterSetting_Base_C*          Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UUMG_CharacterSetting_Base_C*          K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x235 (0x235 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.UpdateDefaultSelections
struct UUMG_CharacterCreation_C_UpdateDefaultSelections_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5349[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataRowHandle       CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow; // 0x8(0x18)(NoDestructor, HasGetValueTypeHash)
	class UUMG_ToggleButton_ColorSelect_C*       CallFunc_GetToggleButtonAtIndex_Button;            // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetToggleButtonAtIndex_Success;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_535F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ToggleButton_ColorSelect_C*       CallFunc_GetToggleButtonAtIndex_Button_1;          // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetToggleButtonAtIndex_Success_1;         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_536B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataRowHandle       CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_1; // 0x3C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_1;           // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_537F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ToggleButton_ColorSelect_C*       CallFunc_GetToggleButtonAtIndex_Button_2;          // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetToggleButtonAtIndex_Success_2;         // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_538B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataRowHandle       CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_2; // 0x64(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_2;           // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ToggleButton_ColorSelect_C*       CallFunc_GetToggleButtonAtIndex_Button_3;          // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetToggleButtonAtIndex_Success_3;         // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataRowHandle       CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_3; // 0x8C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_4; // 0xA4(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_3;           // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_4;           // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0xBE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0xBF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRowHandle                            CallFunc_Array_Get_Item;                           // 0xC0(0x18)(NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_CastToCharacterCreationDataRowHandle_Paths; // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataRowHandle       CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue; // 0xDC(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationData                CallFunc_GetCharacterCreationDataStruct_CharacterCreationData; // 0xF8(0x128)(None)
	enum class EValid                            CallFunc_GetCharacterCreationDataStruct_Paths;     // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x221(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x222(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x223(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x224(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x225(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x226(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_540E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x22C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x22D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_541C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.OnCharacterCosmeticsUpdated
struct UUMG_CharacterCreation_C_OnCharacterCosmeticsUpdated_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileCharacter               UpdatedCharacter;                                  // 0x8(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x168 (0x168 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.SendCosmeticUpdateRequest
struct UUMG_CharacterCreation_C_SendCosmeticUpdateRequest_Params
{
public:
	struct FReqCreateCharacter                   CallFunc_GetCharacterResult_ReturnValue;           // 0x0(0x48)(None)
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerState*                    K2Node_DynamicCast_AsIcarus_Player_State;          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_553C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetUserID_ReturnValue;                    // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FOnlineProfileCharacter               CallFunc_GetActiveCharacter_ReturnValue;           // 0x70(0xA0)(ConstParm)
	struct FReqUpdateCosmetics                   K2Node_MakeStruct_ReqUpdateCosmetics;              // 0x110(0x48)(None)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x33 (0x33 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.VerifyCustomisationOptionContexts
struct UUMG_CharacterCreation_C_VerifyCustomisationOptionContexts_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_ByteByte_ReturnValue;           // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_wildcard_Variable;                            // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UUMG_CharacterSetting_TextBase_C*> CallFunc_GetChildWidgetsOfClass_ChildWidgets;      // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_561D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_CharacterSetting_TextBase_C*      CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetSelectedColorFromPanel
struct UUMG_CharacterCreation_C_GetSelectedColorFromPanel_Params
{
public:
	class UPanelWidget*                          Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5702[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ToggleButton_ColorSelect_C*       K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select; // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5729[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_573D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_574B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x219 (0x219 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GenerateCustomisationOptions
struct UUMG_CharacterCreation_C_GenerateCustomisationOptions_Params
{
public:
	struct FCharacterCreationDataRowHandle       NewItem;                                           // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	enum class ECharacterOptionCategory          CosmeticCategory;                                  // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataEnum            CallFunc_IntToStruct_ReturnValue;                  // 0x28(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_StructToRowHandle_ReturnValue;            // 0x3C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow; // 0x54(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5906[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_CharacterSetting_Base_C*          CallFunc_GetSettingsWidgetForCategory_ReturnValue; // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UUMG_CharacterSetting_GridBase_C*      K2Node_DynamicCast_AsUMG_Character_Setting_Grid_Base; // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue; // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5911[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddOption_Index;                          // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ToggleButton_ColorSelect_C*       CallFunc_GetToggleButtonAtIndex_Button;            // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetToggleButtonAtIndex_Success;           // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_591D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_HashToName_ReturnValue;                   // 0x94(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterVoicesRowHandle             CallFunc_MakeCharacterVoices_ReturnValue;          // 0x9C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       CallFunc_GetInitialCosmeticsForCategory_CosmeticDataRow_1; // 0xB4(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5932[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_CharacterSetting_Base_C*          CallFunc_GetSettingsWidgetForCategory_ReturnValue_1; // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_593F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddOption_Index_1;                        // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue_1; // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xE3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_NumRows_ReturnValue;                      // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationData                CallFunc_GetCharacterCreationDataStruct_CharacterCreationData; // 0xE8(0x128)(None)
	enum class EValid                            CallFunc_GetCharacterCreationDataStruct_Paths;     // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x212(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDLCPackageInstalled_ReturnValue;        // 0x213(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_1;           // 0x214(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_2;           // 0x215(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x216(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x217(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x16B (0x16B - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.UpdateBodyType
struct UUMG_CharacterCreation_C_UpdateBodyType_Params
{
public:
	enum class ECharacterBodyType                NewBodyType;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow;            // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_CastToCharacterCreationDataRowHandle_Paths; // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A65[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataRowHandle       CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue; // 0x20(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationData                CallFunc_GetCharacterCreationDataStruct_CharacterCreationData; // 0x40(0x128)(None)
	enum class EValid                            CallFunc_GetCharacterCreationDataStruct_Paths;     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x16A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.SelectionUpdated
struct UUMG_CharacterCreation_C_SelectionUpdated_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AE2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPreviewCameraSettingsEnum            NewFocus;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_EnumEnum_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReqCreateCharacter                   CallFunc_GetCharacterResult_ReturnValue;           // 0x20(0x48)(None)
};

// 0x59 (0x59 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GridSelectionUpdated
struct UUMG_CharacterCreation_C_GridSelectionUpdated_Params
{
public:
	class UUMG_ToggleButtonBase_C*               ToggleButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReqCreateCharacter                   CallFunc_GetCharacterResult_ReturnValue;           // 0x8(0x48)(None)
	class UUMG_ToggleButton_ColorSelect_C*       K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select; // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3E0 (0x3E0 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetCharacterResult
struct UUMG_CharacterCreation_C_GetCharacterResult_Params
{
public:
	struct FReqCreateCharacter                   ReturnValue;                                       // 0x0(0x48)(Parm, OutParm, ReturnParm)
	bool                                         IsMale;                                            // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CA3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataRowHandle       SelectedFace;                                      // 0x4C(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow;            // 0x64(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow_1;          // 0x7C(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NameToHash_ReturnValue;                   // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NameToHash_ReturnValue_1;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow_2;          // 0x9C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow_3;          // 0xB4(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NameToHash_ReturnValue_2;                 // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NameToHash_ReturnValue_3;                 // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow_4;          // 0xD4(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow_5;          // 0xEC(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NameToHash_ReturnValue_4;                 // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NameToHash_ReturnValue_5;                 // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow_6;          // 0x10C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow_7;          // 0x124(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NameToHash_ReturnValue_6;                 // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NameToHash_ReturnValue_7;                 // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow_8;          // 0x144(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow_9;          // 0x15C(0x18)(NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_CastToCharacterCreationDataRowHandle_Paths; // 0x174(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataRowHandle       CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue; // 0x178(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationData                CallFunc_GetCharacterCreationDataStruct_CharacterCreationData; // 0x190(0x128)(None)
	enum class EValid                            CallFunc_GetCharacterCreationDataStruct_Paths;     // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CF4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_NameToHash_ReturnValue_8;                 // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D09[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow_10;         // 0x2C4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x2E0(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x2F8(0x18)(None)
	int32                                        CallFunc_NameToHash_ReturnValue_9;                 // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x318(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow_11;         // 0x328(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FRowHandle                            CallFunc_GetSelectedOption_SelectedRow_12;         // 0x340(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NameToHash_ReturnValue_10;                // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NameToHash_ReturnValue_11;                // 0x35C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCosmetics                   K2Node_MakeStruct_CharacterCosmetics;              // 0x360(0x34)(NoDestructor)
	uint8                                        Pad_5D2B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReqCreateCharacter                   K2Node_MakeStruct_ReqCreateCharacter;              // 0x398(0x48)(None)
};

// 0x1 (0x1 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.CreateCharacterResult
struct UUMG_CharacterCreation_C_CreateCharacterResult_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x72 (0x72 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.SendCharacterCreationRequest
struct UUMG_CharacterCreation_C_SendCharacterCreationRequest_Params
{
public:
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FReqCreateCharacter                   CallFunc_GetCharacterResult_ReturnValue;           // 0x10(0x48)(None)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x58(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.PreConstruct
struct UUMG_CharacterCreation_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UUMG_CharacterCreation_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.NameChanged
struct UUMG_CharacterCreation_C_NameChanged_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.ExecuteUbergraph_UMG_CharacterCreation
struct UUMG_CharacterCreation_C_ExecuteUbergraph_UMG_CharacterCreation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E87[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_Text;                           // 0x38(0x18)(ConstParm)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x70(0x18)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x90(0x18)(None)
};

// 0x4C (0x4C - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.RequestCosmeticsUpdate__DelegateSignature
struct UUMG_CharacterCreation_C_RequestCosmeticsUpdate__DelegateSignature_Params
{
public:
	struct FReqUpdateCosmetics                   Request;                                           // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Retries;                                           // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D (0x4D - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.CharacterCreationRequest__DelegateSignature
struct UUMG_CharacterCreation_C_CharacterCreationRequest__DelegateSignature_Params
{
public:
	struct FReqCreateCharacter                   CharacterResult;                                   // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        NumRetries;                                        // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SelectNewCharacter;                                // 0x4C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.CustomisationCompleted__DelegateSignature
struct UUMG_CharacterCreation_C_CustomisationCompleted__DelegateSignature_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileCharacter               NewCharacterInfo;                                  // 0x8(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x34 (0x34 - 0x0)
// Function UMG_CharacterCreation.UMG_CharacterCreation_C.CharacterCustomizationUpdated__DelegateSignature
struct UUMG_CharacterCreation_C_CharacterCustomizationUpdated__DelegateSignature_Params
{
public:
	struct FCharacterCosmetics                   CharacterData;                                     // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

}
}


