#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneToyT.FaleneToyT_C
// (None)

class UClass* UFaleneToyT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneToyT_C");

	return Clss;
}


// FaleneToyT_C FaleneToyT.Default__FaleneToyT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneToyT_C* UFaleneToyT_C::GetDefaultObj()
{
	static class UFaleneToyT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneToyT_C*>(UFaleneToyT_C::StaticClass()->DefaultObject);

	return Default;
}

}


