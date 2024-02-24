#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CathedralStatue_V2_DM.CathedralStatue_V2_DM_C
// (Actor)

class UClass* ACathedralStatue_V2_DM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CathedralStatue_V2_DM_C");

	return Clss;
}


// CathedralStatue_V2_DM_C CathedralStatue_V2_DM.Default__CathedralStatue_V2_DM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACathedralStatue_V2_DM_C* ACathedralStatue_V2_DM_C::GetDefaultObj()
{
	static class ACathedralStatue_V2_DM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACathedralStatue_V2_DM_C*>(ACathedralStatue_V2_DM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CathedralStatue_V2_DM.CathedralStatue_V2_DM_C.Destroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACathedralStatue_V2_DM_C::Destroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CathedralStatue_V2_DM_C", "Destroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CathedralStatue_V2_DM.CathedralStatue_V2_DM_C.ExecuteUbergraph_CathedralStatue_V2_DM
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACathedralStatue_V2_DM_C::ExecuteUbergraph_CathedralStatue_V2_DM(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CathedralStatue_V2_DM_C", "ExecuteUbergraph_CathedralStatue_V2_DM");

	Params::ACathedralStatue_V2_DM_C_ExecuteUbergraph_CathedralStatue_V2_DM_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


