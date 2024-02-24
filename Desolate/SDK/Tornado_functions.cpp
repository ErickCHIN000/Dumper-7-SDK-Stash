#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tornado.Tornado_C
// (Actor)

class UClass* ATornado_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tornado_C");

	return Clss;
}


// Tornado_C Tornado.Default__Tornado_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATornado_C* ATornado_C::GetDefaultObj()
{
	static class ATornado_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATornado_C*>(ATornado_C::StaticClass()->DefaultObject);

	return Default;
}

}


