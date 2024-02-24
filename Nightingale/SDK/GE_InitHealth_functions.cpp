#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InitHealth.GE_InitHealth_C
// (None)

class UClass* UGE_InitHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InitHealth_C");

	return Clss;
}


// GE_InitHealth_C GE_InitHealth.Default__GE_InitHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InitHealth_C* UGE_InitHealth_C::GetDefaultObj()
{
	static class UGE_InitHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InitHealth_C*>(UGE_InitHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


