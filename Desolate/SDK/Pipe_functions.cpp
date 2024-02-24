#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pipe.Pipe_C
// (Actor)

class UClass* APipe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pipe_C");

	return Clss;
}


// Pipe_C Pipe.Default__Pipe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APipe_C* APipe_C::GetDefaultObj()
{
	static class APipe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APipe_C*>(APipe_C::StaticClass()->DefaultObject);

	return Default;
}

}


