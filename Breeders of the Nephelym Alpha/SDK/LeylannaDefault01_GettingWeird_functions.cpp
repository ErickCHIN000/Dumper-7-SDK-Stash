#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01_GettingWeird.LeylannaDefault01_GettingWeird_C
// (None)

class UClass* ULeylannaDefault01_GettingWeird_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_GettingWeird_C");

	return Clss;
}


// LeylannaDefault01_GettingWeird_C LeylannaDefault01_GettingWeird.Default__LeylannaDefault01_GettingWeird_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_GettingWeird_C* ULeylannaDefault01_GettingWeird_C::GetDefaultObj()
{
	static class ULeylannaDefault01_GettingWeird_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_GettingWeird_C*>(ULeylannaDefault01_GettingWeird_C::StaticClass()->DefaultObject);

	return Default;
}

}


