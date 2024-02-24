#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pipe_Fire1.Pipe_Fire1_C
// (Actor)

class UClass* APipe_Fire1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pipe_Fire1_C");

	return Clss;
}


// Pipe_Fire1_C Pipe_Fire1.Default__Pipe_Fire1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APipe_Fire1_C* APipe_Fire1_C::GetDefaultObj()
{
	static class APipe_Fire1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APipe_Fire1_C*>(APipe_Fire1_C::StaticClass()->DefaultObject);

	return Default;
}

}


