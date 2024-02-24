#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NLChip.NLChip_C
// (Actor)

class UClass* ANLChip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NLChip_C");

	return Clss;
}


// NLChip_C NLChip.Default__NLChip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANLChip_C* ANLChip_C::GetDefaultObj()
{
	static class ANLChip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANLChip_C*>(ANLChip_C::StaticClass()->DefaultObject);

	return Default;
}

}


