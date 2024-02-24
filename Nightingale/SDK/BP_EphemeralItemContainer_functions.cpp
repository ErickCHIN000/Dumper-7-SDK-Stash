#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EphemeralItemContainer.BP_EphemeralItemContainer_C
// (Actor)

class UClass* ABP_EphemeralItemContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EphemeralItemContainer_C");

	return Clss;
}


// BP_EphemeralItemContainer_C BP_EphemeralItemContainer.Default__BP_EphemeralItemContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EphemeralItemContainer_C* ABP_EphemeralItemContainer_C::GetDefaultObj()
{
	static class ABP_EphemeralItemContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EphemeralItemContainer_C*>(ABP_EphemeralItemContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EphemeralItemContainer.BP_EphemeralItemContainer_C.GetContainerFromProvider
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> ABP_EphemeralItemContainer_C::GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EphemeralItemContainer_C", "GetContainerFromProvider");

	Params::ABP_EphemeralItemContainer_C_GetContainerFromProvider_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_EphemeralItemContainer.BP_EphemeralItemContainer_C.GetDefaultContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> ABP_EphemeralItemContainer_C::GetDefaultContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EphemeralItemContainer_C", "GetDefaultContainer");

	Params::ABP_EphemeralItemContainer_C_GetDefaultContainer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_EphemeralItemContainer.BP_EphemeralItemContainer_C.HasContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Container                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_EphemeralItemContainer_C::HasContainer(TScriptInterface<class IItemContainer>& Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EphemeralItemContainer_C", "HasContainer");

	Params::ABP_EphemeralItemContainer_C_HasContainer_Params Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_EphemeralItemContainer.BP_EphemeralItemContainer_C.HasContainerFromHandle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_EphemeralItemContainer_C::HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EphemeralItemContainer_C", "HasContainerFromHandle");

	Params::ABP_EphemeralItemContainer_C_HasContainerFromHandle_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_EphemeralItemContainer.BP_EphemeralItemContainer_C.OnRep_Container Capacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EphemeralItemContainer_C::OnRep_Container_Capacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EphemeralItemContainer_C", "OnRep_Container Capacity");



	UObject::ProcessEvent(Func, nullptr);

}

}


