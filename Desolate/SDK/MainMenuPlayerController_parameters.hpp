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

// 0xD8 (0xD8 - 0x0)
// Function MainMenuPlayerController.MainMenuPlayerController_C.OnSessionInviteAccepted
struct AMainMenuPlayerController_C_OnSessionInviteAccepted_Params
{
public:
	struct FSHUniqueNetId                        PersonInviting;                                    // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBlueprintSessionResult               SearchResult;                                      // 0x20(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x109 (0x109 - 0x0)
// Function MainMenuPlayerController.MainMenuPlayerController_C.ExecuteUbergraph_MainMenuPlayerController
struct AMainMenuPlayerController_C_ExecuteUbergraph_MainMenuPlayerController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_1A2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSHUniqueNetId                        K2Node_Event_PersonInviting;                       // 0x28(0x20)(None)
	struct FBlueprintSessionResult               K2Node_Event_SearchResult;                         // 0x48(0xB8)(ConstParm)
	class UJoinSessionCallbackProxy*             CallFunc_JoinSession_ReturnValue;                  // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


