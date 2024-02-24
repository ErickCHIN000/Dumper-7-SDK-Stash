#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StructureConstructed_InitHealth.GE_StructureConstructed_InitHealth_C
// (None)

class UClass* UGE_StructureConstructed_InitHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StructureConstructed_InitHealth_C");

	return Clss;
}


// GE_StructureConstructed_InitHealth_C GE_StructureConstructed_InitHealth.Default__GE_StructureConstructed_InitHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StructureConstructed_InitHealth_C* UGE_StructureConstructed_InitHealth_C::GetDefaultObj()
{
	static class UGE_StructureConstructed_InitHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StructureConstructed_InitHealth_C*>(UGE_StructureConstructed_InitHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


