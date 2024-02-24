#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActionContainer_ShieldImpact.ActionContainer_ShieldImpact_C
// (None)

class UClass* UActionContainer_ShieldImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionContainer_ShieldImpact_C");

	return Clss;
}


// ActionContainer_ShieldImpact_C ActionContainer_ShieldImpact.Default__ActionContainer_ShieldImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionContainer_ShieldImpact_C* UActionContainer_ShieldImpact_C::GetDefaultObj()
{
	static class UActionContainer_ShieldImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionContainer_ShieldImpact_C*>(UActionContainer_ShieldImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


