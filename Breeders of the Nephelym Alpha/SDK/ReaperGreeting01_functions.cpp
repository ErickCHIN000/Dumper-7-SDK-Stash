#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReaperGreeting01.ReaperGreeting01_C
// (None)

class UClass* UReaperGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReaperGreeting01_C");

	return Clss;
}


// ReaperGreeting01_C ReaperGreeting01.Default__ReaperGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReaperGreeting01_C* UReaperGreeting01_C::GetDefaultObj()
{
	static class UReaperGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReaperGreeting01_C*>(UReaperGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


