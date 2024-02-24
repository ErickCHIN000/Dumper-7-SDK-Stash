#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMDefault_RL5_T.DMDefault_RL5_T_C
// (None)

class UClass* UDMDefault_RL5_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMDefault_RL5_T_C");

	return Clss;
}


// DMDefault_RL5_T_C DMDefault_RL5_T.Default__DMDefault_RL5_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMDefault_RL5_T_C* UDMDefault_RL5_T_C::GetDefaultObj()
{
	static class UDMDefault_RL5_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMDefault_RL5_T_C*>(UDMDefault_RL5_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


