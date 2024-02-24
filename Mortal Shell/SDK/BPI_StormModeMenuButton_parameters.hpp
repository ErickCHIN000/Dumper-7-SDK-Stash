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
// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.UpdateIndexes
struct IBPI_StormModeMenuButton_C_UpdateIndexes_Params
{
public:
	TArray<int32>                                Indexes;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.OverrideCurrentValue
struct IBPI_StormModeMenuButton_C_OverrideCurrentValue_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.NavHorizontal
struct IBPI_StormModeMenuButton_C_NavHorizontal_Params
{
public:
	int32                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.NavVertical
struct IBPI_StormModeMenuButton_C_NavVertical_Params
{
public:
	int32                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.IsButtonEnabled
struct IBPI_StormModeMenuButton_C_IsButtonEnabled_Params
{
public:
	bool                                         Enabled_;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.EnableOrDisableButton
struct IBPI_StormModeMenuButton_C_EnableOrDisableButton_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.ForceSelectButton
struct IBPI_StormModeMenuButton_C_ForceSelectButton_Params
{
public:
	bool                                         Select;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.UpdateSettingName
struct IBPI_StormModeMenuButton_C_UpdateSettingName_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.UpdateSettingValues
struct IBPI_StormModeMenuButton_C_UpdateSettingValues_Params
{
public:
	TArray<class FText>                          Values;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.SetParentRef
struct IBPI_StormModeMenuButton_C_SetParentRef_Params
{
public:
	class UWidget*                               Parent;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.SelectButton
struct IBPI_StormModeMenuButton_C_SelectButton_Params
{
public:
	bool                                         Select_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.HighlightButton
struct IBPI_StormModeMenuButton_C_HighlightButton_Params
{
public:
	bool                                         Highlight_;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


