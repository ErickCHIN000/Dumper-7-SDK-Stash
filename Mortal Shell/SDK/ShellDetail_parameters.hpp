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

// 0x1 (0x1 - 0x0)
// Function ShellDetail.ShellDetail_C.Get_UI_ShellShade_Entry_Shade_3_Visibility
struct UShellDetail_C_Get_UI_ShellShade_Entry_Shade_3_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.Get_VerticalBox_HadernSelectedAbility_Visibility
struct UShellDetail_C_Get_VerticalBox_HadernSelectedAbility_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSkillObtained_Obtained;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHadernShellSlot_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHadernShell_ReturnValue;                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x35 (0x35 - 0x0)
// Function ShellDetail.ShellDetail_C.SetAbilityDescription
struct UShellDetail_C_SetAbilityDescription_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Local_Desc;                                        // 0x18(0x18)(Edit, BlueprintVisible)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShellNameKnown_bUnlocked;               // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShellNameKnown_bUnlocked_1;             // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShellNameKnown_bUnlocked_2;             // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShellNameKnown_bUnlocked_3;             // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function ShellDetail.ShellDetail_C.SetDyesButtonsRef
struct UShellDetail_C_SetDyesButtonsRef_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_ShellDetail_Entry_C*>       CallFunc_GetDyesButtons_Array;                     // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ShellDetail_Entry_C*               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function ShellDetail.ShellDetail_C.SetUpgradeButtonsRef
struct UShellDetail_C_SetUpgradeButtonsRef_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_ShellUpgradeButton_C*>      CallFunc_GetUpgradeButtons_Array;                  // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C88[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ShellUpgradeButton_C*              CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.OpenDyesTab
struct UShellDetail_C_OpenDyesTab_Params
{
public:
	int32                                        Index_Tab;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function ShellDetail.ShellDetail_C.GetDyesTabVisibility
struct UShellDetail_C_GetDyesTabVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function ShellDetail.ShellDetail_C.GetDyesButtons
struct UShellDetail_C_GetDyesButtons_Params
{
public:
	TArray<class UUI_ShellDetail_Entry_C*>       Array;                                             // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UUI_ShellDetail_Entry_C*>       K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function ShellDetail.ShellDetail_C.PlayHideAnim
struct UShellDetail_C_PlayHideAnim_Params
{
public:
	enum class EUMGSequencePlayMode              PlayMode;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlaybackSpeed;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function ShellDetail.ShellDetail_C.SetStats
struct UShellDetail_C_SetStats_Params
{
public:
	enum class EArmorTypes                       CurrentArmor;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DD7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_4;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_5;                               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Temp_byte_Variable_1;                              // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_6;                               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_7;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_8;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_9;                               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_10;                              // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_11;                              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Temp_byte_Variable_2;                              // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_1;                           // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_12;                              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_13;                              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_14;                              // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_15;                              // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_16;                              // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_17;                              // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_2;                           // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.OpenDescriptionTab
struct UShellDetail_C_OpenDescriptionTab_Params
{
public:
	int32                                        Index_Tab;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.OpenAbilitiesTab
struct UShellDetail_C_OpenAbilitiesTab_Params
{
public:
	int32                                        Index_Tab;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function ShellDetail.ShellDetail_C.NavTabUnhover
struct UShellDetail_C_NavTabUnhover_Params
{
public:
	class UUI_MainMenu_Button_C*                 Local_Button;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ED0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_MainMenu_Button_C*>         CallFunc_GetTabButtons_Array;                      // 0x18(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ED9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function ShellDetail.ShellDetail_C.NavTabHover
struct UShellDetail_C_NavTabHover_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F54[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Local_Button;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_MainMenu_Button_C*>         CallFunc_GetTabButtons_Array;                      // 0x20(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F69[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.HoverUpgradeButton
struct UShellDetail_C_HoverUpgradeButton_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function ShellDetail.ShellDetail_C.SetUpgradeTitle
struct UShellDetail_C_SetUpgradeTitle_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Unlocked;                                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       Armor;                                             // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_200A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2015[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetShellName_ShellName;                   // 0x28(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2017[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x48(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0x60(0x18)(None)
};

// 0x1BA (0x1BA - 0x0)
// Function ShellDetail.ShellDetail_C.SetTexts
struct UShellDetail_C_SetTexts_Params
{
public:
	class FName                                  UpgradeID;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GlimpsesEnough;                                    // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         TarEnough;                                         // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Unlocked;                                          // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_210A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Title;                                             // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Description;                                       // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Lore;                                              // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Glimpses;                                          // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Tar;                                               // 0x5C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Armor;                                             // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_211E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           DescriptionColor;                                  // 0x68(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         LockedInPressPreview;                              // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_LockedPP;                                    // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2126[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           Local_Color;                                       // 0x98(0x28)(Edit, BlueprintVisible)
	enum class EArmorTypes                       Local_Shell;                                       // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_212F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Local_Lore;                                        // 0xC8(0x18)(Edit, BlueprintVisible)
	class FText                                  Local_Description;                                 // 0xE0(0x18)(Edit, BlueprintVisible)
	class FText                                  Local_Title;                                       // 0xF8(0x18)(Edit, BlueprintVisible)
	bool                                         Local_Glimpses_Enough;                             // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_Tar_Enough;                                  // 0x111(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_Unlocked;                                    // 0x112(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_213A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_Tar;                                         // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_Glimpses;                                    // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_Index;                                       // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x123(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x125(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x126(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x127(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x12B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_216B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x130(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x148(0x18)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x162(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x163(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2186[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetCostColor_SlateColor;                  // 0x168(0x28)(None)
	struct FSlateColor                           CallFunc_GetCostColor_SlateColor_1;                // 0x190(0x28)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_4;                           // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function ShellDetail.ShellDetail_C.ResetIcons
struct UShellDetail_C_ResetIcons_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_ShellUpgradeButton_C*>      CallFunc_GetUpgradeButtons_Array;                  // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ShellUpgradeButton_C*              CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function ShellDetail.ShellDetail_C.GetRunesLines
struct UShellDetail_C_GetRunesLines_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2222[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ShellUpgradeProgressLine_C*        Output;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_ShellUpgradeProgressLine_C*> K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UUI_ShellUpgradeProgressLine_C*        CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ShellDetail.ShellDetail_C.GetUpgradeButtons
struct UShellDetail_C_GetUpgradeButtons_Params
{
public:
	TArray<class UUI_ShellUpgradeButton_C*>      Array;                                             // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UUI_ShellUpgradeButton_C*>      K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ShellDetail.ShellDetail_C.UI_Sound_TabSwitch
struct UShellDetail_C_UI_Sound_TabSwitch_Params
{
public:
	bool                                         SkipSound;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function ShellDetail.ShellDetail_C.UpdateTabs
struct UShellDetail_C_UpdateTabs_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SkipSound;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_SkipSound;                                   // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_228A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Local_IndexTab;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_MainMenu_Button_C*>         CallFunc_GetTabButtons_Array;                      // 0x18(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_229A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ShellDetail.ShellDetail_C.GetTabButtons
struct UShellDetail_C_GetTabButtons_Params
{
public:
	TArray<class UUI_MainMenu_Button_C*>         Array;                                             // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UUI_MainMenu_Button_C*>         K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function ShellDetail.ShellDetail_C.PlayShowAnim
struct UShellDetail_C_PlayShowAnim_Params
{
public:
	enum class EUMGSequencePlayMode              PlayMode;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2305[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlaybackSpeed;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_230E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function ShellDetail.ShellDetail_C.SetDetails
struct UShellDetail_C_SetDetails_Params
{
public:
	class FText                                  ShellName;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  ShellDescription;                                  // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x38 (0x38 - 0x0)
// Function ShellDetail.ShellDetail_C.HandleParallax
struct UShellDetail_C_HandleParallax_Params
{
public:
	struct FVector2D                             NormalizedMousePos;                                // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetMousePosFromCenterOfScreen_Position;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue_1;     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Portrait_K2Node_ComponentBoundEvent_0_OnButtonHovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Portrait_K2Node_ComponentBoundEvent_0_OnButtonHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_Common_01_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Glyph_Common_01_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_Common_02_K2Node_ComponentBoundEvent_2_OnButtonHovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Glyph_Common_02_K2Node_ComponentBoundEvent_2_OnButtonHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_Common_03_K2Node_ComponentBoundEvent_3_OnButtonHovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Glyph_Common_03_K2Node_ComponentBoundEvent_3_OnButtonHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_01_K2Node_ComponentBoundEvent_4_OnButtonHovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Glyph_01_K2Node_ComponentBoundEvent_4_OnButtonHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_02_K2Node_ComponentBoundEvent_5_OnButtonHovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Glyph_02_K2Node_ComponentBoundEvent_5_OnButtonHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_03_K2Node_ComponentBoundEvent_6_OnButtonHovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Glyph_03_K2Node_ComponentBoundEvent_6_OnButtonHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_04_K2Node_ComponentBoundEvent_7_OnButtonHovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Glyph_04_K2Node_ComponentBoundEvent_7_OnButtonHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_05_K2Node_ComponentBoundEvent_8_OnButtonHovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Glyph_05_K2Node_ComponentBoundEvent_8_OnButtonHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_06_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Glyph_06_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Glyph_07_K2Node_ComponentBoundEvent_10_OnButtonHovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Glyph_07_K2Node_ComponentBoundEvent_10_OnButtonHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_11_Hovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_11_Hovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2484[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_13_Hovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_13_Hovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2533[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Abilities_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2553[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2572[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_17_Hovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_17_Hovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_259A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_18_Unhovered__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_18_Unhovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function ShellDetail.ShellDetail_C.Tick
struct UShellDetail_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ShellDetail.ShellDetail_C.BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature
struct UShellDetail_C_BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function ShellDetail.ShellDetail_C.ExecuteUbergraph_ShellDetail
struct UShellDetail_C_ExecuteUbergraph_ShellDetail_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_19;               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_18;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_17;               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_16;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_15;               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_14;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_13;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_12;               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_11;               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_10;               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_9;                // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_8;                // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_8;               // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_7;                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_7;               // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_6;                // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_6;               // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_5;                // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_5;               // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_4;                // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_4;               // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_3;                // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_3;               // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_2;                // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2701[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_2;               // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_1;                // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_270A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_1;               // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xB8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget;                 // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


