#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaHadSex01.CamillaHadSex01_C
// (None)

class UClass* UCamillaHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaHadSex01_C");

	return Clss;
}


// CamillaHadSex01_C CamillaHadSex01.Default__CamillaHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaHadSex01_C* UCamillaHadSex01_C::GetDefaultObj()
{
	static class UCamillaHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaHadSex01_C*>(UCamillaHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


