#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01_BlueSmoke2.LeylannaDefault01_BlueSmoke2_C
// (None)

class UClass* ULeylannaDefault01_BlueSmoke2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_BlueSmoke2_C");

	return Clss;
}


// LeylannaDefault01_BlueSmoke2_C LeylannaDefault01_BlueSmoke2.Default__LeylannaDefault01_BlueSmoke2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_BlueSmoke2_C* ULeylannaDefault01_BlueSmoke2_C::GetDefaultObj()
{
	static class ULeylannaDefault01_BlueSmoke2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_BlueSmoke2_C*>(ULeylannaDefault01_BlueSmoke2_C::StaticClass()->DefaultObject);

	return Default;
}

}


