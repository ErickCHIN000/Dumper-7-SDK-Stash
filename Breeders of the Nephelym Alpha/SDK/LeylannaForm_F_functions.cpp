#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaForm_F.LeylannaForm_F_C
// (None)

class UClass* ULeylannaForm_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaForm_F_C");

	return Clss;
}


// LeylannaForm_F_C LeylannaForm_F.Default__LeylannaForm_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaForm_F_C* ULeylannaForm_F_C::GetDefaultObj()
{
	static class ULeylannaForm_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaForm_F_C*>(ULeylannaForm_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


