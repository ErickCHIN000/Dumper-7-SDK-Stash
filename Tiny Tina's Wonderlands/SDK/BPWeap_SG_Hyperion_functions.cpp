#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_SG_Hyperion.BPWeap_SG_Hyperion_C
// (Actor)

class UClass* ABPWeap_SG_Hyperion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_SG_Hyperion_C");

	return Clss;
}


// BPWeap_SG_Hyperion_C BPWeap_SG_Hyperion.Default__BPWeap_SG_Hyperion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_SG_Hyperion_C* ABPWeap_SG_Hyperion_C::GetDefaultObj()
{
	static class ABPWeap_SG_Hyperion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_SG_Hyperion_C*>(ABPWeap_SG_Hyperion_C::StaticClass()->DefaultObject);

	return Default;
}

}


