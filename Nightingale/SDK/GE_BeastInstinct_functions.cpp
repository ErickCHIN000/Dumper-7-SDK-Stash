#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BeastInstinct.GE_BeastInstinct_C
// (None)

class UClass* UGE_BeastInstinct_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BeastInstinct_C");

	return Clss;
}


// GE_BeastInstinct_C GE_BeastInstinct.Default__GE_BeastInstinct_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BeastInstinct_C* UGE_BeastInstinct_C::GetDefaultObj()
{
	static class UGE_BeastInstinct_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BeastInstinct_C*>(UGE_BeastInstinct_C::StaticClass()->DefaultObject);

	return Default;
}

}


