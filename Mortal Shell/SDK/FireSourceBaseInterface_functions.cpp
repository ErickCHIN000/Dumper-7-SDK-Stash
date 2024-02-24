#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireSourceBaseInterface.FireSourceBaseInterface_C
// (None)

class UClass* IFireSourceBaseInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireSourceBaseInterface_C");

	return Clss;
}


// FireSourceBaseInterface_C FireSourceBaseInterface.Default__FireSourceBaseInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IFireSourceBaseInterface_C* IFireSourceBaseInterface_C::GetDefaultObj()
{
	static class IFireSourceBaseInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IFireSourceBaseInterface_C*>(IFireSourceBaseInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FireSourceBaseInterface.FireSourceBaseInterface_C.Barbarous_RemoveFireSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      FireSource                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IFireSourceBaseInterface_C::Barbarous_RemoveFireSource(class AActor* FireSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireSourceBaseInterface_C", "Barbarous_RemoveFireSource");

	Params::IFireSourceBaseInterface_C_Barbarous_RemoveFireSource_Params Parms{};

	Parms.FireSource = FireSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireSourceBaseInterface.FireSourceBaseInterface_C.Barbarous_AddFireSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      FireSource                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IFireSourceBaseInterface_C::Barbarous_AddFireSource(class AActor* FireSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireSourceBaseInterface_C", "Barbarous_AddFireSource");

	Params::IFireSourceBaseInterface_C_Barbarous_AddFireSource_Params Parms{};

	Parms.FireSource = FireSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireSourceBaseInterface.FireSourceBaseInterface_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IFireSourceBaseInterface_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireSourceBaseInterface_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireSourceBaseInterface.FireSourceBaseInterface_C.NeedsUpdates
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               bNeeds                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IFireSourceBaseInterface_C::NeedsUpdates(bool* bNeeds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireSourceBaseInterface_C", "NeedsUpdates");

	Params::IFireSourceBaseInterface_C_NeedsUpdates_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bNeeds != nullptr)
		*bNeeds = Parms.bNeeds;

}


// Function FireSourceBaseInterface.FireSourceBaseInterface_C.ClearEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IFireSourceBaseInterface_C::ClearEffect(class ACharacter* Char, int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireSourceBaseInterface_C", "ClearEffect");

	Params::IFireSourceBaseInterface_C_ClearEffect_Params Parms{};

	Parms.Char = Char;
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireSourceBaseInterface.FireSourceBaseInterface_C.ApplyEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IFireSourceBaseInterface_C::ApplyEffect(class ACharacter* Char, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireSourceBaseInterface_C", "ApplyEffect");

	Params::IFireSourceBaseInterface_C_ApplyEffect_Params Parms{};

	Parms.Char = Char;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


