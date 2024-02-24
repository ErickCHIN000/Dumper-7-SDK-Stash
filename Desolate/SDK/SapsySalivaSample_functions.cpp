#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SapsySalivaSample.SapsySalivaSample_C
// (Actor)

class UClass* ASapsySalivaSample_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SapsySalivaSample_C");

	return Clss;
}


// SapsySalivaSample_C SapsySalivaSample.Default__SapsySalivaSample_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASapsySalivaSample_C* ASapsySalivaSample_C::GetDefaultObj()
{
	static class ASapsySalivaSample_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASapsySalivaSample_C*>(ASapsySalivaSample_C::StaticClass()->DefaultObject);

	return Default;
}

}


