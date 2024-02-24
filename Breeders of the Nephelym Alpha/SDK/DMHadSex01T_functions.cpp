#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMHadSex01T.DMHadSex01T_C
// (None)

class UClass* UDMHadSex01T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMHadSex01T_C");

	return Clss;
}


// DMHadSex01T_C DMHadSex01T.Default__DMHadSex01T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMHadSex01T_C* UDMHadSex01T_C::GetDefaultObj()
{
	static class UDMHadSex01T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMHadSex01T_C*>(UDMHadSex01T_C::StaticClass()->DefaultObject);

	return Default;
}

}


