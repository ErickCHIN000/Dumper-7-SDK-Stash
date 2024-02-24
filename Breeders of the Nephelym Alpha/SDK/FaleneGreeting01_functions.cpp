#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneGreeting01.FaleneGreeting01_C
// (None)

class UClass* UFaleneGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneGreeting01_C");

	return Clss;
}


// FaleneGreeting01_C FaleneGreeting01.Default__FaleneGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneGreeting01_C* UFaleneGreeting01_C::GetDefaultObj()
{
	static class UFaleneGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneGreeting01_C*>(UFaleneGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


