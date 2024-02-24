#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_NPC_NoCare.NavFilter_NPC_NoCare_C
// (None)

class UClass* UNavFilter_NPC_NoCare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_NPC_NoCare_C");

	return Clss;
}


// NavFilter_NPC_NoCare_C NavFilter_NPC_NoCare.Default__NavFilter_NPC_NoCare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_NPC_NoCare_C* UNavFilter_NPC_NoCare_C::GetDefaultObj()
{
	static class UNavFilter_NPC_NoCare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_NPC_NoCare_C*>(UNavFilter_NPC_NoCare_C::StaticClass()->DefaultObject);

	return Default;
}

}


