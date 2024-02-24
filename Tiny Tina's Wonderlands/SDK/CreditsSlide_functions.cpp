#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CreditsSlide.CreditsSlide_C
// (Actor)

class UClass* ACreditsSlide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreditsSlide_C");

	return Clss;
}


// CreditsSlide_C CreditsSlide.Default__CreditsSlide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACreditsSlide_C* ACreditsSlide_C::GetDefaultObj()
{
	static class ACreditsSlide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACreditsSlide_C*>(ACreditsSlide_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreditsSlide.CreditsSlide_C.Outro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACreditsSlide_C::Outro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsSlide_C", "Outro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreditsSlide.CreditsSlide_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACreditsSlide_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsSlide_C", "UserConstructionScript");

	Params::ACreditsSlide_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreditsSlide.CreditsSlide_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACreditsSlide_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsSlide_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreditsSlide.CreditsSlide_C.ExecuteUbergraph_CreditsSlide
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACreditsSlide_C::ExecuteUbergraph_CreditsSlide(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsSlide_C", "ExecuteUbergraph_CreditsSlide");

	Params::ACreditsSlide_C_ExecuteUbergraph_CreditsSlide_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


