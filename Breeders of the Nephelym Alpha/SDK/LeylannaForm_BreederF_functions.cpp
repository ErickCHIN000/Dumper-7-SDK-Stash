#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaForm_BreederF.LeylannaForm_BreederF_C
// (None)

class UClass* ULeylannaForm_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaForm_BreederF_C");

	return Clss;
}


// LeylannaForm_BreederF_C LeylannaForm_BreederF.Default__LeylannaForm_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaForm_BreederF_C* ULeylannaForm_BreederF_C::GetDefaultObj()
{
	static class ULeylannaForm_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaForm_BreederF_C*>(ULeylannaForm_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


