#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_PS_DAL.BPWeap_PS_DAL_C
// (Actor)

class UClass* ABPWeap_PS_DAL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_PS_DAL_C");

	return Clss;
}


// BPWeap_PS_DAL_C BPWeap_PS_DAL.Default__BPWeap_PS_DAL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_PS_DAL_C* ABPWeap_PS_DAL_C::GetDefaultObj()
{
	static class ABPWeap_PS_DAL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_PS_DAL_C*>(ABPWeap_PS_DAL_C::StaticClass()->DefaultObject);

	return Default;
}

}


