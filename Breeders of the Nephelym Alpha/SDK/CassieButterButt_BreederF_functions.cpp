#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieButterButt_BreederF.CassieButterButt_BreederF_C
// (None)

class UClass* UCassieButterButt_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieButterButt_BreederF_C");

	return Clss;
}


// CassieButterButt_BreederF_C CassieButterButt_BreederF.Default__CassieButterButt_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieButterButt_BreederF_C* UCassieButterButt_BreederF_C::GetDefaultObj()
{
	static class UCassieButterButt_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieButterButt_BreederF_C*>(UCassieButterButt_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


