#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Madman_TorchForwardJump.Madman_TorchForwardJump_C
// (Actor)

class UClass* AMadman_TorchForwardJump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Madman_TorchForwardJump_C");

	return Clss;
}


// Madman_TorchForwardJump_C Madman_TorchForwardJump.Default__Madman_TorchForwardJump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMadman_TorchForwardJump_C* AMadman_TorchForwardJump_C::GetDefaultObj()
{
	static class AMadman_TorchForwardJump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMadman_TorchForwardJump_C*>(AMadman_TorchForwardJump_C::StaticClass()->DefaultObject);

	return Default;
}

}


