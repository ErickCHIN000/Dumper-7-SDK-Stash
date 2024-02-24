#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieGreeting01.CassieGreeting01_C
// (None)

class UClass* UCassieGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieGreeting01_C");

	return Clss;
}


// CassieGreeting01_C CassieGreeting01.Default__CassieGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieGreeting01_C* UCassieGreeting01_C::GetDefaultObj()
{
	static class UCassieGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieGreeting01_C*>(UCassieGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


