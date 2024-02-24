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
// Function GameModeUtilInterface.GameModeUtilInterface_C.GameModeUtils_GetArbNameForLevelFromSaveGame
struct IGameModeUtilInterface_C_GameModeUtils_GetArbNameForLevelFromSaveGame_Params
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ArbName;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function GameModeUtilInterface.GameModeUtilInterface_C.GameModeUtils_IsAbritraryNameInSet
struct IGameModeUtilInterface_C_GameModeUtils_IsAbritraryNameInSet_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsInSet;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function GameModeUtilInterface.GameModeUtilInterface_C.GameModeUtils_RemoveAbritraryNameFromChangedSet
struct IGameModeUtilInterface_C_GameModeUtils_RemoveAbritraryNameFromChangedSet_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccessful;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function GameModeUtilInterface.GameModeUtilInterface_C.GameModeUtils_AddAbritraryNameToChangedSet
struct IGameModeUtilInterface_C_GameModeUtils_AddAbritraryNameToChangedSet_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


