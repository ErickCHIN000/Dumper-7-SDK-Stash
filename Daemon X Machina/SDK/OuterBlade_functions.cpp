#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OuterBlade.OuterBlade_C
// (Actor)

class UClass* AOuterBlade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OuterBlade_C");

	return Clss;
}


// OuterBlade_C OuterBlade.Default__OuterBlade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOuterBlade_C* AOuterBlade_C::GetDefaultObj()
{
	static class AOuterBlade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOuterBlade_C*>(AOuterBlade_C::StaticClass()->DefaultObject);

	return Default;
}

}


