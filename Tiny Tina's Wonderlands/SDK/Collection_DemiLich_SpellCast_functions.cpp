#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Collection_DemiLich_SpellCast.Collection_DemiLich_SpellCast_C
// (None)

class UClass* UCollection_DemiLich_SpellCast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Collection_DemiLich_SpellCast_C");

	return Clss;
}


// Collection_DemiLich_SpellCast_C Collection_DemiLich_SpellCast.Default__Collection_DemiLich_SpellCast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollection_DemiLich_SpellCast_C* UCollection_DemiLich_SpellCast_C::GetDefaultObj()
{
	static class UCollection_DemiLich_SpellCast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollection_DemiLich_SpellCast_C*>(UCollection_DemiLich_SpellCast_C::StaticClass()->DefaultObject);

	return Default;
}

}


