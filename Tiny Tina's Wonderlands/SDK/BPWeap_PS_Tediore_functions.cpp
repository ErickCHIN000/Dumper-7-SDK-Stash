#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_PS_Tediore.BPWeap_PS_Tediore_C
// (Actor)

class UClass* ABPWeap_PS_Tediore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_PS_Tediore_C");

	return Clss;
}


// BPWeap_PS_Tediore_C BPWeap_PS_Tediore.Default__BPWeap_PS_Tediore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_PS_Tediore_C* ABPWeap_PS_Tediore_C::GetDefaultObj()
{
	static class ABPWeap_PS_Tediore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_PS_Tediore_C*>(ABPWeap_PS_Tediore_C::StaticClass()->DefaultObject);

	return Default;
}

}


