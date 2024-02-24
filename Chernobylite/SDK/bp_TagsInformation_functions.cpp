#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_TagsInformation.bp_TagsInformation_C
// (None)

class UClass* Ubp_TagsInformation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_TagsInformation_C");

	return Clss;
}


// bp_TagsInformation_C bp_TagsInformation.Default__bp_TagsInformation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubp_TagsInformation_C* Ubp_TagsInformation_C::GetDefaultObj()
{
	static class Ubp_TagsInformation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubp_TagsInformation_C*>(Ubp_TagsInformation_C::StaticClass()->DefaultObject);

	return Default;
}

}


