#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tomato.Tomato_C
// (Actor)

class UClass* ATomato_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tomato_C");

	return Clss;
}


// Tomato_C Tomato.Default__Tomato_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATomato_C* ATomato_C::GetDefaultObj()
{
	static class ATomato_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATomato_C*>(ATomato_C::StaticClass()->DefaultObject);

	return Default;
}

}


