#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NotEnoughResolve.NotEnoughResolve_C
// (None)

class UClass* UNotEnoughResolve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotEnoughResolve_C");

	return Clss;
}


// NotEnoughResolve_C NotEnoughResolve.Default__NotEnoughResolve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNotEnoughResolve_C* UNotEnoughResolve_C::GetDefaultObj()
{
	static class UNotEnoughResolve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotEnoughResolve_C*>(UNotEnoughResolve_C::StaticClass()->DefaultObject);

	return Default;
}

}


