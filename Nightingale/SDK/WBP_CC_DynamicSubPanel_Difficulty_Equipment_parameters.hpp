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

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.BP_GetDesiredFocusTarget
struct UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x450 (0x450 - 0x0)
// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.SetLoadoutStoryCombinedText
struct UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_SetLoadoutStoryCombinedText_Params
{
public:
	int32                                        Loadout;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerBackground                 Background;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_506B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Story7_Loadout_4;                                  // 0x8(0x18)(Edit, BlueprintVisible)
	class FText                                  Story7_Loadout_3;                                  // 0x20(0x18)(Edit, BlueprintVisible)
	class FText                                  Story7_Loadout_2;                                  // 0x38(0x18)(Edit, BlueprintVisible)
	class FText                                  Story7_Loadout_1;                                  // 0x50(0x18)(Edit, BlueprintVisible)
	class FText                                  Story6_Loadout_4;                                  // 0x68(0x18)(Edit, BlueprintVisible)
	class FText                                  Story6_Loadout_3;                                  // 0x80(0x18)(Edit, BlueprintVisible)
	class FText                                  Story6_Loadout_2;                                  // 0x98(0x18)(Edit, BlueprintVisible)
	class FText                                  Story6_Loadout_1;                                  // 0xB0(0x18)(Edit, BlueprintVisible)
	class FText                                  Story5_Loadout_4;                                  // 0xC8(0x18)(Edit, BlueprintVisible)
	class FText                                  Story5_Loadout_3;                                  // 0xE0(0x18)(Edit, BlueprintVisible)
	class FText                                  Story5_Loadout_2;                                  // 0xF8(0x18)(Edit, BlueprintVisible)
	class FText                                  Story5_Loadout_1;                                  // 0x110(0x18)(Edit, BlueprintVisible)
	class FText                                  Story4_Loadout_4;                                  // 0x128(0x18)(Edit, BlueprintVisible)
	class FText                                  Story4_Loadout_3;                                  // 0x140(0x18)(Edit, BlueprintVisible)
	class FText                                  Story4_Loadout_2;                                  // 0x158(0x18)(Edit, BlueprintVisible)
	class FText                                  Story4_Loadout_1;                                  // 0x170(0x18)(Edit, BlueprintVisible)
	class FText                                  Story3_Loadout_4;                                  // 0x188(0x18)(Edit, BlueprintVisible)
	class FText                                  Story3_Loadout_3;                                  // 0x1A0(0x18)(Edit, BlueprintVisible)
	class FText                                  Story3_Loadout_2;                                  // 0x1B8(0x18)(Edit, BlueprintVisible)
	class FText                                  Story3_Loadout_1;                                  // 0x1D0(0x18)(Edit, BlueprintVisible)
	class FText                                  Story2_Loadout_4;                                  // 0x1E8(0x18)(Edit, BlueprintVisible)
	class FText                                  Story2_Loadout_3;                                  // 0x200(0x18)(Edit, BlueprintVisible)
	class FText                                  Story2_Loadout_2;                                  // 0x218(0x18)(Edit, BlueprintVisible)
	class FText                                  Story2_Loadout_1;                                  // 0x230(0x18)(Edit, BlueprintVisible)
	class FText                                  Story1_Loadout4;                                   // 0x248(0x18)(Edit, BlueprintVisible)
	class FText                                  Story1_Loadout3;                                   // 0x260(0x18)(Edit, BlueprintVisible)
	class FText                                  Story1_Loadout2;                                   // 0x278(0x18)(Edit, BlueprintVisible)
	class FText                                  Story1_Loadout1;                                   // 0x290(0x18)(Edit, BlueprintVisible)
	enum class EPlayerBackground                 Temp_byte_Variable;                                // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5097[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x2B0(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x2C8(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x2E0(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x2F8(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x310(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x328(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0x340(0x18)(None)
	int32                                        Temp_int_Variable_1;                               // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x35C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_4;                               // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_5;                               // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_6;                               // 0x36C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_7;                               // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x374(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x378(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0x390(0x18)(None)
	class FText                                  K2Node_Select_Default_2;                           // 0x3A8(0x18)(None)
	class FText                                  K2Node_Select_Default_3;                           // 0x3C0(0x18)(None)
	class FText                                  K2Node_Select_Default_4;                           // 0x3D8(0x18)(None)
	class FText                                  K2Node_Select_Default_5;                           // 0x3F0(0x18)(None)
	class FText                                  K2Node_Select_Default_6;                           // 0x408(0x18)(None)
	class FText                                  K2Node_Select_Default_7;                           // 0x420(0x18)(None)
	class FText                                  K2Node_Select_Default_8;                           // 0x438(0x18)(ConstParm)
};

// 0x208 (0x208 - 0x0)
// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.GetLoadoutScore
struct UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_GetLoadoutScore_Params
{
public:
	struct FPlayerLoadoutDataReference           InputPin;                                          // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FText                                  ReturnValue;                                       // 0x28(0x18)(Parm, OutParm, ReturnParm)
	struct FPlayerLoadout                        CallFunc_TryGetPlayerLoadoutData_OutLoadoutData;   // 0x40(0x1A0)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetPlayerLoadoutData_OutBranches;      // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLoadoutScore_Score;                    // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x1F0(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.Get_Extreme_ToolTipWidget
struct UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_Get_Extreme_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.Get_Hard_ToolTipWidget
struct UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_Get_Hard_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.Get_Medium_ToolTipWidget
struct UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_Get_Medium_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.Get_Easy_ToolTipWidget
struct UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_Get_Easy_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x269 (0x269 - 0x0)
// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.RefreshSelectedOption
struct UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_RefreshSelectedOption_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerBackground                 CallFunc_GetPlayerBackground_OutBackground;        // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5318[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerLoadoutDataReference           CallFunc_GetSelectedInitialLoadout_SelectedInitialLoadout; // 0x10(0x28)(HasGetValueTypeHash)
	uint8                                        Pad_531C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerLoadout                        CallFunc_TryGetPlayerLoadoutData_OutLoadoutData;   // 0x40(0x1A0)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetPlayerLoadoutData_OutBranches;      // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_532D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLoadoutScore_ReturnValue;              // 0x1E8(0x18)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5332[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_UI_Text_TruncationCheck_ReturnValue;      // 0x208(0x18)(None)
	TArray<struct FPlayerLoadoutDataReference>   K2Node_MakeArray_Array;                            // 0x220(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_533E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5340[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerLoadoutDataReference           CallFunc_Array_Get_Item;                           // 0x240(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FPlayerLoadoutDataReference_ReturnValue; // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.PreConstruct
struct UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.BndEvt__WBP_CC_DynamicSubPanel_Difficulty_Equipment_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_4_PickerEntryUpdated__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_BndEvt__WBP_CC_DynamicSubPanel_Difficulty_Equipment_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_4_PickerEntryUpdated__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.OnAddedToFocusPath
struct UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.OnRemovedFromFocusPath
struct UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Difficulty_Equipment
struct UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Difficulty_Equipment_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERealmDifficulty                  Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERealmDifficulty                  Temp_byte_Variable_1;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERealmDifficulty                  Temp_byte_Variable_2;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERealmDifficulty                  Temp_byte_Variable_3;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5584[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X;                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_558E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERealmDifficulty                  K2Node_Select_Default;                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_559A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerLoadoutDataReference           K2Node_Select_Default_1;                           // 0x30(0x28)(HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x58(0x8)(NoDestructor)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x64(0x8)(NoDestructor)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue_1;             // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


