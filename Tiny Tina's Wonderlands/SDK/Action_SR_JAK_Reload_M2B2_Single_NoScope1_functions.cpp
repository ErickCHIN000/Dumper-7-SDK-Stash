#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SR_JAK_Reload_M2B2_Single_NoScope1.Action_SR_JAK_Reload_M2B2_Single_NoScope1_C
// (None)

class UClass* UAction_SR_JAK_Reload_M2B2_Single_NoScope1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SR_JAK_Reload_M2B2_Single_NoScope1_C");

	return Clss;
}


// Action_SR_JAK_Reload_M2B2_Single_NoScope1_C Action_SR_JAK_Reload_M2B2_Single_NoScope1.Default__Action_SR_JAK_Reload_M2B2_Single_NoScope1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SR_JAK_Reload_M2B2_Single_NoScope1_C* UAction_SR_JAK_Reload_M2B2_Single_NoScope1_C::GetDefaultObj()
{
	static class UAction_SR_JAK_Reload_M2B2_Single_NoScope1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SR_JAK_Reload_M2B2_Single_NoScope1_C*>(UAction_SR_JAK_Reload_M2B2_Single_NoScope1_C::StaticClass()->DefaultObject);

	return Default;
}

}


