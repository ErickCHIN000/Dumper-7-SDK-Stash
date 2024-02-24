#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_KluddeDefault.CS_KluddeDefault_C
// (None)

class UClass* UCS_KluddeDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_KluddeDefault_C");

	return Clss;
}


// CS_KluddeDefault_C CS_KluddeDefault.Default__CS_KluddeDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_KluddeDefault_C* UCS_KluddeDefault_C::GetDefaultObj()
{
	static class UCS_KluddeDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_KluddeDefault_C*>(UCS_KluddeDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


