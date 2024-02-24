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

// 0x18 (0x18 - 0x0)
// Function GVoiceWrapper.VoipWrapperSubsystem.OnMuteStatusChanged
struct UVoipWrapperSubsystem_OnMuteStatusChanged_Params
{
public:
	class FString                                UniquePlayerId;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMuteAction                       MuteAction;                                        // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1363[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


