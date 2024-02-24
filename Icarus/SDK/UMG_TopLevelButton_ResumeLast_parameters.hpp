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

// 0x28 (0x28 - 0x0)
// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.OrangeButton
struct UUMG_TopLevelButton_ResumeLast_C_OrangeButton_Params
{
public:
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x0(0x28)(None)
};

// 0x4F8 (0x4F8 - 0x0)
// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.FocusUpdated
struct UUMG_TopLevelButton_ResumeLast_C_FocusUpdated_Params
{
public:
	bool                                         bNewFocus;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50B2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x8(0x278)(None)
	struct FButtonStyle                          K2Node_Select_Default;                             // 0x280(0x278)(ConstParm)
};

// 0x11 (0x11 - 0x0)
// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.GetFocusWidget
struct UUMG_TopLevelButton_ResumeLast_C_GetFocusWidget_Params
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5109[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Widget;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bThis;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.GetImageButton
struct UUMG_TopLevelButton_ResumeLast_C_GetImageButton_Params
{
public:
	class UButton*                               ImageButton;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.GetButtonText
struct UUMG_TopLevelButton_ResumeLast_C_GetButtonText_Params
{
public:
	class UTextBlock*                            ButtonText;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.OnFailure_9E404D7D4F41CF9DD68EC3BCCAD3C47E
struct UUMG_TopLevelButton_ResumeLast_C_OnFailure_9E404D7D4F41CF9DD68EC3BCCAD3C47E_Params
{
public:
	struct FGetIcarusPlayerPersonaResult         Result;                                            // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x38 (0x38 - 0x0)
// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.OnSuccess_9E404D7D4F41CF9DD68EC3BCCAD3C47E
struct UUMG_TopLevelButton_ResumeLast_C_OnSuccess_9E404D7D4F41CF9DD68EC3BCCAD3C47E_Params
{
public:
	struct FGetIcarusPlayerPersonaResult         Result;                                            // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.PreConstruct
struct UUMG_TopLevelButton_ResumeLast_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.SetLastProspectInfo
struct UUMG_TopLevelButton_ResumeLast_C_SetLastProspectInfo_Params
{
public:
	struct FAssociatedProspectInfo               AssociatedProspect;                                // 0x0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x5B0 (0x5B0 - 0x0)
// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.ExecuteUbergraph_UMG_TopLevelButton_ResumeLast
struct UUMG_TopLevelButton_ResumeLast_C_ExecuteUbergraph_UMG_TopLevelButton_ResumeLast_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_5366[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGetIcarusPlayerPersonaResult         K2Node_CustomEvent_Result;                         // 0x18(0x38)(None)
	struct FGetIcarusPlayerPersonaResult         Temp_struct_Variable;                              // 0x50(0x38)(None)
	bool                                         Temp_bool_Variable;                                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5380[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAssociatedProspectInfo               K2Node_CustomEvent_AssociatedProspect;             // 0xA8(0xC8)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x170(0x18)(None)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x190(0x18)(None)
	struct FProspectListRowHandle                CallFunc_MakeProspectList_ReturnValue;             // 0x1A8(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1C0(0x40)(HasGetValueTypeHash)
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x200(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URequestPlayerPersona*                 CallFunc_IcarusRequestPlayerPersona_ReturnValue;   // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53D2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x4E0(0x40)(HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x520(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x528(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x538(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x550(0x18)(None)
	struct FGetIcarusPlayerPersonaResult         K2Node_CustomEvent_Result_1;                       // 0x568(0x38)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x5A0(0x10)(ZeroConstructor, NoDestructor)
};

}
}


