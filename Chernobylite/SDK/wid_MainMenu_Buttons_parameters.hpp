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
// Function wid_MainMenu_Buttons.wid_MainMenu_Buttons_C.SetButtonsOwner
struct UWid_MainMenu_Buttons_C_SetButtonsOwner_Params
{
public:
	TScriptInterface<class IMainMenuButtonOwnerInterface_C> Owner;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function wid_MainMenu_Buttons.wid_MainMenu_Buttons_C.ExecuteUbergraph_wid_MainMenu_Buttons
struct UWid_MainMenu_Buttons_C_ExecuteUbergraph_wid_MainMenu_Buttons_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


