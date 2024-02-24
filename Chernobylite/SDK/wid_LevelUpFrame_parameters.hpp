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
// Function wid_LevelUpFrame.wid_LevelUpFrame_C.GetSoundToPlay
struct UWid_LevelUpFrame_C_GetSoundToPlay_Params
{
public:
	class UAkAudioEvent*                         Event;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function wid_LevelUpFrame.wid_LevelUpFrame_C.CapitalizeText
struct UWid_LevelUpFrame_C_CapitalizeText_Params
{
public:
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x0(0x18)(None)
};

// 0x50 (0x50 - 0x0)
// Function wid_LevelUpFrame.wid_LevelUpFrame_C.UpdateSkillPointsText
struct UWid_LevelUpFrame_C_UpdateSkillPointsText_Params
{
public:
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function wid_LevelUpFrame.wid_LevelUpFrame_C.PreConstruct
struct UWid_LevelUpFrame_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function wid_LevelUpFrame.wid_LevelUpFrame_C.ExecuteUbergraph_wid_LevelUpFrame
struct UWid_LevelUpFrame_C_ExecuteUbergraph_wid_LevelUpFrame_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


