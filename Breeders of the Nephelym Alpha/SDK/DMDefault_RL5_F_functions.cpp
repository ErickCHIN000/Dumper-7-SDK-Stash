#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMDefault_RL5_F.DMDefault_RL5_F_C
// (None)

class UClass* UDMDefault_RL5_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMDefault_RL5_F_C");

	return Clss;
}


// DMDefault_RL5_F_C DMDefault_RL5_F.Default__DMDefault_RL5_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMDefault_RL5_F_C* UDMDefault_RL5_F_C::GetDefaultObj()
{
	static class UDMDefault_RL5_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMDefault_RL5_F_C*>(UDMDefault_RL5_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


