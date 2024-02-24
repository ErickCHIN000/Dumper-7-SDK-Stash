#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleGreeting01.KybeleGreeting01_C
// (None)

class UClass* UKybeleGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleGreeting01_C");

	return Clss;
}


// KybeleGreeting01_C KybeleGreeting01.Default__KybeleGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleGreeting01_C* UKybeleGreeting01_C::GetDefaultObj()
{
	static class UKybeleGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleGreeting01_C*>(UKybeleGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


