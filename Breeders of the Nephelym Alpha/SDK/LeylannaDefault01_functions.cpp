#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01.LeylannaDefault01_C
// (None)

class UClass* ULeylannaDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_C");

	return Clss;
}


// LeylannaDefault01_C LeylannaDefault01.Default__LeylannaDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_C* ULeylannaDefault01_C::GetDefaultObj()
{
	static class ULeylannaDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_C*>(ULeylannaDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


