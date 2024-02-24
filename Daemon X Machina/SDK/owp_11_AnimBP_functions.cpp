#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass owp_11_AnimBP.owp_11_AnimBP_C
// (None)

class UClass* UOwp_11_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("owp_11_AnimBP_C");

	return Clss;
}


// owp_11_AnimBP_C owp_11_AnimBP.Default__owp_11_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOwp_11_AnimBP_C* UOwp_11_AnimBP_C::GetDefaultObj()
{
	static class UOwp_11_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOwp_11_AnimBP_C*>(UOwp_11_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function owp_11_AnimBP.owp_11_AnimBP_C.ExecuteUbergraph_owp_11_AnimBP
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOwp_11_AnimBP_C::ExecuteUbergraph_owp_11_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("owp_11_AnimBP_C", "ExecuteUbergraph_owp_11_AnimBP");

	Params::UOwp_11_AnimBP_C_ExecuteUbergraph_owp_11_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


