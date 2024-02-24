#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_KusarikkuDefault.CS_KusarikkuDefault_C
// (None)

class UClass* UCS_KusarikkuDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_KusarikkuDefault_C");

	return Clss;
}


// CS_KusarikkuDefault_C CS_KusarikkuDefault.Default__CS_KusarikkuDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_KusarikkuDefault_C* UCS_KusarikkuDefault_C::GetDefaultObj()
{
	static class UCS_KusarikkuDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_KusarikkuDefault_C*>(UCS_KusarikkuDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


