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

// 0xD8 (0xD8 - 0x0)
// Function UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C.UpdateCharacterLimit
struct UUMG_SentryReportDialogContent_C_UpdateCharacterLimit_Params
{
public:
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x0(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x40(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x70(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C.BndEvt__UMG_SentryReportDialogContent_MultiLineEditableTextBox_130_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
struct UUMG_SentryReportDialogContent_C_BndEvt__UMG_SentryReportDialogContent_MultiLineEditableTextBox_130_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x19 (0x19 - 0x0)
// Function UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C.BndEvt__UMG_SentryReportDialogContent_ReportInput_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
struct UUMG_SentryReportDialogContent_C_BndEvt__UMG_SentryReportDialogContent_ReportInput_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C.ExecuteUbergraph_UMG_SentryReportDialogContent
struct UUMG_SentryReportDialogContent_C_ExecuteUbergraph_UMG_SentryReportDialogContent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x8(0x18)(ConstParm)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x20(0x18)(ConstParm)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3904[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_390C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_390E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x90(0x18)(None)
	class FString                                CallFunc_GetSubstring_ReturnValue_1;               // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xB8(0x18)(None)
};

}
}


