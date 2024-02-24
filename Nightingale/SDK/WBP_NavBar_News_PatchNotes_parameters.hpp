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
// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.ShowCredits
struct UWBP_NavBar_News_PatchNotes_C_ShowCredits_Params
{
public:
	class UNWXLocalPlayer*                       CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Credits_Screen_C*                 CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xF (0xF - 0x0)
// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.OnLoginStateChanged
struct UWBP_NavBar_News_PatchNotes_C_OnLoginStateChanged_Params
{
public:
	enum class E_UILoginState                    UILoginState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_UILoginState                    L_MinimumAllowedLoginState;                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_ByteByte_ReturnValue;        // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.ShowPatchNotes
struct UWBP_NavBar_News_PatchNotes_C_ShowPatchNotes_Params
{
public:
	class UNWXLocalPlayer*                       CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PatchNotes_C*                     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.Options
struct UWBP_NavBar_News_PatchNotes_C_Options_Params
{
public:
	class UNWXLocalPlayer*                       CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Options_StartScreen_C*            CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.ShowMotD
struct UWBP_NavBar_News_PatchNotes_C_ShowMotD_Params
{
public:
	class UNWXLocalPlayer*                       CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_MotdScreen_C*                     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.BndEvt__WBP_NavBar_News_PatchNotes_Bottom_NavBar_K2Node_ComponentBoundEvent_0_NavBar_ButtonClicked__DelegateSignature
struct UWBP_NavBar_News_PatchNotes_C_BndEvt__WBP_NavBar_News_PatchNotes_Bottom_NavBar_K2Node_ComponentBoundEvent_0_NavBar_ButtonClicked__DelegateSignature_Params
{
public:
	class FText                                  ButtonLabel;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Index;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x439 (0x439 - 0x0)
// Function WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C.ExecuteUbergraph_WBP_NavBar_News_PatchNotes
struct UWBP_NavBar_News_PatchNotes_C_ExecuteUbergraph_WBP_NavBar_News_PatchNotes_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_ButtonLabel;            // 0x8(0x18)(None)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AA3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUILoginInfo                          CallFunc_GetInfo_ReturnValue;                      // 0x40(0x3F8)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


