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

// 0x50 (0x50 - 0x0)
// Function ScreenPermadeath.ScreenPermadeath_C.Get_DistanceTravelled
struct UScreenPermadeath_C_Get_DistanceTravelled_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class ABP_MPPlayerController_C*              CallFunc_CastToController_Controller;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x20(0x18)(None)
	class FText                                  CallFunc_Append_Text_Return_Value;                 // 0x38(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function ScreenPermadeath.ScreenPermadeath_C.Get_HumansKilled
struct UScreenPermadeath_C_Get_HumansKilled_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class ABP_MPPlayerController_C*              CallFunc_CastToController_Controller;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function ScreenPermadeath.ScreenPermadeath_C.Get_ZombiesKilled
struct UScreenPermadeath_C_Get_ZombiesKilled_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class ABP_MPPlayerController_C*              CallFunc_CastToController_Controller;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function ScreenPermadeath.ScreenPermadeath_C.Get_DaysSurvived
struct UScreenPermadeath_C_Get_DaysSurvived_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class ABP_MPPlayerController_C*              CallFunc_CastToController_Controller;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
};

// 0x9 (0x9 - 0x0)
// Function ScreenPermadeath.ScreenPermadeath_C.ClearUI
struct UScreenPermadeath_C_ClearUI_Params
{
public:
	class AHUD_Game_C*                           CallFunc_GetGameHUD_HUD;                           // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10A (0x10A - 0x0)
// Function ScreenPermadeath.ScreenPermadeath_C.ExecuteUbergraph_ScreenPermadeath
struct UScreenPermadeath_C_ExecuteUbergraph_ScreenPermadeath_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A05[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USD_GameInstance_C*                    CallFunc_GetGameInstance_Instance;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_C*                 CallFunc_CastToCharacter_Character;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetSlotInfoSaveGame_SaveGameName;         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UEMSInfoSaveGame*                      CallFunc_GetSlotInfoSaveGame_ReturnValue;          // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetSlotInfoSaveGame_SaveGameName_1;       // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UEMSInfoSaveGame*                      CallFunc_GetSlotInfoSaveGame_ReturnValue_1;        // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x78(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_DeleteGameInSlot_ReturnValue;             // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A17[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xD0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE0(0x18)(None)
	class UQuitWidgetRespawn_C*                  CallFunc_Create_ReturnValue;                       // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AHUD_Game_C*                           CallFunc_GetGameHUD_HUD;                           // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStandalone_ReturnValue;                 // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


