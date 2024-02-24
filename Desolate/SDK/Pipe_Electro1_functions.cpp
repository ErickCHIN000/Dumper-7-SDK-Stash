#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pipe_Electro1.Pipe_Electro1_C
// (Actor)

class UClass* APipe_Electro1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pipe_Electro1_C");

	return Clss;
}


// Pipe_Electro1_C Pipe_Electro1.Default__Pipe_Electro1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APipe_Electro1_C* APipe_Electro1_C::GetDefaultObj()
{
	static class APipe_Electro1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APipe_Electro1_C*>(APipe_Electro1_C::StaticClass()->DefaultObject);

	return Default;
}

}


