#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruGreeting01.MirruGreeting01_C
// (None)

class UClass* UMirruGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruGreeting01_C");

	return Clss;
}


// MirruGreeting01_C MirruGreeting01.Default__MirruGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruGreeting01_C* UMirruGreeting01_C::GetDefaultObj()
{
	static class UMirruGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruGreeting01_C*>(UMirruGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


