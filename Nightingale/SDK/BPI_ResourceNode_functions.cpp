#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ResourceNode.BPI_ResourceNode_C
// (None)

class UClass* IBPI_ResourceNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ResourceNode_C");

	return Clss;
}


// BPI_ResourceNode_C BPI_ResourceNode.Default__BPI_ResourceNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ResourceNode_C* IBPI_ResourceNode_C::GetDefaultObj()
{
	static class IBPI_ResourceNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ResourceNode_C*>(IBPI_ResourceNode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ResourceNode.BPI_ResourceNode_C.IsInstanceHarvestable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InstanceID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHarvestable                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ResourceNode_C::IsInstanceHarvestable(int32 InstanceID, bool* IsHarvestable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ResourceNode_C", "IsInstanceHarvestable");

	Params::IBPI_ResourceNode_C_IsInstanceHarvestable_Params Parms{};

	Parms.InstanceID = InstanceID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHarvestable != nullptr)
		*IsHarvestable = Parms.IsHarvestable;

}


// Function BPI_ResourceNode.BPI_ResourceNode_C.GetGrantedResource
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InstanceID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ResourceData                                                     (Parm, OutParm, ContainsInstancedReference)

void IBPI_ResourceNode_C::GetGrantedResource(int32 InstanceID, bool* Success, struct FItemData* ResourceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ResourceNode_C", "GetGrantedResource");

	Params::IBPI_ResourceNode_C_GetGrantedResource_Params Parms{};

	Parms.InstanceID = InstanceID;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ResourceData != nullptr)
		*ResourceData = std::move(Parms.ResourceData);

}

}


