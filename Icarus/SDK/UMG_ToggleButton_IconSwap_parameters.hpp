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
// Function UMG_ToggleButton_IconSwap.UMG_ToggleButton_IconSwap_C.FocusUpdated
struct UUMG_ToggleButton_IconSwap_C_FocusUpdated_Params
{
public:
	bool                                         bNewFocus;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x8(0x278)(None)
	struct FButtonStyle                          K2Node_Select_Default;                             // 0x280(0x278)(ConstParm)
};

// 0x11 (0x11 - 0x0)
// Function UMG_ToggleButton_IconSwap.UMG_ToggleButton_IconSwap_C.GetFocusWidget
struct UUMG_ToggleButton_IconSwap_C_GetFocusWidget_Params
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_400A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Widget;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bThis;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ToggleButton_IconSwap.UMG_ToggleButton_IconSwap_C.GetImageButton
struct UUMG_ToggleButton_IconSwap_C_GetImageButton_Params
{
public:
	class UButton*                               ImageButton;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ToggleButton_IconSwap.UMG_ToggleButton_IconSwap_C.PreConstruct
struct UUMG_ToggleButton_IconSwap_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ToggleButton_IconSwap.UMG_ToggleButton_IconSwap_C.VisuallyToggleButton
struct UUMG_ToggleButton_IconSwap_C_VisuallyToggleButton_Params
{
public:
	bool                                         VisualToggledState;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ToggleButton_IconSwap.UMG_ToggleButton_IconSwap_C.OnClickEvent
struct UUMG_ToggleButton_IconSwap_C_OnClickEvent_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UMG_ToggleButton_IconSwap.UMG_ToggleButton_IconSwap_C.ExecuteUbergraph_UMG_ToggleButton_IconSwap
struct UUMG_ToggleButton_IconSwap_C_ExecuteUbergraph_UMG_ToggleButton_IconSwap_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_VisualToggledState;                   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4218[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_Event_Button;                               // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4225[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_2;                           // 0x28(0x18)(ConstParm)
};

}
}


