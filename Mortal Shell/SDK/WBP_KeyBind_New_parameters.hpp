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

// 0x218 (0x218 - 0x0)
// Function WBP_KeyBind_New.WBP_KeyBind_New_C.OnMouseButtonDown
struct UWBP_KeyBind_New_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)(None)
};

// 0x40 (0x40 - 0x0)
// Function WBP_KeyBind_New.WBP_KeyBind_New_C.UpdateKBMAction
struct UWBP_KeyBind_New_C_UpdateKBMAction_Params
{
public:
	struct FInputAction                          InputActionKBM;                                    // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function WBP_KeyBind_New.WBP_KeyBind_New_C.WaitingKey_KBM
struct UWBP_KeyBind_New_C_WaitingKey_KBM_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function WBP_KeyBind_New.WBP_KeyBind_New_C.WaitingKey_Controller
struct UWBP_KeyBind_New_C_WaitingKey_Controller_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function WBP_KeyBind_New.WBP_KeyBind_New_C.UpdateControllerAction
struct UWBP_KeyBind_New_C_UpdateControllerAction_Params
{
public:
	struct FInputAction                          InputActionController;                             // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xF8 (0xF8 - 0x0)
// Function WBP_KeyBind_New.WBP_KeyBind_New_C.SetKBMKey
struct UWBP_KeyBind_New_C_SetKBMKey_Params
{
public:
	class FString                                Temp_string_Variable;                              // 0x0(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FInputAction                          CallFunc_Map_Find_Value;                           // 0x10(0x40)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1041[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x58(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x70(0x18)(None)
	bool                                         CallFunc_GetKeyAsTexture_KeyFound;                 // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1051[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetKeyAsTexture_Texture;                  // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetKeyAsTexture_KeyString;                // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0xA8(0x18)(None)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetKeyAsTexture_KeyFound_1;               // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_105C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetKeyAsTexture_Texture_1;                // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetKeyAsTexture_KeyString_1;              // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0xE0(0x18)(None)
};

// 0x2C0 (0x2C0 - 0x0)
// Function WBP_KeyBind_New.WBP_KeyBind_New_C.SetControllerKey
struct UWBP_KeyBind_New_C_SetControllerKey_Params
{
public:
	class FString                                Temp_string_Variable;                              // 0x0(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x10(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_2;                            // 0x20(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_113A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Temp_object_Variable;                              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable_1;                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_3;                            // 0x48(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x58(0x18)(None)
	struct FInputAction                          CallFunc_Map_Find_Value;                           // 0x70(0x40)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetKeyAsTexture_KeyFound;                 // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1152[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetKeyAsTexture_Texture;                  // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetKeyAsTexture_KeyString;                // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FInputAction                          CallFunc_Map_Find_Value_1;                         // 0xD0(0x40)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetKeyAsTexture_KeyFound_1;               // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_115D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetKeyAsTexture_Texture_1;                // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetKeyAsTexture_KeyString_1;              // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FInputAction                          CallFunc_Map_Find_Value_2;                         // 0x130(0x40)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetKeyAsTexture_KeyFound_2;               // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1169[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetKeyAsTexture_Texture_2;                // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetKeyAsTexture_KeyString_2;              // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FInputAction                          CallFunc_Map_Find_Value_3;                         // 0x190(0x40)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_116F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_4;                            // 0x1D8(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetKeyAsTexture_KeyFound_3;               // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1170[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetKeyAsTexture_Texture_3;                // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetKeyAsTexture_KeyString_3;              // 0x1F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FInputAction                          CallFunc_Map_Find_Value_4;                         // 0x208(0x40)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_4;                   // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetKeyAsTexture_KeyFound_4;               // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1178[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetKeyAsTexture_Texture_4;                // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetKeyAsTexture_KeyString_4;              // 0x258(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   K2Node_DynamicCast_AsGame_Info_Instance;           // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1188[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default;                             // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x289(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetKeyAsTexture_KeyFound_5;               // 0x28A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1194[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetKeyAsTexture_Texture_5;                // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetKeyAsTexture_KeyString_5;              // 0x298(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x2A8(0x18)(None)
};

// 0x5 (0x5 - 0x0)
// Function WBP_KeyBind_New.WBP_KeyBind_New_C.ExecuteUbergraph_WBP_KeyBind_New
struct UWBP_KeyBind_New_C_ExecuteUbergraph_WBP_KeyBind_New_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


