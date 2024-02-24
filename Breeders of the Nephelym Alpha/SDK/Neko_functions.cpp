#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Neko.Neko_C
// (None)

class UClass* UNeko_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Neko_C");

	return Clss;
}


// Neko_C Neko.Default__Neko_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeko_C* UNeko_C::GetDefaultObj()
{
	static class UNeko_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeko_C*>(UNeko_C::StaticClass()->DefaultObject);

	return Default;
}

}


