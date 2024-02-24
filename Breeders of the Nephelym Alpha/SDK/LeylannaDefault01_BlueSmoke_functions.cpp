#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01_BlueSmoke.LeylannaDefault01_BlueSmoke_C
// (None)

class UClass* ULeylannaDefault01_BlueSmoke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_BlueSmoke_C");

	return Clss;
}


// LeylannaDefault01_BlueSmoke_C LeylannaDefault01_BlueSmoke.Default__LeylannaDefault01_BlueSmoke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_BlueSmoke_C* ULeylannaDefault01_BlueSmoke_C::GetDefaultObj()
{
	static class ULeylannaDefault01_BlueSmoke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_BlueSmoke_C*>(ULeylannaDefault01_BlueSmoke_C::StaticClass()->DefaultObject);

	return Default;
}

}


