#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiGreeting01.FesssiGreeting01_C
// (None)

class UClass* UFesssiGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiGreeting01_C");

	return Clss;
}


// FesssiGreeting01_C FesssiGreeting01.Default__FesssiGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiGreeting01_C* UFesssiGreeting01_C::GetDefaultObj()
{
	static class UFesssiGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiGreeting01_C*>(UFesssiGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


