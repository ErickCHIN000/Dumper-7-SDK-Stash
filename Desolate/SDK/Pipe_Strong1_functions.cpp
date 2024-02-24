#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pipe_Strong1.Pipe_Strong1_C
// (Actor)

class UClass* APipe_Strong1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pipe_Strong1_C");

	return Clss;
}


// Pipe_Strong1_C Pipe_Strong1.Default__Pipe_Strong1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APipe_Strong1_C* APipe_Strong1_C::GetDefaultObj()
{
	static class APipe_Strong1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APipe_Strong1_C*>(APipe_Strong1_C::StaticClass()->DefaultObject);

	return Default;
}

}


