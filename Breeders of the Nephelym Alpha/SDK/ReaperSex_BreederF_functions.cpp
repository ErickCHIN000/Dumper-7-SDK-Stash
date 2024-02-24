#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReaperSex_BreederF.ReaperSex_BreederF_C
// (None)

class UClass* UReaperSex_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReaperSex_BreederF_C");

	return Clss;
}


// ReaperSex_BreederF_C ReaperSex_BreederF.Default__ReaperSex_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReaperSex_BreederF_C* UReaperSex_BreederF_C::GetDefaultObj()
{
	static class UReaperSex_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReaperSex_BreederF_C*>(UReaperSex_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


