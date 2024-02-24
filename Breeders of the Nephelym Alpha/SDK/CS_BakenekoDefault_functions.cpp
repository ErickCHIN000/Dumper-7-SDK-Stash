#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_BakenekoDefault.CS_BakenekoDefault_C
// (None)

class UClass* UCS_BakenekoDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_BakenekoDefault_C");

	return Clss;
}


// CS_BakenekoDefault_C CS_BakenekoDefault.Default__CS_BakenekoDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_BakenekoDefault_C* UCS_BakenekoDefault_C::GetDefaultObj()
{
	static class UCS_BakenekoDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_BakenekoDefault_C*>(UCS_BakenekoDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


