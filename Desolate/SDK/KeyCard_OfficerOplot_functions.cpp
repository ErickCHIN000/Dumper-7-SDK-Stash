#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KeyCard_OfficerOplot.KeyCard_OfficerOplot_C
// (Actor)

class UClass* AKeyCard_OfficerOplot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyCard_OfficerOplot_C");

	return Clss;
}


// KeyCard_OfficerOplot_C KeyCard_OfficerOplot.Default__KeyCard_OfficerOplot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKeyCard_OfficerOplot_C* AKeyCard_OfficerOplot_C::GetDefaultObj()
{
	static class AKeyCard_OfficerOplot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKeyCard_OfficerOplot_C*>(AKeyCard_OfficerOplot_C::StaticClass()->DefaultObject);

	return Default;
}

}


