#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieToyT.CassieToyT_C
// (None)

class UClass* UCassieToyT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieToyT_C");

	return Clss;
}


// CassieToyT_C CassieToyT.Default__CassieToyT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieToyT_C* UCassieToyT_C::GetDefaultObj()
{
	static class UCassieToyT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieToyT_C*>(UCassieToyT_C::StaticClass()->DefaultObject);

	return Default;
}

}


