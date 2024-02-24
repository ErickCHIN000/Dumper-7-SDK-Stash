#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernGreeting01.FernGreeting01_C
// (None)

class UClass* UFernGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernGreeting01_C");

	return Clss;
}


// FernGreeting01_C FernGreeting01.Default__FernGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernGreeting01_C* UFernGreeting01_C::GetDefaultObj()
{
	static class UFernGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernGreeting01_C*>(UFernGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


