#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcHadSex01.OrcHadSex01_C
// (None)

class UClass* UOrcHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcHadSex01_C");

	return Clss;
}


// OrcHadSex01_C OrcHadSex01.Default__OrcHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcHadSex01_C* UOrcHadSex01_C::GetDefaultObj()
{
	static class UOrcHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcHadSex01_C*>(UOrcHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


