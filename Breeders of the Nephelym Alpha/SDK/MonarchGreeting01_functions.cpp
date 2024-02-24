#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchGreeting01.MonarchGreeting01_C
// (None)

class UClass* UMonarchGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchGreeting01_C");

	return Clss;
}


// MonarchGreeting01_C MonarchGreeting01.Default__MonarchGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchGreeting01_C* UMonarchGreeting01_C::GetDefaultObj()
{
	static class UMonarchGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchGreeting01_C*>(UMonarchGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


