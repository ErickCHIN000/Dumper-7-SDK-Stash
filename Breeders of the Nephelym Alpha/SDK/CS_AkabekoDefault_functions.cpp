#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_AkabekoDefault.CS_AkabekoDefault_C
// (None)

class UClass* UCS_AkabekoDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_AkabekoDefault_C");

	return Clss;
}


// CS_AkabekoDefault_C CS_AkabekoDefault.Default__CS_AkabekoDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_AkabekoDefault_C* UCS_AkabekoDefault_C::GetDefaultObj()
{
	static class UCS_AkabekoDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_AkabekoDefault_C*>(UCS_AkabekoDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


