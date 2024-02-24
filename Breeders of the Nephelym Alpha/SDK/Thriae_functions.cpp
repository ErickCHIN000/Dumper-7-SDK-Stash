#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Thriae.Thriae_C
// (None)

class UClass* UThriae_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Thriae_C");

	return Clss;
}


// Thriae_C Thriae.Default__Thriae_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UThriae_C* UThriae_C::GetDefaultObj()
{
	static class UThriae_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UThriae_C*>(UThriae_C::StaticClass()->DefaultObject);

	return Default;
}

}


