#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pipe_Bleed1.Pipe_Bleed1_C
// (Actor)

class UClass* APipe_Bleed1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pipe_Bleed1_C");

	return Clss;
}


// Pipe_Bleed1_C Pipe_Bleed1.Default__Pipe_Bleed1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APipe_Bleed1_C* APipe_Bleed1_C::GetDefaultObj()
{
	static class APipe_Bleed1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APipe_Bleed1_C*>(APipe_Bleed1_C::StaticClass()->DefaultObject);

	return Default;
}

}


