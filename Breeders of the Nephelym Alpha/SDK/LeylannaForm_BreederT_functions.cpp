#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaForm_BreederT.LeylannaForm_BreederT_C
// (None)

class UClass* ULeylannaForm_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaForm_BreederT_C");

	return Clss;
}


// LeylannaForm_BreederT_C LeylannaForm_BreederT.Default__LeylannaForm_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaForm_BreederT_C* ULeylannaForm_BreederT_C::GetDefaultObj()
{
	static class ULeylannaForm_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaForm_BreederT_C*>(ULeylannaForm_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


