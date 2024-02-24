#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TunaSandwich.TunaSandwich_C
// (Actor)

class UClass* ATunaSandwich_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TunaSandwich_C");

	return Clss;
}


// TunaSandwich_C TunaSandwich.Default__TunaSandwich_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATunaSandwich_C* ATunaSandwich_C::GetDefaultObj()
{
	static class ATunaSandwich_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATunaSandwich_C*>(ATunaSandwich_C::StaticClass()->DefaultObject);

	return Default;
}

}


