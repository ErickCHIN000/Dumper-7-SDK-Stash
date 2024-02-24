#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MatchboxRadar.BP_MatchboxRadar_C
// (None)

class UClass* UBP_MatchboxRadar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MatchboxRadar_C");

	return Clss;
}


// BP_MatchboxRadar_C BP_MatchboxRadar.Default__BP_MatchboxRadar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MatchboxRadar_C* UBP_MatchboxRadar_C::GetDefaultObj()
{
	static class UBP_MatchboxRadar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MatchboxRadar_C*>(UBP_MatchboxRadar_C::StaticClass()->DefaultObject);

	return Default;
}

}


