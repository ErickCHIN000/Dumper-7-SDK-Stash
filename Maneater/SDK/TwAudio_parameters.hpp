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
// Function TwAudio.TwAkEmitterArrayComponent.PostEvent
struct UTwAkEmitterArrayComponent_PostEvent_Params
{
public:
	class UAkAudioEvent*                         Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwAudio.TwAkSplineProximityEffectsComponent.EndOverlap
struct UTwAkSplineProximityEffectsComponent_EndOverlap_Params
{
public:
	class AActor*                                A1;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                A2;                                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwAudio.TwAkSplineProximityEffectsComponent.BeginOverlap
struct UTwAkSplineProximityEffectsComponent_BeginOverlap_Params
{
public:
	class AActor*                                A1;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                A2;                                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


