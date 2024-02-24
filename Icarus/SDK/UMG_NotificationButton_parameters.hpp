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

// 0x591 (0x591 - 0x0)
// Function UMG_NotificationButton.UMG_NotificationButton_C.SetStyle
struct UUMG_NotificationButton_C_SetStyle_Params
{
public:
	enum class E_MailState                       State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5444[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          NewLocalVar_0;                                     // 0x8(0x278)(Edit, BlueprintVisible)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x280(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMailState                           CallFunc_GetDataTableRowFromName_OutRow;           // 0x298(0x2C8)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_ButtonState                     CallFunc_GetButtonState_State;                     // 0x561(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_545F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_Map_Find_Value;                           // 0x568(0x28)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UMG_NotificationButton.UMG_NotificationButton_C.Setup
struct UUMG_NotificationButton_C_Setup_Params
{
public:
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x0(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function UMG_NotificationButton.UMG_NotificationButton_C.ExecuteUbergraph_UMG_NotificationButton
struct UUMG_NotificationButton_C_ExecuteUbergraph_UMG_NotificationButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_MailState                       Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_MailState                       Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_MailState                       K2Node_Select_Default;                             // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function UMG_NotificationButton.UMG_NotificationButton_C.ShowMail__DelegateSignature
struct UUMG_NotificationButton_C_ShowMail__DelegateSignature_Params
{
public:
	struct FNotification                         Notification;                                      // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Index;                                             // 0x78(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


