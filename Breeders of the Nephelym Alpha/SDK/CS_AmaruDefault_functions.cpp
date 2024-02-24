#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_AmaruDefault.CS_AmaruDefault_C
// (None)

class UClass* UCS_AmaruDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_AmaruDefault_C");

	return Clss;
}


// CS_AmaruDefault_C CS_AmaruDefault.Default__CS_AmaruDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_AmaruDefault_C* UCS_AmaruDefault_C::GetDefaultObj()
{
	static class UCS_AmaruDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_AmaruDefault_C*>(UCS_AmaruDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


