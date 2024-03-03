#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharInterface.BP_CharInterface_C
// (None)

class UClass* IBP_CharInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharInterface_C");

	return Clss;
}


// BP_CharInterface_C BP_CharInterface.Default__BP_CharInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_CharInterface_C* IBP_CharInterface_C::GetDefaultObj()
{
	static class IBP_CharInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_CharInterface_C*>(IBP_CharInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CharInterface.BP_CharInterface_C.Exit Horse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_CharInterface_C::Exit_Horse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharInterface_C", "Exit Horse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharInterface.BP_CharInterface_C.SetOnLeft?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OnLeft_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBP_CharInterface_C::SetOnLeft_(bool OnLeft_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharInterface_C", "SetOnLeft?");

	Params::IBP_CharInterface_C_SetOnLeft__Params Parms{};

	Parms.OnLeft_ = OnLeft_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharInterface.BP_CharInterface_C.SetMountHorse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHorseBP_C*                  Mount                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_CharInterface_C::SetMountHorse(class AHorseBP_C* Mount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharInterface_C", "SetMountHorse");

	Params::IBP_CharInterface_C_SetMountHorse_Params Parms{};

	Parms.Mount = Mount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharInterface.BP_CharInterface_C.Set Transport Type
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETransportType          TransportType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_CharInterface_C::Set_Transport_Type(enum class ETransportType TransportType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharInterface_C", "Set Transport Type");

	Params::IBP_CharInterface_C_Set_Transport_Type_Params Parms{};

	Parms.TransportType = TransportType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharInterface.BP_CharInterface_C.Get Transport Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETransportType          TransportType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_CharInterface_C::Get_Transport_Type(enum class ETransportType* TransportType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharInterface_C", "Get Transport Type");

	Params::IBP_CharInterface_C_Get_Transport_Type_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TransportType != nullptr)
		*TransportType = Parms.TransportType;

}


// Function BP_CharInterface.BP_CharInterface_C.mount Horse Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_CharInterface_C::Mount_Horse_Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharInterface_C", "mount Horse Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharInterface.BP_CharInterface_C.Mount Horse Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_CharInterface_C::Mount_Horse_Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharInterface_C", "Mount Horse Left");



	UObject::ProcessEvent(Func, nullptr);

}

}


