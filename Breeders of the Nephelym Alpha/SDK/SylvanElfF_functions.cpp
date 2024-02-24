#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SylvanElfF.SylvanElfF_C
// (None)

class UClass* USylvanElfF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SylvanElfF_C");

	return Clss;
}


// SylvanElfF_C SylvanElfF.Default__SylvanElfF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USylvanElfF_C* USylvanElfF_C::GetDefaultObj()
{
	static class USylvanElfF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USylvanElfF_C*>(USylvanElfF_C::StaticClass()->DefaultObject);

	return Default;
}

}


