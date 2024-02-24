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
// Function CharacterUIInterface.CharacterUIInterface_C.ShowTutorial
struct ICharacterUIInterface_C_ShowTutorial_Params
{
public:
	class FName                                  TutorialID;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function CharacterUIInterface.CharacterUIInterface_C.ToggleScreen
struct ICharacterUIInterface_C_ToggleScreen_Params
{
public:
	enum class ECharacterScreenType              ScreenType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


