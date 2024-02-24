#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernGreeting03.FernGreeting03_C
// (None)

class UClass* UFernGreeting03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernGreeting03_C");

	return Clss;
}


// FernGreeting03_C FernGreeting03.Default__FernGreeting03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernGreeting03_C* UFernGreeting03_C::GetDefaultObj()
{
	static class UFernGreeting03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernGreeting03_C*>(UFernGreeting03_C::StaticClass()->DefaultObject);

	return Default;
}

}


