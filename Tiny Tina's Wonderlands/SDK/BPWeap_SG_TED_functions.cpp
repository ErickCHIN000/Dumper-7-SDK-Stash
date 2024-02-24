#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_SG_TED.BPWeap_SG_TED_C
// (Actor)

class UClass* ABPWeap_SG_TED_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_SG_TED_C");

	return Clss;
}


// BPWeap_SG_TED_C BPWeap_SG_TED.Default__BPWeap_SG_TED_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_SG_TED_C* ABPWeap_SG_TED_C::GetDefaultObj()
{
	static class ABPWeap_SG_TED_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_SG_TED_C*>(ABPWeap_SG_TED_C::StaticClass()->DefaultObject);

	return Default;
}

}


