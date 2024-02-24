#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SylvanSlimeT.SylvanSlimeT_C
// (None)

class UClass* USylvanSlimeT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SylvanSlimeT_C");

	return Clss;
}


// SylvanSlimeT_C SylvanSlimeT.Default__SylvanSlimeT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USylvanSlimeT_C* USylvanSlimeT_C::GetDefaultObj()
{
	static class USylvanSlimeT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USylvanSlimeT_C*>(USylvanSlimeT_C::StaticClass()->DefaultObject);

	return Default;
}

}


