#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DorgAlphaBloodSample.DorgAlphaBloodSample_C
// (Actor)

class UClass* ADorgAlphaBloodSample_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DorgAlphaBloodSample_C");

	return Clss;
}


// DorgAlphaBloodSample_C DorgAlphaBloodSample.Default__DorgAlphaBloodSample_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADorgAlphaBloodSample_C* ADorgAlphaBloodSample_C::GetDefaultObj()
{
	static class ADorgAlphaBloodSample_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADorgAlphaBloodSample_C*>(ADorgAlphaBloodSample_C::StaticClass()->DefaultObject);

	return Default;
}

}


