#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SapsySalivaGlandSample.SapsySalivaGlandSample_C
// (Actor)

class UClass* ASapsySalivaGlandSample_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SapsySalivaGlandSample_C");

	return Clss;
}


// SapsySalivaGlandSample_C SapsySalivaGlandSample.Default__SapsySalivaGlandSample_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASapsySalivaGlandSample_C* ASapsySalivaGlandSample_C::GetDefaultObj()
{
	static class ASapsySalivaGlandSample_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASapsySalivaGlandSample_C*>(ASapsySalivaGlandSample_C::StaticClass()->DefaultObject);

	return Default;
}

}


