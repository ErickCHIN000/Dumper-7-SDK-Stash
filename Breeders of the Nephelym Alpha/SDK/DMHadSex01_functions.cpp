#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMHadSex01.DMHadSex01_C
// (None)

class UClass* UDMHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMHadSex01_C");

	return Clss;
}


// DMHadSex01_C DMHadSex01.Default__DMHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMHadSex01_C* UDMHadSex01_C::GetDefaultObj()
{
	static class UDMHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMHadSex01_C*>(UDMHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


