#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernGreeting02.FernGreeting02_C
// (None)

class UClass* UFernGreeting02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernGreeting02_C");

	return Clss;
}


// FernGreeting02_C FernGreeting02.Default__FernGreeting02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernGreeting02_C* UFernGreeting02_C::GetDefaultObj()
{
	static class UFernGreeting02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernGreeting02_C*>(UFernGreeting02_C::StaticClass()->DefaultObject);

	return Default;
}

}


