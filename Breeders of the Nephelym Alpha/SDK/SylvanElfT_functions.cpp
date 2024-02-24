#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SylvanElfT.SylvanElfT_C
// (None)

class UClass* USylvanElfT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SylvanElfT_C");

	return Clss;
}


// SylvanElfT_C SylvanElfT.Default__SylvanElfT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USylvanElfT_C* USylvanElfT_C::GetDefaultObj()
{
	static class USylvanElfT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USylvanElfT_C*>(USylvanElfT_C::StaticClass()->DefaultObject);

	return Default;
}

}


