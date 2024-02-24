#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_GetComponentInterfaces.BPI_GetComponentInterfaces_C
// (None)

class UClass* IBPI_GetComponentInterfaces_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_GetComponentInterfaces_C");

	return Clss;
}


// BPI_GetComponentInterfaces_C BPI_GetComponentInterfaces.Default__BPI_GetComponentInterfaces_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_GetComponentInterfaces_C* IBPI_GetComponentInterfaces_C::GetDefaultObj()
{
	static class IBPI_GetComponentInterfaces_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_GetComponentInterfaces_C*>(IBPI_GetComponentInterfaces_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_GetComponentInterfaces.BPI_GetComponentInterfaces_C.GetWeakpointComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               HasInterface                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_WeakPoint_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GetComponentInterfaces_C::GetWeakpointComponent(bool* HasInterface, TScriptInterface<class IBPI_WeakPoint_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_GetComponentInterfaces_C", "GetWeakpointComponent");

	Params::IBPI_GetComponentInterfaces_C_GetWeakpointComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HasInterface != nullptr)
		*HasInterface = Parms.HasInterface;

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BPI_GetComponentInterfaces.BPI_GetComponentInterfaces_C.GetPingInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               bHasInterface                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Ping_C>PingInterface                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GetComponentInterfaces_C::GetPingInterface(bool* bHasInterface, TScriptInterface<class IBPI_Ping_C>* PingInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_GetComponentInterfaces_C", "GetPingInterface");

	Params::IBPI_GetComponentInterfaces_C_GetPingInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bHasInterface != nullptr)
		*bHasInterface = Parms.bHasInterface;

	if (PingInterface != nullptr)
		*PingInterface = Parms.PingInterface;

}

}


