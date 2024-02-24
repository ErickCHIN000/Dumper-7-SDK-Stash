#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_GoblinDefault.CS_GoblinDefault_C
// (None)

class UClass* UCS_GoblinDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_GoblinDefault_C");

	return Clss;
}


// CS_GoblinDefault_C CS_GoblinDefault.Default__CS_GoblinDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_GoblinDefault_C* UCS_GoblinDefault_C::GetDefaultObj()
{
	static class UCS_GoblinDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_GoblinDefault_C*>(UCS_GoblinDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


