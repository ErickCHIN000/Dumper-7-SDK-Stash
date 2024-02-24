#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaGreeting01.LeylannaGreeting01_C
// (None)

class UClass* ULeylannaGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaGreeting01_C");

	return Clss;
}


// LeylannaGreeting01_C LeylannaGreeting01.Default__LeylannaGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaGreeting01_C* ULeylannaGreeting01_C::GetDefaultObj()
{
	static class ULeylannaGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaGreeting01_C*>(ULeylannaGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


