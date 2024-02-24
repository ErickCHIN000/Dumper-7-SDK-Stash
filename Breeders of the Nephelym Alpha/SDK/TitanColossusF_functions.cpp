#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TitanColossusF.TitanColossusF_C
// (None)

class UClass* UTitanColossusF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitanColossusF_C");

	return Clss;
}


// TitanColossusF_C TitanColossusF.Default__TitanColossusF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitanColossusF_C* UTitanColossusF_C::GetDefaultObj()
{
	static class UTitanColossusF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitanColossusF_C*>(UTitanColossusF_C::StaticClass()->DefaultObject);

	return Default;
}

}


