#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LykosMilkNH_G.LykosMilkNH_G_C
// (None)

class UClass* ULykosMilkNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LykosMilkNH_G_C");

	return Clss;
}


// LykosMilkNH_G_C LykosMilkNH_G.Default__LykosMilkNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULykosMilkNH_G_C* ULykosMilkNH_G_C::GetDefaultObj()
{
	static class ULykosMilkNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULykosMilkNH_G_C*>(ULykosMilkNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


