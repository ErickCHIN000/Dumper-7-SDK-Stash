#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SylvanElf.SylvanElf_C
// (None)

class UClass* USylvanElf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SylvanElf_C");

	return Clss;
}


// SylvanElf_C SylvanElf.Default__SylvanElf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USylvanElf_C* USylvanElf_C::GetDefaultObj()
{
	static class USylvanElf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USylvanElf_C*>(USylvanElf_C::StaticClass()->DefaultObject);

	return Default;
}

}


