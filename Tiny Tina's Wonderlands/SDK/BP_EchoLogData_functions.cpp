#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EchoLogData.BP_EchoLogData_C
// (None)

class UClass* UBP_EchoLogData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EchoLogData_C");

	return Clss;
}


// BP_EchoLogData_C BP_EchoLogData.Default__BP_EchoLogData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_EchoLogData_C* UBP_EchoLogData_C::GetDefaultObj()
{
	static class UBP_EchoLogData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_EchoLogData_C*>(UBP_EchoLogData_C::StaticClass()->DefaultObject);

	return Default;
}

}


