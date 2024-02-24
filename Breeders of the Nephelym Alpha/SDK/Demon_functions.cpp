#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Demon.Demon_C
// (None)

class UClass* UDemon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Demon_C");

	return Clss;
}


// Demon_C Demon.Default__Demon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDemon_C* UDemon_C::GetDefaultObj()
{
	static class UDemon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDemon_C*>(UDemon_C::StaticClass()->DefaultObject);

	return Default;
}

}


