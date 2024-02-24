#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActivatedPlayerStart.ActivatedPlayerStart_C
// (Actor)

class UClass* AActivatedPlayerStart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivatedPlayerStart_C");

	return Clss;
}


// ActivatedPlayerStart_C ActivatedPlayerStart.Default__ActivatedPlayerStart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AActivatedPlayerStart_C* AActivatedPlayerStart_C::GetDefaultObj()
{
	static class AActivatedPlayerStart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AActivatedPlayerStart_C*>(AActivatedPlayerStart_C::StaticClass()->DefaultObject);

	return Default;
}

}


