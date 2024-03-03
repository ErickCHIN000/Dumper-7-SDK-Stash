#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Profile_Base.BP_Profile_Base_C
// (Actor)

class UClass* ABP_Profile_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Profile_Base_C");

	return Clss;
}


// BP_Profile_Base_C BP_Profile_Base.Default__BP_Profile_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Profile_Base_C* ABP_Profile_Base_C::GetDefaultObj()
{
	static class ABP_Profile_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Profile_Base_C*>(ABP_Profile_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Profile_Base.BP_Profile_Base_C.ExecuteUbergraph_BP_Profile_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Profile_Base_C::ExecuteUbergraph_BP_Profile_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Profile_Base_C", "ExecuteUbergraph_BP_Profile_Base");

	Params::ABP_Profile_Base_C_ExecuteUbergraph_BP_Profile_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


