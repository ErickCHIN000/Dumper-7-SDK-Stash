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

// 0x70 (0x70 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.DeletePlayerTrackerSave
struct UUMG_CharacterInitialization_C_DeletePlayerTrackerSave_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AfterCreate;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SaveName;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DeleteGameInSlot_ReturnValue;             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3312[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetIcarusPlayerId_ReturnValue;            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPlayerTrackerSaveFormat_ReturnValue;   // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xA1 (0xA1 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.ResumeCurrentActiveProspect
struct UUMG_CharacterInitialization_C_ResumeCurrentActiveProspect_Params
{
public:
	struct FProspectInfo                         ProspectInfo;                                      // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerControllerSpace_C*     K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space; // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.CharacterCosmeticsUpdate
struct UUMG_CharacterInitialization_C_CharacterCosmeticsUpdate_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_342F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileCharacter               UpdatedCharacter;                                  // 0x8(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.CharacterCreationResult
struct UUMG_CharacterInitialization_C_CharacterCreationResult_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE9 (0xE9 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.GetChacterSlots
struct UUMG_CharacterInitialization_C_GetChacterSlots_Params
{
public:
	TArray<int32>                                ChrSlots;                                          // 0x0(0x10)(Parm, OutParm)
	bool                                         HasCharacter;                                      // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Slots;                                             // 0x18(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3508[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileCharacter               CallFunc_Array_Get_Item;                           // 0x40(0xA0)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.GetDioramaForCurrentCharacter
struct UUMG_CharacterInitialization_C_GetDioramaForCurrentCharacter_Params
{
public:
	TSoftObjectPtr<class UWorld>                 ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EProspectLocation                 Temp_byte_Variable;                                // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35B9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UWorld>                 K2Node_Select_Default;                             // 0x30(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UWorld>                 K2Node_Select_Default_1;                           // 0x58(0x28)(UObjectWrapper, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnCharacterSelected
struct UUMG_CharacterInitialization_C_OnCharacterSelected_Params
{
public:
	struct FOnlineProfileCharacter               Character;                                         // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerControllerSpace_C*     K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space; // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B0 (0x1B0 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.SelectCharacter
struct UUMG_CharacterInitialization_C_SelectCharacter_Params
{
public:
	struct FOnlineProfileCharacter               SelectedCharacter;                                 // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_372A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UIcarusGameInstance*                   K2Node_DynamicCast_AsIcarus_Game_Instance;         // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_375D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_10;             // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.UpdateCharacterPreview
struct UUMG_CharacterInitialization_C_UpdateCharacterPreview_Params
{
public:
	struct FCharacterCosmetics                   CosmeticData;                                      // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_380D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UWorld>                 CallFunc_GetDioramaForCurrentCharacter_ReturnValue; // 0x38(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_SoftObjectReference_ReturnValue; // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_381A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3823[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICustomisationWidgetInterface_C> K2Node_DynamicCast_AsCustomisation_Widget_Interface; // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3831[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPreviewCameraSettingsEnum            CallFunc_GetCameraFocus_CameraFocus;               // 0x90(0x10)(HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.NewCharacterSelected
struct UUMG_CharacterInitialization_C_NewCharacterSelected_Params
{
public:
	struct FOnlineProfileCharacter               SelectedCharacter;                                 // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcarusGameInstance*                   K2Node_DynamicCast_AsIcarus_Game_Instance;         // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BackButtonPressed
struct UUMG_CharacterInitialization_C_BackButtonPressed_Params
{
public:
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3913[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_391D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.GenerateCharacterSelectList
struct UUMG_CharacterInitialization_C_GenerateCharacterSelectList_Params
{
public:
	bool                                         CreateCharacterIfEmpty;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_397C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7C (0x7C - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.SetContentState
struct UUMG_CharacterInitialization_C_SetContentState_Params
{
public:
	enum class ECharacterCreationMenus           State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECharacterCreationMenus           PreviousSettings;                                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AF6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICustomisationWidgetInterface_C> K2Node_DynamicCast_AsCustomisation_Widget_Interface; // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCosmetics                   CallFunc_GetCosmeticData_CosmeticData;             // 0x44(0x34)(NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_AA2196B04AC3B92C0431BDB2754010AC
struct UUMG_CharacterInitialization_C_OnFail_AA2196B04AC3B92C0431BDB2754010AC_Params
{
public:
	struct FResGetCharacters                     Response;                                          // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_AA2196B04AC3B92C0431BDB2754010AC
struct UUMG_CharacterInitialization_C_OnSuccess_AA2196B04AC3B92C0431BDB2754010AC_Params
{
public:
	struct FResGetCharacters                     Response;                                          // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_16D5FF39449681E05656E5AEB0E4B6EC
struct UUMG_CharacterInitialization_C_OnFail_16D5FF39449681E05656E5AEB0E4B6EC_Params
{
public:
	struct FResCreateCharacter                   Response;                                          // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_16D5FF39449681E05656E5AEB0E4B6EC
struct UUMG_CharacterInitialization_C_OnSuccess_16D5FF39449681E05656E5AEB0E4B6EC_Params
{
public:
	struct FResCreateCharacter                   Response;                                          // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_8DEB61DF48DB1B1A9300A098DF26F53D
struct UUMG_CharacterInitialization_C_OnFail_8DEB61DF48DB1B1A9300A098DF26F53D_Params
{
public:
	struct FResDeleteCharacter                   Response;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_8DEB61DF48DB1B1A9300A098DF26F53D
struct UUMG_CharacterInitialization_C_OnSuccess_8DEB61DF48DB1B1A9300A098DF26F53D_Params
{
public:
	struct FResDeleteCharacter                   Response;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_49458CA04D20AEFC814952AE4F767256
struct UUMG_CharacterInitialization_C_OnFail_49458CA04D20AEFC814952AE4F767256_Params
{
public:
	struct FResGetCharacters                     Response;                                          // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_49458CA04D20AEFC814952AE4F767256
struct UUMG_CharacterInitialization_C_OnSuccess_49458CA04D20AEFC814952AE4F767256_Params
{
public:
	struct FResGetCharacters                     Response;                                          // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_A199ABC24AC7A7F27C5A65A9B3F9E898
struct UUMG_CharacterInitialization_C_OnFail_A199ABC24AC7A7F27C5A65A9B3F9E898_Params
{
public:
	struct FResGetAllProspects                   Response;                                          // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_A199ABC24AC7A7F27C5A65A9B3F9E898
struct UUMG_CharacterInitialization_C_OnSuccess_A199ABC24AC7A7F27C5A65A9B3F9E898_Params
{
public:
	struct FResGetAllProspects                   Response;                                          // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_F77B8CB74F4AF05825B964AC18481892
struct UUMG_CharacterInitialization_C_OnFail_F77B8CB74F4AF05825B964AC18481892_Params
{
public:
	struct FResUpdateCosmetics                   Response;                                          // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_F77B8CB74F4AF05825B964AC18481892
struct UUMG_CharacterInitialization_C_OnSuccess_F77B8CB74F4AF05825B964AC18481892_Params
{
public:
	struct FResUpdateCosmetics                   Response;                                          // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x50 (0x50 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_BEC856464A75D4A166FC988B8C7226EC
struct UUMG_CharacterInitialization_C_OnFail_BEC856464A75D4A166FC988B8C7226EC_Params
{
public:
	struct FResGetUserProfile                    Response;                                          // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x50 (0x50 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_BEC856464A75D4A166FC988B8C7226EC
struct UUMG_CharacterInitialization_C_OnSuccess_BEC856464A75D4A166FC988B8C7226EC_Params
{
public:
	struct FResGetUserProfile                    Response;                                          // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_5EFAF01E48E09C992CF2528296819869
struct UUMG_CharacterInitialization_C_OnFail_5EFAF01E48E09C992CF2528296819869_Params
{
public:
	struct FResAbandonProspect                   Response;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_5EFAF01E48E09C992CF2528296819869
struct UUMG_CharacterInitialization_C_OnSuccess_5EFAF01E48E09C992CF2528296819869_Params
{
public:
	struct FResAbandonProspect                   Response;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BackSettings
struct UUMG_CharacterInitialization_C_BackSettings_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UUMG_CharacterInitialization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D (0x4D - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnCreateCharacterRequest
struct UUMG_CharacterInitialization_C_OnCreateCharacterRequest_Params
{
public:
	struct FReqCreateCharacter                   CharacterName;                                     // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        NumRetries;                                        // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SelectNewCharacter;                                // 0x4C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BndEvt__QuitToDesktopButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UUMG_CharacterInitialization_C_BndEvt__QuitToDesktopButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnCharacterDeletionRequest
struct UUMG_CharacterInitialization_C_OnCharacterDeletionRequest_Params
{
public:
	struct FOnlineProfileCharacter               Character;                                         // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BndEvt__UMG_BasicButton_Settings_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UUMG_CharacterInitialization_C_BndEvt__UMG_BasicButton_Settings_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnCosmeticUpdateRequest
struct UUMG_CharacterInitialization_C_OnCosmeticUpdateRequest_Params
{
public:
	struct FReqUpdateCosmetics                   Request;                                           // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Retries;                                           // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnConnectMessageEvent
struct UUMG_CharacterInitialization_C_OnConnectMessageEvent_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB1 (0xB1 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnAbandonProspectRequest
struct UUMG_CharacterInitialization_C_OnAbandonProspectRequest_Params
{
public:
	struct FOnlineProfileCharacter               Character;                                         // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                ProspectID;                                        // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         WillDelete;                                        // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF38 (0xF38 - 0x0)
// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.ExecuteUbergraph_UMG_CharacterInitialization
struct UUMG_CharacterInitialization_C_ExecuteUbergraph_UMG_CharacterInitialization_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	struct FResDeleteCharacter                   Temp_struct_Variable;                              // 0x14(0x1)(NoDestructor)
	uint8                                        Pad_46A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FResGetCharacters                     K2Node_CustomEvent_Response_9;                     // 0x38(0x18)(ConstParm)
	struct FResGetCharacters                     K2Node_CustomEvent_Response_8;                     // 0x50(0x18)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x68(0x10)(ZeroConstructor, NoDestructor)
	struct FResGetCharacters                     Temp_struct_Variable_1;                            // 0x78(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x90(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	struct FResGetAllProspects                   K2Node_CustomEvent_Response_7;                     // 0xB0(0x18)(ConstParm)
	struct FResGetAllProspects                   K2Node_CustomEvent_Response_6;                     // 0xC8(0x18)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0xE0(0x10)(ZeroConstructor, NoDestructor)
	struct FResGetAllProspects                   Temp_struct_Variable_2;                            // 0xF0(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x108(0x10)(ZeroConstructor, NoDestructor)
	struct FResUpdateCosmetics                   K2Node_CustomEvent_Response_5;                     // 0x118(0xA8)(ConstParm)
	struct FResUpdateCosmetics                   K2Node_CustomEvent_Response_4;                     // 0x1C0(0xA8)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x268(0x10)(ZeroConstructor, NoDestructor)
	struct FResUpdateCosmetics                   Temp_struct_Variable_3;                            // 0x278(0xA8)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x320(0x10)(ZeroConstructor, NoDestructor)
	struct FResGetUserProfile                    K2Node_CustomEvent_Response_3;                     // 0x330(0x50)(ConstParm)
	struct FResGetUserProfile                    K2Node_CustomEvent_Response_2;                     // 0x380(0x50)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x3D0(0x10)(ZeroConstructor, NoDestructor)
	struct FResGetUserProfile                    Temp_struct_Variable_4;                            // 0x3E0(0x50)(None)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails;        // 0x430(0x98)(ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x4C8(0x10)(ZeroConstructor, NoDestructor)
	struct FIcarusProfile                        K2Node_MakeStruct_IcarusProfile;                   // 0x4D8(0x20)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x4F8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x508(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x510(0x10)(ZeroConstructor, NoDestructor)
	struct FResAbandonProspect                   K2Node_CustomEvent_Response_1;                     // 0x520(0x1)(ConstParm, NoDestructor)
	struct FResAbandonProspect                   K2Node_CustomEvent_Response;                       // 0x521(0x1)(ConstParm, NoDestructor)
	uint8                                        Pad_4712[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x524(0x10)(ZeroConstructor, NoDestructor)
	struct FResAbandonProspect                   Temp_struct_Variable_5;                            // 0x534(0x1)(NoDestructor)
	uint8                                        Pad_4720[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USentrySubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x538(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USentrySubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x548(0x10)(ZeroConstructor, NoDestructor)
	class UUMG_ButtonBase_C*                     K2Node_CustomEvent_Button;                         // 0x558(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button_2;               // 0x560(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x570(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x580(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_474F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x588(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4757[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget; // 0x598(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerPreviewManager_C*            CallFunc_GetActorOfClass_ReturnValue;              // 0x5A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x5A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4779[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResGetCharacters                     K2Node_CustomEvent_Response_15;                    // 0x5B0(0x18)(ConstParm)
	uint8                                        Pad_4780[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x5D0(0x30)(IsPlainOldData, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x600(0x10)(ZeroConstructor, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerPreviewManager_C*            CallFunc_FinishSpawningActor_ReturnValue;          // 0x618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FResDeleteCharacter                   K2Node_CustomEvent_Response_10;                    // 0x628(0x1)(ConstParm, NoDestructor)
	struct FReqGetCharacters                     K2Node_MakeStruct_ReqGetCharacters;                // 0x629(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x62C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_47CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGetCharactersCallbackProxyGen*        CallFunc_GetCharacters_ReturnValue;                // 0x640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x648(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReqCreateCharacter                   K2Node_CustomEvent_CharacterName;                  // 0x658(0x48)(None)
	int32                                        K2Node_CustomEvent_NumRetries;                     // 0x6A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_SelectNewCharacter;             // 0x6A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x6A8(0x40)(HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x6E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x6EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_480B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCreateCharacterCallbackProxyGen*      CallFunc_CreateCharacter_ReturnValue;              // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x6F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_481A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x700(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x718(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x758(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x768(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x778(0x18)(None)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button_1;               // 0x790(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x798(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FOnlineProfileCharacter               K2Node_CustomEvent_Character_1;                    // 0x7A8(0xA0)(None)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_1;          // 0x848(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FReqDeleteCharacter                   K2Node_MakeStruct_ReqDeleteCharacter;              // 0x858(0x4)(NoDestructor)
	uint8                                        Pad_4846[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_2;          // 0x860(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UDeleteCharacterCallbackProxyGen*      CallFunc_DeleteCharacter_ReturnValue;              // 0x870(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x878(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>           K2Node_MakeMap_Map;                                // 0x888(0x50)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x8D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FReqGetCharacters                     K2Node_MakeStruct_ReqGetCharacters_1;              // 0x8D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4866[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGetCharactersCallbackProxyGen*        CallFunc_GetCharacters_ReturnValue_1;              // 0x8E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x8E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4874[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x8F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FResDeleteCharacter                   K2Node_CustomEvent_Response_11;                    // 0x8F8(0x1)(ConstParm, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x8F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x8FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_488F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_GetChacterSlots_ChrSlots;                 // 0x900(0x10)(ReferenceParm)
	bool                                         CallFunc_GetChacterSlots_HasCharacter;             // 0x910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4899[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x914(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_48A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReqGetAllProspects                   K2Node_MakeStruct_ReqGetAllProspects;              // 0x928(0x10)(None)
	class UGetAllProspectsCallbackProxyGen*      CallFunc_GetAllProspects_ReturnValue;              // 0x938(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0x940(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x950(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResCreateCharacter                   Temp_struct_Variable_6;                            // 0x958(0xA8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0xA00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_3;          // 0xA08(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_4;          // 0xA18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0xA28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_5;          // 0xA38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>           K2Node_MakeMap_Map_1;                              // 0xA48(0x50)(ConstParm)
	struct FResCreateCharacter                   K2Node_CustomEvent_Response_12;                    // 0xA98(0xA8)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0xB40(0x10)(ZeroConstructor, NoDestructor)
	struct FResCreateCharacter                   K2Node_CustomEvent_Response_13;                    // 0xB50(0xA8)(ConstParm)
	int32                                        Temp_int_Variable_1;                               // 0xBF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_21;           // 0xBFC(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_22;           // 0xC0C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_23;           // 0xC1C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_24;           // 0xC2C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4906[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReqUpdateCosmetics                   K2Node_CustomEvent_Request;                        // 0xC40(0x48)(None)
	int32                                        K2Node_CustomEvent_Retries;                        // 0xC88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xC8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xC90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4924[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUpdateCosmeticsCallbackProxyGen*      CallFunc_UpdateCosmetics_ReturnValue;              // 0xC98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0xCA0(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xCE0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0xCF8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0xD38(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0xD48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4944[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0xD50(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xD68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_25;           // 0xD78(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_26;           // 0xD88(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_Success;                        // 0xD98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4967[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerPreviewManager_C*            Temp_wildcard_Variable;                            // 0xDA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcarusMessageListeners*               CallFunc_GetIcarusMessageListeners_ReturnValue;    // 0xDA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0xDB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xDB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0xDB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0xDB3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0xDB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xDC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_49A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetIcarusPlayerId_ReturnValue;            // 0xDC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid_1;      // 0xDD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue_1;  // 0xDE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReqGetUserProfile                    K2Node_MakeStruct_ReqGetUserProfile;               // 0xDE8(0x10)(None)
	class ABP_IcarusPlayerControllerSpace_C*     K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space; // 0xDF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_49FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGetUserProfileCallbackProxyGen*       CallFunc_GetUserProfile_ReturnValue;               // 0xE08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0xE10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0xE11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A16[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_27;           // 0xE14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4A1B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileCharacter               K2Node_CustomEvent_Character;                      // 0xE28(0xA0)(None)
	class FString                                K2Node_CustomEvent_ProspectId;                     // 0xEC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_WillDelete;                     // 0xED8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReqAbandonProspect                   K2Node_MakeStruct_ReqAbandonProspect;              // 0xEE0(0x18)(None)
	class UAbandonProspectCallbackProxyGen*      CallFunc_AbandonProspect_ReturnValue;              // 0xEF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FResGetCharacters                     Temp_struct_Variable_7;                            // 0xF00(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0xF18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A46[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResGetCharacters                     K2Node_CustomEvent_Response_14;                    // 0xF20(0x18)(ConstParm)
};

}
}


