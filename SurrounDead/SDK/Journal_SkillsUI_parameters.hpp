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
// Function Journal_SkillsUI.Journal_SkillsUI_C.Scavenging_ToolTipWidget
struct UJournal_SkillsUI_C_Scavenging_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Scavenging Level
struct UJournal_SkillsUI_C_Get_Next_Scavenging_Level_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentScavengingLevel
struct UJournal_SkillsUI_C_GetCurrentScavengingLevel_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxScavengingXP
struct UJournal_SkillsUI_C_GetMaxScavengingXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentScavengingXP
struct UJournal_SkillsUI_C_GetCurrentScavengingXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.ScavengingXPMultiplier
struct UJournal_SkillsUI_C_ScavengingXPMultiplier_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.FishingXPMultiplier
struct UJournal_SkillsUI_C_FishingXPMultiplier_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.ThiefXPMultiplier
struct UJournal_SkillsUI_C_ThiefXPMultiplier_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.ReloadingXPMultiplier
struct UJournal_SkillsUI_C_ReloadingXPMultiplier_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EB1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.MarksmanshipXPMultiplier
struct UJournal_SkillsUI_C_MarksmanshipXPMultiplier_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.FirstAidXPMultiplier
struct UJournal_SkillsUI_C_FirstAidXPMultiplier_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.SneakingXPMultiplier
struct UJournal_SkillsUI_C_SneakingXPMultiplier_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F6D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.ToughnessXPMultiplier
struct UJournal_SkillsUI_C_ToughnessXPMultiplier_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.StrengthXPMultiplier
struct UJournal_SkillsUI_C_StrengthXPMultiplier_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.FitnessXPMultiplier
struct UJournal_SkillsUI_C_FitnessXPMultiplier_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2033[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Fishing_ToolTipWidget
struct UJournal_SkillsUI_C_Fishing_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Fishing Level
struct UJournal_SkillsUI_C_Get_Next_Fishing_Level_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentFishingLevel
struct UJournal_SkillsUI_C_GetCurrentFishingLevel_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxFishingXP
struct UJournal_SkillsUI_C_GetMaxFishingXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentFishingXP
struct UJournal_SkillsUI_C_GetCurrentFishingXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Thief_ToolTipWidget
struct UJournal_SkillsUI_C_Thief_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Thief Level
struct UJournal_SkillsUI_C_Get_Next_Thief_Level_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentThiefLevel
struct UJournal_SkillsUI_C_GetCurrentThiefLevel_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxThiefXP
struct UJournal_SkillsUI_C_GetMaxThiefXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentThiefXP
struct UJournal_SkillsUI_C_GetCurrentThiefXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x58 (0x58 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetSkillPoints
struct UJournal_SkillsUI_C_GetSkillPoints_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class UTechTreeComponent_C*                  CallFunc_GetSkillTreeManager_TechTree;             // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2276[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
	class FText                                  CallFunc_Append_Text_Return_Value;                 // 0x40(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Toughness_ToolTipWidget
struct UJournal_SkillsUI_C_Toughness_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Strength_ToolTipWidget
struct UJournal_SkillsUI_C_Strength_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Sneaking_ToolTipWidget
struct UJournal_SkillsUI_C_Sneaking_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Reloading_ToolTipWidget
struct UJournal_SkillsUI_C_Reloading_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.FirstAid_ToolTipWidget
struct UJournal_SkillsUI_C_FirstAid_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Marksmanship_ToolTipWidget
struct UJournal_SkillsUI_C_Marksmanship_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Fitness_ToolTipWidget
struct UJournal_SkillsUI_C_Fitness_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Reloading Level
struct UJournal_SkillsUI_C_Get_Next_Reloading_Level_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentReloadingLevel
struct UJournal_SkillsUI_C_GetCurrentReloadingLevel_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxReloadingXP
struct UJournal_SkillsUI_C_GetMaxReloadingXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentReloadingXP
struct UJournal_SkillsUI_C_GetCurrentReloadingXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Marksmanship Level
struct UJournal_SkillsUI_C_Get_Next_Marksmanship_Level_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentMarksmanshipLevel
struct UJournal_SkillsUI_C_GetCurrentMarksmanshipLevel_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxMarksmanshipXP
struct UJournal_SkillsUI_C_GetMaxMarksmanshipXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentMarksmanshipXP
struct UJournal_SkillsUI_C_GetCurrentMarksmanshipXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next First Aid Level
struct UJournal_SkillsUI_C_Get_Next_First_Aid_Level_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentFirstAidLevel
struct UJournal_SkillsUI_C_GetCurrentFirstAidLevel_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxFirstAidXP
struct UJournal_SkillsUI_C_GetMaxFirstAidXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentFirstAidXP
struct UJournal_SkillsUI_C_GetCurrentFirstAidXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Sneaking Level
struct UJournal_SkillsUI_C_Get_Next_Sneaking_Level_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentSneakingLevel
struct UJournal_SkillsUI_C_GetCurrentSneakingLevel_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxSneakingXP
struct UJournal_SkillsUI_C_GetMaxSneakingXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentSneakingXP
struct UJournal_SkillsUI_C_GetCurrentSneakingXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Toughness Level
struct UJournal_SkillsUI_C_Get_Next_Toughness_Level_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentToughnessLevel
struct UJournal_SkillsUI_C_GetCurrentToughnessLevel_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxTougnessXP
struct UJournal_SkillsUI_C_GetMaxTougnessXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentToughnessXP
struct UJournal_SkillsUI_C_GetCurrentToughnessXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Strength Level
struct UJournal_SkillsUI_C_Get_Next_Strength_Level_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentStrengthLevel
struct UJournal_SkillsUI_C_GetCurrentStrengthLevel_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxStrengthXP
struct UJournal_SkillsUI_C_GetMaxStrengthXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentStrengthXP
struct UJournal_SkillsUI_C_GetCurrentStrengthXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Fitness Level
struct UJournal_SkillsUI_C_Get_Next_Fitness_Level_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentFitnessLevel
struct UJournal_SkillsUI_C_GetCurrentFitnessLevel_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxFitnessXP
struct UJournal_SkillsUI_C_GetMaxFitnessXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentFitnessXP
struct UJournal_SkillsUI_C_GetCurrentFitnessXP_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.PreConstruct
struct UJournal_SkillsUI_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Journal_SkillsUI.Journal_SkillsUI_C.ExecuteUbergraph_Journal_SkillsUI
struct UJournal_SkillsUI_C_ExecuteUbergraph_Journal_SkillsUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPassiveSkillsComponent_C*             CallFunc_GetPassiveSkillsComponent_SkillsComponent; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UResetSkillsSelect_C*                  CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTooltip_PassiveStats_C*               CallFunc_Create_ReturnValue_1;                     // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTechTreeComponent_C*                  CallFunc_GetSkillTreeManager_TechTree;             // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


