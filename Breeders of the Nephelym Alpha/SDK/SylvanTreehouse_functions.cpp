#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SylvanTreehouse.SylvanTreehouse_C
// (None)

class UClass* USylvanTreehouse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SylvanTreehouse_C");

	return Clss;
}


// SylvanTreehouse_C SylvanTreehouse.Default__SylvanTreehouse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USylvanTreehouse_C* USylvanTreehouse_C::GetDefaultObj()
{
	static class USylvanTreehouse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USylvanTreehouse_C*>(USylvanTreehouse_C::StaticClass()->DefaultObject);

	return Default;
}

}


