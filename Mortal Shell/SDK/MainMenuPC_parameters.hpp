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

// 0x11 (0x11 - 0x0)
// Function MainMenuPC.MainMenuPC_C.PCLoadingScreen_GetItemsDiscovered
struct AMainMenuPC_C_PCLoadingScreen_GetItemsDiscovered_Params
{
public:
	TArray<class FName>                          ItemsDiscovered;                                   // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash)
	bool                                         Empty;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x150 (0x150 - 0x0)
// Function MainMenuPC.MainMenuPC_C.PCLoadingScreen_GetLoadingScreenInfo
struct AMainMenuPC_C_PCLoadingScreen_GetLoadingScreenInfo_Params
{
public:
	struct FInventoryItem                        InventoryItem;                                     // 0x0(0x132)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_CD5[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LocalFamiliarity;                                  // 0x138(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CD7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ItemEffectDescription;                             // 0x140(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuPC.MainMenuPC_C.UpdateCameraModifierMotionBlur
struct AMainMenuPC_C_UpdateCameraModifierMotionBlur_Params
{
public:
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function MainMenuPC.MainMenuPC_C.AddCameraModifierMotionBlur
struct AMainMenuPC_C_AddCameraModifierMotionBlur_Params
{
public:
	class UCameraModifier*                       CallFunc_AddNewCameraModifier_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraModifier_MotionBlur_C*          K2Node_DynamicCast_AsCamera_Modifier_Motion_Blur;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function MainMenuPC.MainMenuPC_C.AddCameraModifierBrightness
struct AMainMenuPC_C_AddCameraModifierBrightness_Params
{
public:
	class UCameraModifier*                       CallFunc_AddNewCameraModifier_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraModifier_Brightness_C*          K2Node_DynamicCast_AsCamera_Modifier_Brightness;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function MainMenuPC.MainMenuPC_C.AddCameraModifierFilmGrain
struct AMainMenuPC_C_AddCameraModifierFilmGrain_Params
{
public:
	class UCameraModifier*                       CallFunc_AddNewCameraModifier_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraModifier_FilmGrain_C*           K2Node_DynamicCast_AsCamera_Modifier_Film_Grain;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuPC.MainMenuPC_C.AddCameraModifierPixelMode
struct AMainMenuPC_C_AddCameraModifierPixelMode_Params
{
public:
	class UCameraModifier*                       CallFunc_AddNewCameraModifier_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuPC.MainMenuPC_C.UpdateCameraModifierFilmGrain
struct AMainMenuPC_C_UpdateCameraModifierFilmGrain_Params
{
public:
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuPC.MainMenuPC_C.UpdateCameraModifierPixelMode
struct AMainMenuPC_C_UpdateCameraModifierPixelMode_Params
{
public:
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MainMenuPC.MainMenuPC_C.UpdateCameraModifierBrightness
struct AMainMenuPC_C_UpdateCameraModifierBrightness_Params
{
public:
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MainMenuPC.MainMenuPC_C.ExecuteUbergraph_MainMenuPC
struct AMainMenuPC_C_ExecuteUbergraph_MainMenuPC_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MainMenuPC.MainMenuPC_C.InputTypeChanged__DelegateSignature
struct AMainMenuPC_C_InputTypeChanged__DelegateSignature_Params
{
public:
	enum class Enum_UI_InputType                 Input;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


