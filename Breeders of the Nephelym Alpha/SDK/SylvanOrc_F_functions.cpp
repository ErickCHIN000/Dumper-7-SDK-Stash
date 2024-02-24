#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SylvanOrc_F.SylvanOrc_F_C
// (None)

class UClass* USylvanOrc_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SylvanOrc_F_C");

	return Clss;
}


// SylvanOrc_F_C SylvanOrc_F.Default__SylvanOrc_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USylvanOrc_F_C* USylvanOrc_F_C::GetDefaultObj()
{
	static class USylvanOrc_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USylvanOrc_F_C*>(USylvanOrc_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


