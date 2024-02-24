#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieToyF.CassieToyF_C
// (None)

class UClass* UCassieToyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieToyF_C");

	return Clss;
}


// CassieToyF_C CassieToyF.Default__CassieToyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieToyF_C* UCassieToyF_C::GetDefaultObj()
{
	static class UCassieToyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieToyF_C*>(UCassieToyF_C::StaticClass()->DefaultObject);

	return Default;
}

}


