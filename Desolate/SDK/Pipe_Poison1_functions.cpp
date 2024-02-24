#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pipe_Poison1.Pipe_Poison1_C
// (Actor)

class UClass* APipe_Poison1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pipe_Poison1_C");

	return Clss;
}


// Pipe_Poison1_C Pipe_Poison1.Default__Pipe_Poison1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APipe_Poison1_C* APipe_Poison1_C::GetDefaultObj()
{
	static class APipe_Poison1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APipe_Poison1_C*>(APipe_Poison1_C::StaticClass()->DefaultObject);

	return Default;
}

}


