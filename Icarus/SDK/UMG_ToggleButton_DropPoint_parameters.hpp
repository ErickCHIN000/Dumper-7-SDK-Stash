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

// 0x4F8 (0x4F8 - 0x0)
// Function UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C.FocusUpdated
struct UUMG_ToggleButton_DropPoint_C_FocusUpdated_Params
{
public:
	bool                                         bNewFocus;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F2A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x8(0x278)(None)
	struct FButtonStyle                          K2Node_Select_Default;                             // 0x280(0x278)(ConstParm)
};

// 0x11 (0x11 - 0x0)
// Function UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C.GetFocusWidget
struct UUMG_ToggleButton_DropPoint_C_GetFocusWidget_Params
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Widget;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bThis;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C.GetImageButton
struct UUMG_ToggleButton_DropPoint_C_GetImageButton_Params
{
public:
	class UButton*                               ImageButton;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C.PreConstruct
struct UUMG_ToggleButton_DropPoint_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C.VisuallyToggleButton
struct UUMG_ToggleButton_DropPoint_C_VisuallyToggleButton_Params
{
public:
	bool                                         VisualToggledState;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A0 (0x2A0 - 0x0)
// Function UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C.ExecuteUbergraph_UMG_ToggleButton_DropPoint
struct UUMG_ToggleButton_DropPoint_C_ExecuteUbergraph_UMG_ToggleButton_DropPoint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5151[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x40)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x60(0x10)(ZeroConstructor, NoDestructor)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x70(0x10)(ReferenceParm)
	bool                                         Temp_bool_Variable;                                // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_515B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x88(0x18)(None)
	class FText                                  Temp_text_Variable;                                // 0xA0(0x18)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5173[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDropGroupCosmeticData                CallFunc_GetDropGroupsStruct_DropGroups;           // 0xC0(0xC8)(None)
	enum class EValid                            CallFunc_GetDropGroupsStruct_Paths;                // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_VisualToggledState;                   // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5190[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x198(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1B0(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1F8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x238(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x248(0x18)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x271(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51D2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x278(0x28)(None)
};

}
}


