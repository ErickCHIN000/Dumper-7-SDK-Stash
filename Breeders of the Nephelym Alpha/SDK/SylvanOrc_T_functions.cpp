#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SylvanOrc_T.SylvanOrc_T_C
// (None)

class UClass* USylvanOrc_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SylvanOrc_T_C");

	return Clss;
}


// SylvanOrc_T_C SylvanOrc_T.Default__SylvanOrc_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USylvanOrc_T_C* USylvanOrc_T_C::GetDefaultObj()
{
	static class USylvanOrc_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USylvanOrc_T_C*>(USylvanOrc_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


