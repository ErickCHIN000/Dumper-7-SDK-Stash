#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ScorchDecal.BP_ScorchDecal_C
// (Actor)

class UClass* ABP_ScorchDecal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ScorchDecal_C");

	return Clss;
}


// BP_ScorchDecal_C BP_ScorchDecal.Default__BP_ScorchDecal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ScorchDecal_C* ABP_ScorchDecal_C::GetDefaultObj()
{
	static class ABP_ScorchDecal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ScorchDecal_C*>(ABP_ScorchDecal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ScorchDecal.BP_ScorchDecal_C.FadeIn__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ScorchDecal_C::FadeIn__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScorchDecal_C", "FadeIn__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ScorchDecal.BP_ScorchDecal_C.FadeIn__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ScorchDecal_C::FadeIn__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScorchDecal_C", "FadeIn__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ScorchDecal.BP_ScorchDecal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ScorchDecal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScorchDecal_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ScorchDecal.BP_ScorchDecal_C.ExecuteUbergraph_BP_ScorchDecal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetDecalMaterial_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScorchDecal_C::ExecuteUbergraph_BP_ScorchDecal(int32 EntryPoint, class UMaterialInterface* CallFunc_GetDecalMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ScorchDecal_C", "ExecuteUbergraph_BP_ScorchDecal");

	Params::ABP_ScorchDecal_C_ExecuteUbergraph_BP_ScorchDecal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDecalMaterial_ReturnValue = CallFunc_GetDecalMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


