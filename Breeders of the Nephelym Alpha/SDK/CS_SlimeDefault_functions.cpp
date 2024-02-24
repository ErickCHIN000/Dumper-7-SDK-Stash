#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_SlimeDefault.CS_SlimeDefault_C
// (None)

class UClass* UCS_SlimeDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_SlimeDefault_C");

	return Clss;
}


// CS_SlimeDefault_C CS_SlimeDefault.Default__CS_SlimeDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_SlimeDefault_C* UCS_SlimeDefault_C::GetDefaultObj()
{
	static class UCS_SlimeDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_SlimeDefault_C*>(UCS_SlimeDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


