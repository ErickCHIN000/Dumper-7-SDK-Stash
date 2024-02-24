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

// 0x128 (0x128 - 0x0)
// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.GetTextToSend
struct UWBP_FeedbackMenu_C_GetTextToSend_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x18(0x18)(None)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F35[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_VectorToString_ReturnValue;          // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                             CallFunc_Now_ReturnValue;                          // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_AsDateTime_DateTime_ReturnValue;          // 0x70(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.Get_TestText_Text_0
struct UWBP_FeedbackMenu_C_Get_TestText_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FString                                CallFunc_GetTextToSend_ReturnValue;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.FailedToSendEmail_4F0475C44D3891686830058B504EED22
struct UWBP_FeedbackMenu_C_FailedToSendEmail_4F0475C44D3891686830058B504EED22_Params
{
public:
	int32                                        ErrorCode;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.EmailSent_4F0475C44D3891686830058B504EED22
struct UWBP_FeedbackMenu_C_EmailSent_4F0475C44D3891686830058B504EED22_Params
{
public:
	int32                                        ErrorCode;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.FailedToSendEmail_C21F788940184ED8FAA72C850F56D3C9
struct UWBP_FeedbackMenu_C_FailedToSendEmail_C21F788940184ED8FAA72C850F56D3C9_Params
{
public:
	int32                                        ErrorCode;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.EmailSent_C21F788940184ED8FAA72C850F56D3C9
struct UWBP_FeedbackMenu_C_EmailSent_C21F788940184ED8FAA72C850F56D3C9_Params
{
public:
	int32                                        ErrorCode;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.SendMail
struct UWBP_FeedbackMenu_C_SendMail_Params
{
public:
	TArray<uint8>                                AttachedFilesData;                                 // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.ImageRecieved
struct UWBP_FeedbackMenu_C_ImageRecieved_Params
{
public:
	TArray<uint8>                                Image;                                             // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x168 (0x168 - 0x0)
// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.ExecuteUbergraph_WBP_FeedbackMenu
struct UWBP_FeedbackMenu_C_ExecuteUbergraph_WBP_FeedbackMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_102E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                K2Node_MakeArray_Array;                            // 0x8(0x10)(ConstParm, ReferenceParm)
	TArray<class FString>                        Temp_string_Variable;                              // 0x18(0x10)(ConstParm, ReferenceParm)
	TArray<class FString>                        Temp_string_Variable_1;                            // 0x28(0x10)(ConstParm, ReferenceParm)
	int32                                        K2Node_CustomEvent_ErrorCode_3;                    // 0x38(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_CustomEvent_ErrorCode_2;                    // 0x4C(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x50(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x64(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_CustomEvent_ErrorCode_1;                    // 0x74(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_ErrorCode;                      // 0x78(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x7C(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable_1;                               // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScreenshotTaker*                      CallFunc_SpawnObject_ReturnValue;                  // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1045[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Temp_string_Variable_2;                            // 0xA0(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	class FString                                CallFunc_GetTextToSend_ReturnValue;                // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_MakeArray_Array_1;                          // 0xD0(0x10)(ConstParm, ReferenceParm)
	TArray<class FString>                        Temp_string_Variable_3;                            // 0xE0(0x10)(ConstParm, ReferenceParm)
	TArray<class FString>                        Temp_string_Variable_4;                            // 0xF0(0x10)(ConstParm, ReferenceParm)
	TArray<uint8>                                K2Node_CustomEvent_AttachedFilesData;              // 0x100(0x10)(ConstParm, ReferenceParm)
	TArray<class FString>                        Temp_string_Variable_5;                            // 0x110(0x10)(ConstParm, ReferenceParm)
	class FString                                CallFunc_GetTextToSend_ReturnValue_1;              // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USendEmailWithGmailProxy*              CallFunc_SendEmailWithGmail_ReturnValue;           // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USendEmailWithGmailProxy*              CallFunc_SendEmailWithGmail_ReturnValue_1;         // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1058[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                K2Node_CustomEvent_Image;                          // 0x148(0x10)(ConstParm, ReferenceParm)
	TArray<uint8>                                K2Node_MakeArray_Array_2;                          // 0x158(0x10)(ConstParm, ReferenceParm)
};

}
}


