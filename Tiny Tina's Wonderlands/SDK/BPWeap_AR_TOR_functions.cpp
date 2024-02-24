#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_AR_TOR.BPWeap_AR_TOR_C
// (Actor)

class UClass* ABPWeap_AR_TOR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_AR_TOR_C");

	return Clss;
}


// BPWeap_AR_TOR_C BPWeap_AR_TOR.Default__BPWeap_AR_TOR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_AR_TOR_C* ABPWeap_AR_TOR_C::GetDefaultObj()
{
	static class ABPWeap_AR_TOR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_AR_TOR_C*>(ABPWeap_AR_TOR_C::StaticClass()->DefaultObject);

	return Default;
}

}


