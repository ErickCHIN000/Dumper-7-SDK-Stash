#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Madman_ForwardJump.Madman_ForwardJump_C
// (Actor)

class UClass* AMadman_ForwardJump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Madman_ForwardJump_C");

	return Clss;
}


// Madman_ForwardJump_C Madman_ForwardJump.Default__Madman_ForwardJump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMadman_ForwardJump_C* AMadman_ForwardJump_C::GetDefaultObj()
{
	static class AMadman_ForwardJump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMadman_ForwardJump_C*>(AMadman_ForwardJump_C::StaticClass()->DefaultObject);

	return Default;
}

}


