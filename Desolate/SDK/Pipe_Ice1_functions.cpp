#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pipe_Ice1.Pipe_Ice1_C
// (Actor)

class UClass* APipe_Ice1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pipe_Ice1_C");

	return Clss;
}


// Pipe_Ice1_C Pipe_Ice1.Default__Pipe_Ice1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APipe_Ice1_C* APipe_Ice1_C::GetDefaultObj()
{
	static class APipe_Ice1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APipe_Ice1_C*>(APipe_Ice1_C::StaticClass()->DefaultObject);

	return Default;
}

}


