#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ClientLogItem.BP_ClientLogItem_C
// (None)

class UClass* UBP_ClientLogItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ClientLogItem_C");

	return Clss;
}


// BP_ClientLogItem_C BP_ClientLogItem.Default__BP_ClientLogItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ClientLogItem_C* UBP_ClientLogItem_C::GetDefaultObj()
{
	static class UBP_ClientLogItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ClientLogItem_C*>(UBP_ClientLogItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


