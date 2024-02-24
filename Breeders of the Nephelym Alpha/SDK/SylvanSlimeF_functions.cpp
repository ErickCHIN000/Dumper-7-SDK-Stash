#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SylvanSlimeF.SylvanSlimeF_C
// (None)

class UClass* USylvanSlimeF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SylvanSlimeF_C");

	return Clss;
}


// SylvanSlimeF_C SylvanSlimeF.Default__SylvanSlimeF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USylvanSlimeF_C* USylvanSlimeF_C::GetDefaultObj()
{
	static class USylvanSlimeF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USylvanSlimeF_C*>(USylvanSlimeF_C::StaticClass()->DefaultObject);

	return Default;
}

}


