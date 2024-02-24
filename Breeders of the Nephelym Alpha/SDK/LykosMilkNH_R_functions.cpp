#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LykosMilkNH_R.LykosMilkNH_R_C
// (None)

class UClass* ULykosMilkNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LykosMilkNH_R_C");

	return Clss;
}


// LykosMilkNH_R_C LykosMilkNH_R.Default__LykosMilkNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULykosMilkNH_R_C* ULykosMilkNH_R_C::GetDefaultObj()
{
	static class ULykosMilkNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULykosMilkNH_R_C*>(ULykosMilkNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


