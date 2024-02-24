#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaForm_T.LeylannaForm_T_C
// (None)

class UClass* ULeylannaForm_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaForm_T_C");

	return Clss;
}


// LeylannaForm_T_C LeylannaForm_T.Default__LeylannaForm_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaForm_T_C* ULeylannaForm_T_C::GetDefaultObj()
{
	static class ULeylannaForm_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaForm_T_C*>(ULeylannaForm_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


