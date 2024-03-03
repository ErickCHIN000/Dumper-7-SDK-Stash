#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BASE_ITEM.BP_BASE_ITEM_C
// (Actor)

class UClass* ABP_BASE_ITEM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BASE_ITEM_C");

	return Clss;
}


// BP_BASE_ITEM_C BP_BASE_ITEM.Default__BP_BASE_ITEM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BASE_ITEM_C* ABP_BASE_ITEM_C::GetDefaultObj()
{
	static class ABP_BASE_ITEM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BASE_ITEM_C*>(ABP_BASE_ITEM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BASE_ITEM.BP_BASE_ITEM_C.Get_Materials
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*>  ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)

TArray<class UMaterialInterface*> ABP_BASE_ITEM_C::Get_Materials(TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BASE_ITEM_C", "Get_Materials");

	Params::ABP_BASE_ITEM_C_Get_Materials_Params Parms{};

	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BASE_ITEM.BP_BASE_ITEM_C.GetMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMaterialInterface* ABP_BASE_ITEM_C::GetMaterial(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BASE_ITEM_C", "GetMaterial");

	Params::ABP_BASE_ITEM_C_GetMaterial_Params Parms{};

	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BASE_ITEM.BP_BASE_ITEM_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BASE_ITEM_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BASE_ITEM_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BASE_ITEM.BP_BASE_ITEM_C.End Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BASE_ITEM_C::End_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BASE_ITEM_C", "End Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BASE_ITEM.BP_BASE_ITEM_C.ExecuteUbergraph_BP_BASE_ITEM
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BASE_ITEM_C::ExecuteUbergraph_BP_BASE_ITEM(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BASE_ITEM_C", "ExecuteUbergraph_BP_BASE_ITEM");

	Params::ABP_BASE_ITEM_C_ExecuteUbergraph_BP_BASE_ITEM_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


