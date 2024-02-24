#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SylvanOrc.SylvanOrc_C
// (None)

class UClass* USylvanOrc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SylvanOrc_C");

	return Clss;
}


// SylvanOrc_C SylvanOrc.Default__SylvanOrc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USylvanOrc_C* USylvanOrc_C::GetDefaultObj()
{
	static class USylvanOrc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USylvanOrc_C*>(USylvanOrc_C::StaticClass()->DefaultObject);

	return Default;
}

}


