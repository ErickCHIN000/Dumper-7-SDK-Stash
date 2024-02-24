#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass iActionSkill_KotC_AS4.iActionSkill_KotC_AS4_C
// (None)

class UClass* IIActionSkill_KotC_AS4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("iActionSkill_KotC_AS4_C");

	return Clss;
}


// iActionSkill_KotC_AS4_C iActionSkill_KotC_AS4.Default__iActionSkill_KotC_AS4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIActionSkill_KotC_AS4_C* IIActionSkill_KotC_AS4_C::GetDefaultObj()
{
	static class IIActionSkill_KotC_AS4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIActionSkill_KotC_AS4_C*>(IIActionSkill_KotC_AS4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function iActionSkill_KotC_AS4.iActionSkill_KotC_AS4_C.KnightOfTheClawAllowHammerRecall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIActionSkill_KotC_AS4_C::KnightOfTheClawAllowHammerRecall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("iActionSkill_KotC_AS4_C", "KnightOfTheClawAllowHammerRecall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function iActionSkill_KotC_AS4.iActionSkill_KotC_AS4_C.KnightOfTheClawStartRecall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIActionSkill_KotC_AS4_C::KnightOfTheClawStartRecall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("iActionSkill_KotC_AS4_C", "KnightOfTheClawStartRecall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function iActionSkill_KotC_AS4.iActionSkill_KotC_AS4_C.KnightOfTheClawGetHammerRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIActionSkill_KotC_AS4_C::KnightOfTheClawGetHammerRef(class AActor** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("iActionSkill_KotC_AS4_C", "KnightOfTheClawGetHammerRef");

	Params::IIActionSkill_KotC_AS4_C_KnightOfTheClawGetHammerRef_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function iActionSkill_KotC_AS4.iActionSkill_KotC_AS4_C.KnightOfTheClawRegisterHammer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Hammer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIActionSkill_KotC_AS4_C::KnightOfTheClawRegisterHammer(class AActor* Hammer, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("iActionSkill_KotC_AS4_C", "KnightOfTheClawRegisterHammer");

	Params::IIActionSkill_KotC_AS4_C_KnightOfTheClawRegisterHammer_Params Parms{};

	Parms.Hammer = Hammer;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


