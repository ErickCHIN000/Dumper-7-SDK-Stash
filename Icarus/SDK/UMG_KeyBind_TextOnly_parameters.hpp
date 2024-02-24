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

// 0x192 (0x192 - 0x0)
// Function UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C.GetDefaultKey
struct UUMG_KeyBind_TextOnly_C_GetDefaultKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, OutParm, HasGetValueTypeHash)
	class UGameUserSettingsSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerUsingControllerStatic_ReturnValue; // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKeybindData                          CallFunc_GetKeybindingsStruct_Keybindings;         // 0x28(0x108)(None)
	enum class EValid                            CallFunc_GetKeybindingsStruct_Paths;               // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetDefaultAxisMapping_Paths;              // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAxisKeyMapping                  CallFunc_GetDefaultAxisMapping_ReturnValue;        // 0x138(0x28)(None)
	enum class EValid                            CallFunc_GetDefaultActionMapping_Paths;            // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionKeyMapping                CallFunc_GetDefaultActionMapping_ReturnValue;      // 0x168(0x28)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18A (0x18A - 0x0)
// Function UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C.GetKey
struct UUMG_KeyBind_TextOnly_C_GetKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, OutParm, HasGetValueTypeHash)
	class UGameUserSettingsSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKeybindData                          CallFunc_GetKeybindingsStruct_Keybindings;         // 0x20(0x108)(None)
	enum class EValid                            CallFunc_GetKeybindingsStruct_Paths;               // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3396[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionKeyMapping                CallFunc_GetCurrentActionMapping_Out;              // 0x130(0x28)(None)
	enum class EValid                            CallFunc_GetCurrentActionMapping_Paths;            // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x15A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAxisKeyMapping                  CallFunc_GetCurrentAxisMapping_Out;                // 0x160(0x28)(None)
	enum class EValid                            CallFunc_GetCurrentAxisMapping_Paths;              // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x147 (0x147 - 0x0)
// Function UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C.Set Keybind
struct UUMG_KeyBind_TextOnly_C_Set_Keybind_Params
{
public:
	struct FKeybindingsRowHandle                 InKey;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         Hold;                                              // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlayerUsingControllerStatic_ReturnValue; // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_347D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_Key;                               // 0x20(0x18)(HasGetValueTypeHash)
	struct FKeybindData                          CallFunc_GetKeybindingsStruct_Keybindings;         // 0x38(0x108)(None)
	enum class EValid                            CallFunc_GetKeybindingsStruct_Paths;               // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Key_IsSet;                            // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x143(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x145(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x146(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C.Input Type Changed
struct UUMG_KeyBind_TextOnly_C_Input_Type_Changed_Params
{
public:
	enum class EInputTypeSetting                 Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C.ExecuteUbergraph_UMG_KeyBind_TextOnly
struct UUMG_KeyBind_TextOnly_C_ExecuteUbergraph_UMG_KeyBind_TextOnly_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3595[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_359B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_IcarusGameUserSettings_C*          CallFunc_Get_Icarus_Game_User_Settings_Settings;   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputTypeSetting                 K2Node_CustomEvent_Value;                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C.OnKeyBindChanged__DelegateSignature
struct UUMG_KeyBind_TextOnly_C_OnKeyBindChanged__DelegateSignature_Params
{
public:
	bool                                         IsSet;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


