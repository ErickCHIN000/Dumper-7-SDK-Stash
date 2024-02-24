#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SylvanSlime.SylvanSlime_C
// (None)

class UClass* USylvanSlime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SylvanSlime_C");

	return Clss;
}


// SylvanSlime_C SylvanSlime.Default__SylvanSlime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USylvanSlime_C* USylvanSlime_C::GetDefaultObj()
{
	static class USylvanSlime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USylvanSlime_C*>(USylvanSlime_C::StaticClass()->DefaultObject);

	return Default;
}

}


