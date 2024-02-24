#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BanditController.BanditController_C
// (Actor)

class UClass* ABanditController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BanditController_C");

	return Clss;
}


// BanditController_C BanditController.Default__BanditController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABanditController_C* ABanditController_C::GetDefaultObj()
{
	static class ABanditController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABanditController_C*>(ABanditController_C::StaticClass()->DefaultObject);

	return Default;
}

}


