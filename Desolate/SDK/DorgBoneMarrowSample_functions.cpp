#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DorgBoneMarrowSample.DorgBoneMarrowSample_C
// (Actor)

class UClass* ADorgBoneMarrowSample_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DorgBoneMarrowSample_C");

	return Clss;
}


// DorgBoneMarrowSample_C DorgBoneMarrowSample.Default__DorgBoneMarrowSample_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADorgBoneMarrowSample_C* ADorgBoneMarrowSample_C::GetDefaultObj()
{
	static class ADorgBoneMarrowSample_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADorgBoneMarrowSample_C*>(ADorgBoneMarrowSample_C::StaticClass()->DefaultObject);

	return Default;
}

}


