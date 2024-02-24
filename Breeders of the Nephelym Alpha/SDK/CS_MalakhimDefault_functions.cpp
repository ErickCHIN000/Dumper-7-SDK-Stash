#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_MalakhimDefault.CS_MalakhimDefault_C
// (None)

class UClass* UCS_MalakhimDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_MalakhimDefault_C");

	return Clss;
}


// CS_MalakhimDefault_C CS_MalakhimDefault.Default__CS_MalakhimDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_MalakhimDefault_C* UCS_MalakhimDefault_C::GetDefaultObj()
{
	static class UCS_MalakhimDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_MalakhimDefault_C*>(UCS_MalakhimDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


