#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TitanColossusT.TitanColossusT_C
// (None)

class UClass* UTitanColossusT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitanColossusT_C");

	return Clss;
}


// TitanColossusT_C TitanColossusT.Default__TitanColossusT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitanColossusT_C* UTitanColossusT_C::GetDefaultObj()
{
	static class UTitanColossusT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitanColossusT_C*>(UTitanColossusT_C::StaticClass()->DefaultObject);

	return Default;
}

}


