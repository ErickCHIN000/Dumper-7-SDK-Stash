#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cond_ShrineCompletion_Pandoracorn.Cond_ShrineCompletion_Pandoracorn_C
// (None)

class UClass* UCond_ShrineCompletion_Pandoracorn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cond_ShrineCompletion_Pandoracorn_C");

	return Clss;
}


// Cond_ShrineCompletion_Pandoracorn_C Cond_ShrineCompletion_Pandoracorn.Default__Cond_ShrineCompletion_Pandoracorn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCond_ShrineCompletion_Pandoracorn_C* UCond_ShrineCompletion_Pandoracorn_C::GetDefaultObj()
{
	static class UCond_ShrineCompletion_Pandoracorn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCond_ShrineCompletion_Pandoracorn_C*>(UCond_ShrineCompletion_Pandoracorn_C::StaticClass()->DefaultObject);

	return Default;
}

}


