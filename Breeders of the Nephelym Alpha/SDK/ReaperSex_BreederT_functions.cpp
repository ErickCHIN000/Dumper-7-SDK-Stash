#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReaperSex_BreederT.ReaperSex_BreederT_C
// (None)

class UClass* UReaperSex_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReaperSex_BreederT_C");

	return Clss;
}


// ReaperSex_BreederT_C ReaperSex_BreederT.Default__ReaperSex_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReaperSex_BreederT_C* UReaperSex_BreederT_C::GetDefaultObj()
{
	static class UReaperSex_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReaperSex_BreederT_C*>(UReaperSex_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


