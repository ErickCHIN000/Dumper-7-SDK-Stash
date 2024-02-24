#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IFeat_Barbarian.IFeat_Barbarian_C
// (None)

class UClass* IIFeat_Barbarian_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IFeat_Barbarian_C");

	return Clss;
}


// IFeat_Barbarian_C IFeat_Barbarian.Default__IFeat_Barbarian_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIFeat_Barbarian_C* IIFeat_Barbarian_C::GetDefaultObj()
{
	static class IIFeat_Barbarian_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIFeat_Barbarian_C*>(IIFeat_Barbarian_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IFeat_Barbarian.IFeat_Barbarian_C.IsEnraged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_Barbarian_C::IsEnraged(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_Barbarian_C", "IsEnraged");

	Params::IIFeat_Barbarian_C_IsEnraged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_Barbarian.IFeat_Barbarian_C.StartRage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_Barbarian_C::StartRage(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_Barbarian_C", "StartRage");

	Params::IIFeat_Barbarian_C_StartRage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_Barbarian.IFeat_Barbarian_C.GetMaxRageTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_Barbarian_C::GetMaxRageTime(float* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_Barbarian_C", "GetMaxRageTime");

	Params::IIFeat_Barbarian_C_GetMaxRageTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_Barbarian.IFeat_Barbarian_C.GetRageTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_Barbarian_C::GetRageTime(float* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_Barbarian_C", "GetRageTime");

	Params::IIFeat_Barbarian_C_GetRageTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_Barbarian.IFeat_Barbarian_C.EndRage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_Barbarian_C::EndRage(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_Barbarian_C", "EndRage");

	Params::IIFeat_Barbarian_C_EndRage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_Barbarian.IFeat_Barbarian_C.RemoveRageTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_Barbarian_C::RemoveRageTime(float Time, float* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_Barbarian_C", "RemoveRageTime");

	Params::IIFeat_Barbarian_C_RemoveRageTime_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_Barbarian.IFeat_Barbarian_C.AddRageTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_Barbarian_C::AddRageTime(float Time, float* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_Barbarian_C", "AddRageTime");

	Params::IIFeat_Barbarian_C_AddRageTime_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


